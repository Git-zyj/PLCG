/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195384
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [7LL] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_0 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2])))))) && (((/* implicit */_Bool) 7))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))), (arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 15139523417805033109ULL)) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (9617791955373116224ULL)))))) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (((((var_14) != (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((var_10) << (((var_18) - (3028098610189864720ULL))))) : (((/* implicit */unsigned int) ((int) var_8)))))));
    var_23 = (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_11)))))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_24 += ((((/* implicit */_Bool) ((signed char) arr_0 [i_3] [i_3 - 1]))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24723))) : (arr_8 [i_3] [(unsigned char)9]))), (((unsigned long long int) arr_11 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 2]))));
        arr_12 [i_3] = ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((var_5) < (var_5)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (arr_8 [i_3 - 1] [i_3]))))) < (arr_3 [i_3 + 3] [i_3])))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) arr_14 [i_4]);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7725)) >> (((max((((/* implicit */long long int) arr_16 [i_4 - 1] [(signed char)11])), (var_19))) - (5260583730100673946LL)))))) ? (((/* implicit */unsigned long long int) max(((~(4072586411U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) min((arr_15 [i_5] [i_5] [i_5]), (arr_13 [(_Bool)1] [i_5])))) ? (((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12432613495159694003ULL))) : (((/* implicit */unsigned long long int) (~(var_4))))))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_4] [i_5])), (var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) || (((((/* implicit */_Bool) (unsigned char)225)) || (((/* implicit */_Bool) arr_18 [i_4 - 1] [i_5]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) && ((!(((/* implicit */_Bool) var_4)))))))));
                var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -844590626)) ? (arr_19 [i_4 - 1] [i_5 + 2] [i_6]) : (arr_19 [i_4 - 1] [i_5 + 3] [i_5])))) ? (max((5297450666942383545ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_4])))));
            }
            for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((arr_27 [i_4] [i_5] [i_7] [i_8]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) arr_18 [i_4 - 1] [i_5])))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_29 [i_4] [i_4] [13ULL] [i_4] [i_4] [4LL] [(short)17]);
                        arr_31 [i_4] [i_5] [i_5] [i_8] [i_9] = max((((((/* implicit */_Bool) arr_23 [i_5 + 3] [i_7 - 1])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_5])) : (((/* implicit */int) arr_16 [i_4 - 1] [i_9])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [i_4 - 1] [i_4 - 1])), (arr_29 [i_4] [i_4 - 1] [i_4 - 1] [(_Bool)1] [i_4 - 1] [i_4] [i_4])))));
                        var_30 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_29 [i_9] [i_9] [i_7] [i_8] [i_7] [i_4] [i_4]), (arr_15 [i_5] [i_5] [i_5])))) ? (max((var_4), (((/* implicit */int) arr_20 [i_9])))) : (((/* implicit */int) ((-1475650702252193211LL) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                        var_31 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)13288)), (var_13)))) ? (max((var_1), (((/* implicit */unsigned int) arr_13 [i_4] [i_5 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_5 - 1] [i_7 - 1] [i_5 - 1] [i_9] [i_5] [i_5 + 2]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_5] [i_5 + 2] [i_5])))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (unsigned short)32844))));
                            var_33 = ((/* implicit */unsigned long long int) var_14);
                            var_34 = ((/* implicit */_Bool) (+(arr_19 [i_4 - 1] [i_4 - 1] [i_4])));
                            var_35 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_33 [i_5 + 2] [i_11 - 2] [i_11 + 1] [i_11])))) << (max((var_4), (((/* implicit */int) (unsigned short)0))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)29993)) == (((((/* implicit */int) arr_23 [i_7 - 1] [i_4])) >> (((((/* implicit */int) (signed char)106)) - (88)))))))) + (((((/* implicit */int) ((_Bool) (unsigned char)108))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4]))) > (arr_30 [i_4] [i_4] [i_4] [i_5] [i_7] [i_7]))))))));
            }
            arr_37 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (arr_23 [i_5] [i_4 - 1])))) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((5297450666942383555ULL) - (5297450666942383555ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) max((var_5), (((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) (unsigned char)225)))))))))));
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) max((max((max((arr_19 [(unsigned short)15] [i_5] [i_5]), (4211229678185178951ULL))), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) && (((/* implicit */_Bool) arr_29 [i_4] [i_5 + 2] [(unsigned short)21] [i_4 - 1] [i_12] [i_5] [i_4]))))) : (((/* implicit */int) arr_16 [i_4] [i_4])))))));
                arr_40 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_5] [i_4] [i_4 - 1] [(unsigned char)13] [i_12]))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_14)))), (arr_42 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_40 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (8828952118336435391ULL)));
                        var_41 = ((/* implicit */unsigned short) arr_17 [i_4]);
                    }
                    for (unsigned long long int i_15 = 4; i_15 < 22; i_15 += 3) 
                    {
                        arr_50 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_13] [i_4] [i_4] |= min((max((((((/* implicit */_Bool) (signed char)0)) ? (5297450666942383540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)30))))))), (((/* implicit */unsigned long long int) var_4)));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) * (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29383))) : (16383LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5297450666942383553ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_41 [i_4] [i_5] [i_4] [i_13] [i_15])))) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (504403158265495552ULL)))))))));
                    }
                    arr_51 [i_5] [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_36 [i_4 - 1] [i_4] [i_5 - 1] [i_12] [i_12] [i_12] [i_13]))))) || (((/* implicit */_Bool) arr_42 [i_4] [i_4] [i_12] [i_13] [i_4]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    arr_55 [i_16] [i_16] [i_5] [i_5] [i_4 - 1] [i_4 - 1] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) min((var_6), (var_15)))), (arr_42 [i_4] [i_5] [i_12] [(unsigned short)16] [i_5])))));
                    arr_56 [i_4] [i_5] [i_5] [i_16] [i_5 + 2] [i_12] = ((/* implicit */unsigned long long int) arr_53 [i_4] [i_4] [i_4] [i_4 - 1]);
                    arr_57 [i_4 - 1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_53 [i_16] [i_12] [i_5] [i_4 - 1])) ? (((((/* implicit */_Bool) arr_44 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_47 [i_4] [i_5] [i_12] [i_5] [i_4] [i_4] [i_5 - 1])) : (((/* implicit */int) arr_29 [i_4 - 1] [9LL] [i_5] [i_12] [i_12] [i_12] [i_16])))) : (((/* implicit */int) arr_39 [i_4 - 1] [i_5 - 1])))), (((/* implicit */int) ((((arr_45 [i_4] [i_5] [i_12] [i_16] [i_5]) >> (((((/* implicit */int) arr_18 [i_5] [i_5])) - (97))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_4] [i_5] [i_12] [i_12] [i_12] [i_16] [i_16])) & (((/* implicit */int) arr_47 [i_4] [i_5] [i_12] [i_16] [i_5 - 1] [i_16] [i_4 - 1]))))))))));
                }
            }
            for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */signed char) arr_22 [i_5 + 4] [i_17]);
                var_44 ^= var_0;
                var_45 -= ((/* implicit */long long int) arr_36 [i_17] [3ULL] [i_17] [i_5 - 1] [i_5] [i_4] [i_4]);
                var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_4] [i_4 - 1] [(unsigned short)22])) ? ((+(max((var_19), (((/* implicit */long long int) arr_43 [(signed char)22])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_4 - 1] [i_5 - 1])) == (((/* implicit */int) arr_18 [i_4] [18ULL]))))))));
                arr_61 [i_5] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((arr_60 [i_4] [i_5 + 2] [i_5] [i_17]), (((/* implicit */unsigned int) arr_18 [i_4] [i_5]))))) && (((/* implicit */_Bool) var_4)))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) /* same iter space */
            {
                arr_64 [i_5] [(unsigned char)0] |= ((/* implicit */unsigned short) ((unsigned int) (!((!(((/* implicit */_Bool) var_11)))))));
                var_47 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            }
        }
        var_48 -= ((/* implicit */short) (-(((/* implicit */int) (!(((1067032616U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))))))));
    }
}
