/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36599
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) == (arr_0 [(short)17]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((unsigned long long int) arr_0 [i_0])))))));
        var_19 *= ((/* implicit */_Bool) var_6);
        var_20 = ((/* implicit */unsigned short) (signed char)-107);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((_Bool) ((arr_3 [i_1]) - (arr_3 [(unsigned short)8]))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) var_7))) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) min((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [i_1])))), ((_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) var_1);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
            {
                arr_12 [i_2] [i_2] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((+(arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
                arr_13 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [22LL] [8ULL] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_14 [i_2] |= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
            }
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_3 - 1])), (((((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_6])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_0)))))))));
                        arr_20 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (int i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            arr_23 [i_3] [i_3] [10LL] [i_6] [i_7] = ((/* implicit */_Bool) var_6);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((12465108306781091275ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((1676934804450448985LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)11064)))))))))) >> (((5981635766928460320ULL) - (5981635766928460293ULL)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_2] [i_2] |= ((/* implicit */long long int) arr_15 [13] [13] [i_5] [i_6]);
                            arr_27 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) || (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_7 [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_28 [i_2] [i_2] [i_2] [11LL] [i_3] [i_2] = min((var_4), (((/* implicit */unsigned int) arr_24 [(short)4] [i_3] [i_3] [(short)17])));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            arr_31 [i_9] [i_3] [i_6] [i_6] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_19 [i_9] [i_9] [i_9 + 2] [i_9 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [(_Bool)0] [i_9] [i_9 + 1] [i_9 - 1])) == (((/* implicit */int) arr_19 [i_9] [i_9] [i_9 + 1] [i_9 + 1])))))) : (((arr_19 [i_9] [13LL] [i_9 + 2] [i_9 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_9 + 2] [i_9 - 1]))) : (var_6)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((((/* implicit */int) (short)24576)) + (((/* implicit */int) (short)5952)))))))));
                            arr_32 [i_2] [i_3] [i_3] [i_6] [i_3] [11] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_13))));
                            arr_33 [i_2] [i_3] [(short)16] [(unsigned short)20] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_6] [i_3] [i_6])) ? (5981635766928460319ULL) : (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11065)))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((_Bool) -8227569544133215890LL))))) >> ((((-(((/* implicit */int) arr_18 [22ULL] [21LL] [i_5] [i_5])))) + (2)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) + (((((/* implicit */_Bool) arr_21 [i_10])) ? (((/* implicit */unsigned long long int) -6059590732665133592LL)) : (arr_30 [i_10] [i_10] [i_10] [i_3])))))) ? ((~(var_8))) : (arr_21 [i_6])));
                            arr_38 [i_6] [i_6] [i_6] [i_3] = ((/* implicit */short) var_9);
                        }
                        for (long long int i_11 = 2; i_11 < 21; i_11 += 1) 
                        {
                            arr_41 [i_2] [i_5] [i_3] = (unsigned short)8192;
                            arr_42 [i_3] [i_3] [i_5] [i_11 + 1] = ((/* implicit */unsigned short) (short)-5953);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5952)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_3] [i_3 + 2] [i_3 + 1] [i_3])) <= (((/* implicit */int) arr_18 [i_3] [i_3 + 2] [i_3 + 2] [i_3])))))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_47 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))) != (((unsigned int) var_3))))) ^ (((((((/* implicit */int) var_1)) / (((/* implicit */int) arr_11 [(short)9])))) - ((+(((/* implicit */int) (unsigned short)34542))))))));
                            arr_48 [i_2] [i_3] [(short)11] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_3] [i_5] [i_6] [i_3]))) & (((unsigned int) arr_43 [i_3] [i_3] [i_3] [i_12] [i_12])))) >> (((3074093309U) - (3074093291U)))));
                        }
                    }
                } 
            } 
        }
    }
    for (int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6059590732665133602LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (-2305843009213693952LL))) == (((/* implicit */long long int) 1965491086)))))));
        var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))));
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) / (((/* implicit */int) (((-(3200322808458016353ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29697))))))));
}
