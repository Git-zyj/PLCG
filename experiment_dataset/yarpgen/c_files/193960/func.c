/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193960
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(unsigned short)12] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (arr_4 [(_Bool)1] [i_1 - 1] [i_2]) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) << (((((/* implicit */int) var_2)) + (108)))))))) ? (((/* implicit */int) (((-(var_9))) <= (((/* implicit */int) var_15))))) : (((/* implicit */int) (unsigned short)1984))));
                    arr_7 [4U] [(unsigned char)4] [i_0] [(signed char)7] = ((/* implicit */_Bool) (~(max((max((3994656311U), (((/* implicit */unsigned int) (short)32640)))), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                arr_12 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_11 [i_3] [i_3] [6])) ? (arr_11 [(short)13] [i_4] [i_3]) : (arr_9 [i_3])))));
                var_19 = ((/* implicit */unsigned short) arr_11 [i_3] [8U] [i_3]);
                arr_13 [(unsigned short)5] = ((short) (-((((_Bool)1) ? (var_14) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
