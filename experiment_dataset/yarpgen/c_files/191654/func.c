/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191654
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) max((((/* implicit */int) var_8)), (-722575500))))), ((-(((/* implicit */int) (_Bool)1))))));
        var_12 = ((/* implicit */_Bool) (~(min((arr_0 [i_0 + 2] [i_0 + 1]), (arr_1 [(unsigned char)8])))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1 - 1]));
        var_14 = ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_1 + 1]));
    }
    for (short i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_15 -= ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2])) >= (arr_5 [i_2])))))) | (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 - 1])))));
            var_16 = ((/* implicit */unsigned int) max((((/* implicit */short) ((arr_9 [i_2 + 1]) < (arr_9 [i_2 - 1])))), ((short)3977)));
        }
        var_17 = ((/* implicit */signed char) ((short) -980240175));
        var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (arr_9 [i_2 + 2]) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) -980240175)) ? (arr_6 [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 - 1]))))));
    }
    for (short i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((short) min((max((arr_4 [i_4] [i_4]), (((/* implicit */unsigned long long int) -980240175)))), (arr_5 [i_4]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_20 &= ((((/* implicit */_Bool) -980240165)) ? (((((/* implicit */unsigned long long int) 980240165)) & (0ULL))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [i_4 + 2]) : (arr_3 [i_4 + 2]))));
                var_21 = ((signed char) (+(arr_8 [i_4 + 2])));
            }
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_14 [i_5]), (var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((1ULL), (((/* implicit */unsigned long long int) var_1))))))) : (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_13 [i_4]))))) ? (((/* implicit */unsigned long long int) (+(arr_14 [i_5])))) : (((unsigned long long int) 17295299777511658371ULL))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_4 - 1]) >> (((var_9) - (1414656754260517242ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (max((((/* implicit */unsigned long long int) 466415697)), (arr_8 [i_4]))) : (arr_5 [i_4 + 2]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((-(-128393049))))))));
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                var_24 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)20787))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -128393058)) ? (-2117028796) : (980240164)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 980240158)))) : (14609395641752138498ULL))));
                /* LoopSeq 4 */
                for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (+(max((arr_14 [i_4 + 1]), (var_2)))));
                    var_26 = (!(((/* implicit */_Bool) min((arr_14 [i_4 - 1]), (-128393049)))));
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */int) min((var_27), (((min((arr_7 [i_7 - 2]), (arr_7 [i_7 - 2]))) ? (((/* implicit */int) ((_Bool) arr_7 [i_7 - 1]))) : (((/* implicit */int) arr_7 [i_7 + 2]))))));
                    var_28 |= ((/* implicit */short) arr_26 [i_9] [8] [8] [i_4]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (arr_8 [i_10]) : (10ULL)));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (arr_9 [i_4 + 2]) : (arr_9 [i_4 - 1])));
                    var_31 = ((/* implicit */int) ((unsigned long long int) 16777215ULL));
                    var_32 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)511)))))));
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    var_33 ^= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_18 [i_7 + 2])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-121)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_4 - 1] [8ULL])) : (((/* implicit */int) arr_12 [i_4 + 2] [24]))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_12] [i_11])) ? (((/* implicit */int) (unsigned char)115)) : (((((/* implicit */int) (unsigned char)80)) & (980240165)))));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((arr_27 [i_4 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [(short)10] [(short)18] [i_7])) > (((/* implicit */int) arr_12 [i_4] [(_Bool)1])))))))))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15)))))));
                        var_38 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2704780830140136520ULL));
                    }
                    for (short i_13 = 2; i_13 < 24; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_33 [(short)21] [(short)21] [i_7 + 2] [i_11] [i_13 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5])) && (((/* implicit */_Bool) arr_33 [i_4] [i_5] [i_7] [i_5] [i_13]))))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_9 [i_4 + 1])))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) && (arr_22 [i_4 + 1] [i_4 + 2] [i_7 + 2] [i_7 - 1])))))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14])) ? (var_3) : (((((/* implicit */_Bool) arr_33 [i_4] [(_Bool)1] [i_7 + 2] [i_11] [i_14 + 2])) ? (16205841923751521817ULL) : (arr_25 [i_11])))))) ? (min((((/* implicit */unsigned long long int) 980240164)), (17839820946219810633ULL))) : (((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_4 + 2])) ? (((((/* implicit */_Bool) arr_31 [8ULL])) ? (var_3) : (1ULL))) : (min((((/* implicit */unsigned long long int) var_10)), (2240902149958029798ULL)))))));
                        var_42 = ((/* implicit */unsigned char) max((min((var_3), (var_3))), (arr_36 [i_4] [i_14 + 1] [i_14] [i_14 + 2] [i_14 - 1])));
                        var_43 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_7 + 1] [i_4])) ? (((((/* implicit */int) var_1)) | (arr_11 [i_4]))) : (((var_0) + (((/* implicit */int) (short)-22949))))))), (max((16205841923751521788ULL), (((/* implicit */unsigned long long int) arr_2 [i_4])))));
                    }
                }
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) arr_36 [(unsigned char)12] [i_5] [i_5] [i_5] [i_7]))), ((signed char)-120)))) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (!(((/* implicit */_Bool) 526467874414618206ULL))))))))));
            }
            for (short i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 2])) * (((-980240166) / (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (3604879112U)))))))) : (((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (arr_3 [i_4 - 1]) : (arr_3 [i_4 - 1])))));
                /* LoopSeq 1 */
                for (int i_16 = 1; i_16 < 24; i_16 += 2) 
                {
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_42 [14ULL])))) : (arr_36 [12U] [i_4 + 2] [i_4] [i_4] [12U])))))));
                    var_47 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) arr_34 [(unsigned char)10] [(short)10] [i_4] [i_4 + 2] [i_4] [i_4] [(unsigned char)10]))), (arr_23 [i_16] [i_15] [i_5] [i_4])));
                }
                var_48 = var_6;
            }
            var_49 = ((/* implicit */signed char) max(((unsigned char)0), ((unsigned char)35)));
        }
        for (short i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            var_50 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) -980240182)) ? ((+(arr_36 [i_4] [i_17] [i_17] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_4] [i_17] [i_17] [i_17] [i_17])))))));
            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 750608650208870360ULL))) && (((/* implicit */_Bool) ((short) ((unsigned long long int) arr_13 [i_4]))))));
            var_52 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_4] [i_17] [i_4] [i_4])) * (((/* implicit */int) arr_21 [i_17] [i_4] [(short)13]))))) ? (((unsigned long long int) -999737097)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_4])))))) ? (((9642096107499029885ULL) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (8804647966210521749ULL)));
            var_53 = ((/* implicit */unsigned long long int) var_0);
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            var_54 = ((/* implicit */short) arr_9 [i_4]);
            var_55 = ((int) arr_33 [i_4] [i_4 + 1] [i_4 - 1] [9ULL] [i_4 + 2]);
        }
    }
    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) var_1))));
    var_57 = max((var_6), (((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) var_6)))));
}
