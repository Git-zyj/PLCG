/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19636
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_15 = arr_2 [i_0];
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_17 = (~(min((arr_0 [i_1]), (arr_0 [i_1]))));
        arr_6 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_1])))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) max((var_10), (var_12))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_1]))))), (arr_0 [i_1])))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (short)21400)) : (((/* implicit */int) (short)21400))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_13 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_12 [i_4 - 3]);
                                var_20 += ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_4 - 3] [i_3 + 1])) ^ (((/* implicit */int) arr_10 [i_4 + 1] [i_3 - 1])))) <= (((/* implicit */int) var_12))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */short) var_7)), (var_3))), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_12 [(unsigned short)2]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_17 [6ULL] [6U] [i_3] [i_4 - 2]);
                    var_23 ^= ((/* implicit */short) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)))) ? (min((2147482624LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_4 [i_2]))))));
    }
    var_25 += ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (short)21400)), (-2721095919318202997LL))) + (9223372036854775807LL))) << (((var_8) - (3228554089U)))));
}
