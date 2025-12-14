/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235196
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) 767012635);
        var_18 = ((/* implicit */unsigned long long int) var_5);
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) max((-767012635), (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 1])) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) 767012635))));
        var_20 = ((/* implicit */signed char) arr_3 [12]);
        arr_4 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */long long int) ((unsigned char) ((-450895221) ^ (arr_2 [i_1 - 1]))));
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_5 + 1] [i_5] [i_5] [i_5] [i_5])) % (((/* implicit */int) arr_13 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [(unsigned char)13]))));
                        var_23 = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2))))));
                        var_24 = ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_13 [(unsigned char)13] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1])));
                        arr_14 [(unsigned char)6] [i_4] &= ((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [(unsigned char)12] [i_5]);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4]))));
                    }
                    var_26 = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_3])) << (((((/* implicit */int) arr_12 [i_2] [i_3] [i_4])) - (80)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_3])) << (((((((/* implicit */int) arr_12 [i_2] [i_3] [i_4])) - (80))) + (49))))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (min((((/* implicit */unsigned long long int) 1182993046U)), (arr_3 [i_2]))))))));
    }
    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((min((((unsigned int) arr_11 [(_Bool)1])), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) var_1))))))) << (((min((var_8), (((/* implicit */unsigned long long int) (unsigned short)10)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6])))))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_2))));
    }
}
