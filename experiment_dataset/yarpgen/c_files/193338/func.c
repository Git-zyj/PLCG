/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193338
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((signed char) var_12))))), (((/* implicit */int) ((((((/* implicit */_Bool) 656825556)) ? (((/* implicit */int) (short)-27688)) : (((/* implicit */int) (short)27674)))) < (((/* implicit */int) ((_Bool) (short)-27695)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27688))));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (short)27688))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */int) (signed char)-104);
        arr_6 [3] |= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)13)))))) : (((((/* implicit */_Bool) -7503176566179214614LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9586))) : (9223372036854775807LL)))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((signed char)93), ((signed char)-94)))), (min((((/* implicit */int) arr_3 [(signed char)11])), ((~(((/* implicit */int) var_2))))))));
    }
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) + (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (signed char)-102)) : (((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) var_10)))) : (var_14)))));
    var_21 = ((/* implicit */unsigned short) (signed char)80);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                var_22 = ((unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)64899)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_0)))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */_Bool) (short)25068);
                            var_24 ^= ((/* implicit */unsigned short) max((max(((~(((/* implicit */int) arr_3 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32761))))))), ((+((+(((/* implicit */int) arr_4 [i_5] [i_2]))))))));
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) var_3)) * (((((arr_13 [i_2] [i_4]) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_3] [i_4])) - (52187)))))));
                            arr_20 [i_5] = min((arr_13 [i_2] [i_3]), (((/* implicit */int) ((short) (signed char)4))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        arr_28 [i_7] [(short)5] [i_3] [i_3] [i_2] = ((/* implicit */short) var_10);
                        arr_29 [i_2] [i_3] [i_3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                        {
                            arr_35 [i_9] [i_8] [i_6] [i_3] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_8)) - (((/* implicit */int) (short)-1))))));
                            var_26 = ((/* implicit */long long int) ((short) var_7));
                            var_27 ^= ((/* implicit */signed char) (unsigned short)24382);
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-18506)))))));
                        }
                        arr_36 [i_6] = ((/* implicit */unsigned short) ((((int) arr_31 [i_2] [i_2] [(signed char)3] [i_6] [i_2] [i_8])) % (((/* implicit */int) ((short) (short)27672)))));
                        var_29 ^= ((/* implicit */short) (unsigned short)61268);
                        arr_37 [i_2] [i_3] [i_6] [i_8] = ((/* implicit */long long int) max((((/* implicit */int) ((short) (signed char)104))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)22114)) : (((/* implicit */int) (signed char)124)))) - (((/* implicit */int) arr_10 [i_2] [i_3]))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) (short)-16776)), (((((/* implicit */int) var_9)) % (((/* implicit */int) (short)17377))))))) - (((arr_17 [i_6] [i_10]) ? (((((/* implicit */_Bool) (unsigned short)39846)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-8536150693043885405LL))) : (((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24874))) : (-9223372036854775807LL)))))));
                        /* LoopSeq 4 */
                        for (short i_11 = 3; i_11 < 9; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_25 [i_3])), (min((((/* implicit */long long int) (short)-27677)), (arr_32 [(unsigned short)4] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 + 1])))));
                            arr_44 [i_2] [0] [i_2] [0] [i_10] = (unsigned short)31675;
                            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((-1LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-1475)) + (2147483647))) << (((((/* implicit */int) var_3)) - (73)))))))))));
                            arr_45 [i_10] [i_10] = ((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [i_11])) < (((/* implicit */int) (signed char)125)))))));
                            arr_46 [i_3] [i_3] [i_3] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))))) ? (((int) (-(((/* implicit */int) (unsigned short)4))))) : (((/* implicit */int) var_11))));
                        }
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-102)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_2])) << (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) - (23068)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)14383)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 319374906)) ? (-536453163) : (-3)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-36))))))))));
                            var_33 = ((/* implicit */short) -157068955330172520LL);
                            var_34 = min((var_0), ((signed char)8));
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_7))))))))));
                            arr_51 [i_2] [i_2] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_48 [i_12] [i_10] [i_10] [i_6] [i_2] [i_2])) / (((/* implicit */int) var_15)))), (((int) (unsigned short)11))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_55 [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-27692)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-9223372036854775797LL)))));
                            arr_56 [i_3] [i_10] = ((/* implicit */_Bool) ((unsigned short) var_12));
                        }
                        for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) max((min((((/* implicit */unsigned short) var_2)), ((unsigned short)38174))), (((/* implicit */unsigned short) var_5))))) - (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8836)) ? (1041558715) : (1386917946))) < (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (short)2549)))))))))))));
                            arr_59 [i_2] [i_10] [i_6] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_2] [i_14])) < (2147483647))) ? (max((((/* implicit */long long int) (signed char)-1)), (-1515369538536332566LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-51)) / (((/* implicit */int) arr_33 [i_3] [i_14] [i_10] [(unsigned short)6] [i_3] [i_2])))))));
                            arr_60 [i_2] [i_10] [i_2] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) (_Bool)1))))) < (((/* implicit */int) ((unsigned short) (signed char)-95)))));
                        }
                        var_37 = ((/* implicit */signed char) ((((int) arr_48 [i_3] [i_3] [i_3] [i_10] [i_2] [(signed char)4])) + (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) max((var_1), ((signed char)-70)))))))));
                        arr_61 [i_2] [i_10] [i_6] [i_10] = ((/* implicit */int) (+(((((/* implicit */_Bool) -9223372036854775807LL)) ? (max((6021552977284633239LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))))));
                    }
                    arr_62 [i_2] [i_2] [2] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((short) -9223372036854775794LL))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (signed char)84))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                }
            }
        } 
    } 
}
