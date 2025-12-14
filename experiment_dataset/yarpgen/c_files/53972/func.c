/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53972
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))))), (var_11)));
    var_17 *= max((((/* implicit */unsigned int) var_13)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (2241832961U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_15))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483619)) ? (((/* implicit */int) (short)32756)) : (-389005386)))))) - (32754U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [1U] = ((_Bool) 8132552066385301799ULL);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) 15368568555315044757ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_3)) != (((/* implicit */int) (short)9013)))));
                            arr_15 [i_0] [i_1 - 2] [i_2] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2] [i_2] [i_2])) ? (arr_12 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2]) : (((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_2] [i_2] [(_Bool)1] [i_2 - 1]))));
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((2920976727937294357ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            var_21 = var_12;
                            arr_19 [i_0] [i_1 + 1] [i_2 - 1] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_0))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_1 + 3] = ((/* implicit */_Bool) arr_7 [i_0] [6ULL] [i_2]);
                            arr_25 [i_0] |= ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_23 [i_3] [15U] [i_3] [i_3] [i_3] [i_3])))));
                            var_22 -= ((/* implicit */signed char) ((arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2]) / (arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_0] = ((/* implicit */short) ((((int) var_7)) >> ((((~(((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_7] [i_7])))) + (68)))));
                            arr_30 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_13 [i_2 - 2] [i_2 + 1] [i_2] [i_2] [i_2 - 1])));
                            var_23 = arr_4 [i_0] [i_0] [i_0];
                            var_24 = ((/* implicit */_Bool) ((arr_7 [i_1 + 1] [i_2 - 1] [i_3]) << (((((/* implicit */int) var_2)) + (12323)))));
                            var_25 = ((/* implicit */short) var_15);
                        }
                        arr_31 [i_0] [i_0] = ((/* implicit */short) ((arr_28 [i_1 + 1] [i_1 + 1] [i_1 - 2]) ? (var_10) : (var_11)));
                    }
                    var_26 += ((/* implicit */_Bool) -2147483619);
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) var_6);
}
