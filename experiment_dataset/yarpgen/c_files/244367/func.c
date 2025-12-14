/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244367
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
    var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_10)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */long long int) ((short) arr_0 [i_0] [(unsigned short)13]));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0])))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (unsigned short)27933))))))) : (var_6))))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_2])) * (((/* implicit */int) arr_0 [i_0] [i_2]))))), ((+((-9223372036854775807LL - 1LL))))));
            var_20 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (arr_5 [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_2)))))) : ((+(var_8)))));
                    arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_3]);
                    arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (506940327317322318ULL)))) ? (((((/* implicit */_Bool) -174997363)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)44)))) : (((((/* implicit */int) arr_10 [i_0])) + (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((unsigned char) (signed char)-101)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_5)), ((-(((((/* implicit */_Bool) 71776119061217280ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_3] [(signed char)13] [i_6]))) : (arr_8 [i_2] [i_3] [i_6])))))));
                            arr_23 [i_0] [i_0] = ((/* implicit */int) arr_5 [i_2] [i_5]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_3]))));
                var_24 = ((/* implicit */unsigned int) arr_21 [i_3] [3U] [i_3] [i_2] [i_0]);
            }
            for (signed char i_7 = 2; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_5), (arr_2 [i_0])));
                            arr_32 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_3 [(unsigned short)3]);
                            var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) 184799961)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [12] [i_9 + 4] [i_9] [i_9 + 1] [12])) ? (((/* implicit */int) (short)-32228)) : (((/* implicit */int) (unsigned short)16384))))) : ((+(arr_27 [2U] [i_9] [i_8] [(short)4] [2U])))));
                            arr_33 [i_2] [i_2] [i_0] [i_2] [i_9 - 1] [i_2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((arr_29 [i_9 + 4] [i_0] [i_9] [i_0] [i_9 + 3]), (((/* implicit */unsigned short) (signed char)-8)))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_2 [i_0]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((/* implicit */long long int) arr_4 [i_7 + 1] [i_7 - 2] [0ULL])) >= (var_2)));
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-109))))))));
                var_30 *= ((/* implicit */_Bool) 1060909282);
            }
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                var_31 = ((/* implicit */_Bool) (signed char)-112);
                var_32 = ((/* implicit */unsigned long long int) (-(-1771823448)));
                var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_34 -= ((/* implicit */short) arr_2 [i_11]);
                var_35 = (signed char)-51;
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) 9223372036854775807LL))));
            }
            var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)32228)), (8191U)));
            var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_0]))))), (arr_19 [i_2] [13ULL] [i_2] [i_2] [i_2])));
        }
        for (int i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            arr_41 [i_0] = max((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_4))))))), (arr_3 [i_0]));
            var_39 = ((int) (+(max((arr_31 [i_0] [i_12] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)60))))));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_40 = ((long long int) (+(((/* implicit */int) ((signed char) arr_34 [i_0] [i_13] [i_15])))));
                            arr_52 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_16] [i_13] [i_0] [i_15])) : (((/* implicit */int) arr_12 [i_0] [i_13] [i_14] [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */_Bool) var_2)) ? (arr_31 [i_0] [i_15] [i_15] [i_0] [i_15] [i_15] [i_15]) : (arr_31 [i_0] [i_0] [i_13] [(unsigned short)9] [i_0] [i_16] [(unsigned short)12])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) ((signed char) var_13))), (6467011127379025907LL)))))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(1732409738U))), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_13] [i_0] [(short)10]))))) || (((/* implicit */_Bool) ((short) arr_26 [i_0])))));
                var_43 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                var_44 = ((/* implicit */unsigned int) arr_4 [i_0] [i_13] [i_13]);
            }
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_45 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) -2038067049)) && (((/* implicit */_Bool) (unsigned short)15221)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)1505)))));
                var_46 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_27 [i_0] [i_0] [i_0] [i_13] [i_13]), (((/* implicit */long long int) arr_18 [i_0]))))))))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_47 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_0])) ? (((/* implicit */unsigned long long int) 1073741823LL)) : (arr_42 [i_19]))) > (max((((/* implicit */unsigned long long int) arr_46 [i_0] [i_0] [i_0])), (arr_50 [i_0] [i_0] [i_0] [i_13] [i_19])))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 3; i_20 < 13; i_20 += 3) 
                {
                    for (long long int i_21 = 2; i_21 < 14; i_21 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_62 [i_0] [i_0] [i_19] [i_0] [i_21])), (2614911962531635735ULL)))) ? (((/* implicit */int) arr_64 [i_20 - 2] [i_20 - 2] [i_19] [i_21 + 1] [i_19])) : (((int) var_15))))) ? (((((/* implicit */_Bool) arr_9 [i_21] [i_0] [i_0] [i_20 + 2])) ? (((/* implicit */int) arr_9 [i_21] [i_0] [i_0] [i_20 - 1])) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (short)-6301))))) ? (((/* implicit */int) ((_Bool) 8128))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_4))))))));
                            arr_65 [i_0] [i_0] [i_0] [i_19] [i_20] = (!(((/* implicit */_Bool) (short)-8192)));
                            var_49 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) ((short) (signed char)39))), ((-(1073741823LL))))));
                        }
                    } 
                } 
            }
        }
    }
    for (signed char i_22 = 0; i_22 < 21; i_22 += 4) 
    {
        arr_70 [i_22] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((unsigned int) var_8)), (min((((/* implicit */unsigned int) arr_68 [i_22])), (arr_69 [i_22]))))))));
        var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_68 [i_22])) > (((/* implicit */int) arr_68 [i_22])))))));
    }
}
