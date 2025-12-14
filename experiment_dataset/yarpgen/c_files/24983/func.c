/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24983
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
    var_14 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_8)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
        arr_3 [17LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) (short)3129)) + (((/* implicit */int) var_5)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (short)3150))))))) : (var_1)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))))) ? ((+(((((/* implicit */_Bool) 858550688U)) ? (((/* implicit */int) (short)-3124)) : (((/* implicit */int) var_5)))))) : (33546240)));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_12)));
        arr_5 [10U] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)3135)) : (((/* implicit */int) (short)-3237))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-3136)) : (((/* implicit */int) var_2)))))));
        arr_9 [i_1] = var_1;
    }
    for (signed char i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) arr_12 [i_2 - 1])), (var_7)))));
        arr_13 [(signed char)11] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) (short)-3137))))) ? ((-(arr_12 [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (3452082003U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1]))) : (842885273U)))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3436416622U)) ? (((/* implicit */int) (unsigned short)224)) : (((/* implicit */int) (signed char)-117))));
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] = ((/* implicit */short) (_Bool)0);
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) 864691128455135232ULL);
                            var_22 -= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (unsigned short)14215))))), (((((/* implicit */int) var_8)) << (((/* implicit */int) (!(((/* implicit */_Bool) 1413052879)))))))));
                            arr_29 [i_3] = ((/* implicit */long long int) var_9);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
            {
                arr_34 [i_3] [i_3 + 1] [i_4] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                arr_35 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((-8436663934088712098LL), (((/* implicit */long long int) (short)-26160)))) : (((/* implicit */long long int) 3436416588U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (max((-8436663934088712098LL), (((/* implicit */long long int) var_10)))))))) : (((((/* implicit */_Bool) 2147483647)) ? ((~(17299194279181036650ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_6)))))))));
            }
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
            {
                arr_38 [i_9] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [(short)19] [(short)19] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3])))))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    arr_41 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_16 [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_16 [i_3 - 1])))))));
                    var_23 = min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)29)));
                    arr_42 [i_3] [i_4] [i_9] [i_9] [(unsigned short)9] [i_10] = ((/* implicit */_Bool) var_4);
                }
            }
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) var_1))));
            arr_43 [i_3] [i_4] = (unsigned short)65311;
        }
        arr_44 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 842885254U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) 842885242U))))));
        arr_45 [i_3] = ((/* implicit */long long int) (((~(((/* implicit */int) var_13)))) + ((-(((/* implicit */int) var_11))))));
        arr_46 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
}
