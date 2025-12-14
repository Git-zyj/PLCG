/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191592
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [(_Bool)1] |= ((/* implicit */_Bool) (signed char)89);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) (+(arr_5 [i_1] [i_3 - 1])));
                            arr_14 [i_1] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned char) arr_2 [i_3]);
                            arr_15 [i_0 + 3] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)2)))), ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1]))))))) ? (arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_0 + 2]) : (((/* implicit */long long int) 2050524220))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-99)), ((unsigned char)2)))), (var_12))))));
    var_19 += var_3;
}
