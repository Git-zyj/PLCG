/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191552
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3 - 2])) + (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_3 - 2])) : (((/* implicit */int) arr_5 [i_3 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)20634)), (arr_6 [i_3 + 2]))))));
                            arr_12 [i_0] [i_3] [i_1] [(unsigned char)14] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [3])) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))));
                            arr_13 [i_0] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (max((((/* implicit */unsigned short) arr_4 [i_0] [i_1])), (arr_5 [i_0])))));
            }
        } 
    } 
    var_10 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_5))))))));
}
