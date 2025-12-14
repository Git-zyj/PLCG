/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26421
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [16ULL] [(signed char)8] [i_1] = ((/* implicit */unsigned long long int) var_11);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((var_3), (var_12)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) (+(var_8)));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_0);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)127)))))));
                        var_22 = ((/* implicit */int) 3380088429U);
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_16 [i_4] [i_2] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */long long int) (short)-26016);
                        arr_17 [i_4] [(unsigned char)10] [i_1] [i_4] = ((/* implicit */int) var_1);
                        var_23 = var_13;
                        var_24 *= var_12;
                        var_25 = ((/* implicit */int) max((var_25), (var_10)));
                    }
                    var_26 = var_7;
                    arr_18 [i_1] [i_2] = var_0;
                }
            }
        } 
    } 
    var_27 -= ((/* implicit */long long int) var_10);
    var_28 = (-(max((((/* implicit */int) (signed char)-61)), (4193792))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) (+(112694078U)));
        var_29 = ((/* implicit */signed char) (-(3607921231U)));
    }
}
