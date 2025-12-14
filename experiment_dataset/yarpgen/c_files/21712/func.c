/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21712
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
    var_19 = -995851260;
    var_20 = ((/* implicit */signed char) ((unsigned int) var_10));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(0LL)))) + ((~(arr_3 [i_0]))))))));
                    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]))) : (-17LL)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned short) var_13);
                        arr_11 [13LL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_13));
                        var_24 = var_1;
                        arr_12 [i_0 + 1] [i_1] [(signed char)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0 + 1] [i_1] [1U] [i_3])) / (((/* implicit */int) arr_7 [(signed char)11] [(signed char)11] [i_2] [i_3]))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        arr_17 [(short)0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_6)))));
                        var_25 = ((/* implicit */signed char) var_1);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_21 [7ULL] [(short)5] [19LL] [i_4] [i_4] [i_4] [(short)5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))));
                            arr_22 [20] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [12U] [i_0 + 1] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */long long int) 1762937315U)) : (((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_0 - 1])))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(2704935530U)))) : (arr_14 [i_0 + 1])));
                        }
                    }
                    arr_23 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-20388))));
                }
            } 
        } 
        var_28 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(short)19])) : (((/* implicit */int) (short)28672)));
    }
}
