/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26411
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_11 &= ((((/* implicit */_Bool) (unsigned char)43)) || (((/* implicit */_Bool) 1U)));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~(18446744073709551615ULL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((-4727394488587764328LL) == (((/* implicit */long long int) 2147483647))))), (var_2)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_14 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_4 + 3] [i_4 + 3])) ? (var_0) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)36477)), (var_4))))))));
                            var_15 |= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_0)))));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_16 ^= min((((/* implicit */int) ((_Bool) var_2))), (max((((/* implicit */int) arr_13 [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_0 + 2] [i_0] [i_0])), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1)))))));
                            arr_15 [3LL] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) max((arr_0 [i_5] [i_0]), (8210161018688440621ULL)));
                            var_17 += ((/* implicit */int) 9223372036854775807LL);
                            var_18 = ((0LL) << (((min((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [i_2] [5ULL])), (var_4)))), (arr_3 [i_5] [2LL] [2LL]))) + (7808224168513617350LL))));
                        }
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [0]))))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (min((var_8), (((/* implicit */long long int) var_9)))))))))));
                            var_20 *= ((/* implicit */unsigned long long int) min(((_Bool)1), (((arr_2 [i_1]) && (((/* implicit */_Bool) var_2))))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) (-(var_4)))) || (((/* implicit */_Bool) var_0)));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 938604683280040784ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-106))));
                    }
                } 
            } 
            arr_19 [i_1 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_12 [i_0 + 2])), (((((/* implicit */int) arr_12 [i_0 - 1])) + (((/* implicit */int) (unsigned short)26416))))));
            var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 + 1]))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_16 [i_0] [(unsigned short)15] [i_0] [i_0])))));
            arr_20 [i_1 + 1] = var_8;
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                arr_25 [i_8 - 1] = ((/* implicit */unsigned char) (signed char)36);
                var_23 = (_Bool)1;
                arr_26 [i_0 + 2] [i_7] [i_0 + 2] = ((/* implicit */unsigned short) 4584908557341490526ULL);
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_7] [i_0] [(unsigned char)14] [i_8 + 2] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) arr_23 [i_8 + 1] [i_7 + 1] [i_7 - 1] [i_0 + 1])))))));
            }
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                var_25 = var_0;
                arr_31 [i_0 - 1] [i_7 + 2] [i_9 - 1] [i_9 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((17508139390429510811ULL) - (17508139390429510790ULL))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                arr_35 [i_10] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_10)));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_10))));
                    var_27 &= ((/* implicit */int) arr_34 [i_0] [i_7 - 1] [i_7]);
                    arr_38 [i_0] [i_7] [(unsigned short)9] [i_7] [i_7 + 2] [(unsigned short)9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_0)));
                }
                arr_39 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (signed char)-38)))));
            }
            arr_40 [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_5 [i_7]))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (short i_14 = 1; i_14 < 16; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_7 + 1]))));
                            var_30 *= ((/* implicit */short) ((((_Bool) -1818435820)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_9))));
                            var_31 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7 - 1] [i_7 - 1] [i_0]))) * (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 + 1] [(unsigned char)6])))))));
            }
            var_33 = ((/* implicit */long long int) max((var_33), ((-(var_8)))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 4) 
        {
            arr_52 [i_15] = ((/* implicit */short) arr_6 [i_15] [i_0 + 1] [(_Bool)1] [i_0 + 1]);
            arr_53 [i_0] [i_0] = (((_Bool)1) ? (((((/* implicit */_Bool) 2412070437923945549ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_37 [i_0 - 1] [i_15] [i_15 - 1] [10LL] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        }
    }
    var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_8), (((/* implicit */long long int) -2147483647)))))))));
    var_35 = ((/* implicit */long long int) (signed char)-85);
    var_36 *= ((/* implicit */short) ((((/* implicit */int) var_6)) ^ ((-(((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))))));
}
