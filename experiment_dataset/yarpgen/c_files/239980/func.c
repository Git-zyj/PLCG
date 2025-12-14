/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239980
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_10 *= ((/* implicit */unsigned short) (signed char)0);
            arr_7 [18LL] [i_1] = min((max((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(1264536868)))));
            arr_8 [(signed char)13] [i_1] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((arr_4 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((1264536873) > (((/* implicit */int) arr_0 [i_1])))))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_11 = ((/* implicit */int) ((8050546927422432907ULL) >> (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) arr_10 [i_4]))));
                    var_13 = ((/* implicit */short) (-(2147483647)));
                    arr_16 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_14 = ((/* implicit */unsigned char) ((unsigned int) var_3));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0] [i_3] [i_3]) : (((/* implicit */long long int) ((unsigned int) 9167705040035096316LL)))));
                }
                var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */unsigned int) ((-2147483647) & (((/* implicit */int) (short)18177))))) : (arr_4 [i_0] [i_2])));
            }
            for (short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
            {
                var_17 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_5]))));
                var_18 = ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [(short)1] [(short)7])));
            }
            for (short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2]))));
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2]))) * (((18446744073709551585ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14672)))))));
                    var_21 = (+(((/* implicit */int) (unsigned char)152)));
                    arr_25 [i_7] [i_2] [i_2] [i_0] = (~(((/* implicit */int) var_8)));
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1264536879)) ? (((/* implicit */unsigned long long int) 753679809)) : (4ULL)));
                    var_23 = ((/* implicit */unsigned short) ((short) ((signed char) (_Bool)0)));
                }
                for (short i_9 = 3; i_9 < 24; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((unsigned short) arr_26 [i_9 - 1] [i_10 + 2] [i_0] [i_0] [i_10 + 1]));
                        arr_34 [i_0] [(signed char)20] [i_6] [i_9 - 1] [i_9] = (~(((/* implicit */int) var_0)));
                        var_25 |= ((/* implicit */unsigned long long int) var_5);
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_9 - 3] [i_9 + 1])) ? (((/* implicit */long long int) var_3)) : ((+(arr_27 [i_0] [i_2] [(signed char)1] [i_2] [i_6] [i_9])))));
                }
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    var_27 = (~(((int) 11703640742769506953ULL)));
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_40 [i_0] [i_11] = ((/* implicit */_Bool) arr_29 [i_2] [i_6] [i_11] [i_12]);
                        var_28 = ((/* implicit */short) ((arr_9 [i_0] [i_11] [i_12]) ^ (((/* implicit */unsigned long long int) 117440512U))));
                        var_29 = ((/* implicit */long long int) var_8);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned int) 1264536855)) * (3819390086U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                    }
                    for (unsigned char i_13 = 4; i_13 < 24; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))));
                        arr_43 [i_0] [i_2] [i_6] [(signed char)19] [i_11] = ((((/* implicit */_Bool) arr_22 [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 - 1])) ? (arr_22 [i_13 - 3] [i_13] [i_13 - 2] [i_13]) : (arr_10 [i_13 - 2]));
                    }
                    for (short i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        arr_48 [i_11] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((((/* implicit */_Bool) arr_30 [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) var_1))))));
                        arr_49 [i_0] [i_2] [(signed char)12] [i_11] [i_11] = ((/* implicit */signed char) (-(arr_4 [i_14 - 1] [i_14 - 1])));
                    }
                    var_32 = ((/* implicit */unsigned short) ((int) (_Bool)0));
                    arr_50 [i_11] [i_0] [i_2] [24] [i_11] = ((/* implicit */short) arr_24 [(unsigned char)6] [i_2] [i_11] [3LL] [i_2] [i_11]);
                }
                /* LoopNest 2 */
                for (long long int i_15 = 1; i_15 < 23; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        {
                            var_33 = arr_41 [i_0] [i_0] [i_0] [i_0] [6];
                            var_34 = (-(var_2));
                            var_35 |= ((/* implicit */short) -7319145795323442753LL);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_17] [i_17] [i_17] [i_17] [i_17])) % (((/* implicit */int) arr_45 [i_17] [i_0] [i_0] [i_0] [14]))));
            arr_58 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 213524409787174640LL))));
            arr_59 [2ULL] = ((/* implicit */unsigned long long int) var_1);
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_17] [i_18]);
                var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_2)))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_0])) ? (((arr_60 [i_0] [i_18]) << (((arr_55 [i_18]) - (15727582098704961798ULL))))) : (((/* implicit */unsigned int) 2147483647))));
                arr_63 [i_0] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31850)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9374494135853046442ULL)));
            }
        }
        var_40 = min((((/* implicit */unsigned long long int) ((-1264536856) ^ (((/* implicit */int) (unsigned short)24311))))), (((((/* implicit */_Bool) -1264536871)) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1729382256910270464ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_28 [i_0] [(short)10] [(unsigned short)14] [i_0]))))))));
        arr_64 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((18446744073709551610ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) max((arr_44 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_24 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0]) : (min((18446744073709551608ULL), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [(signed char)6])) : (((/* implicit */int) arr_42 [i_0] [i_0] [(signed char)9] [i_0] [i_0]))))));
    }
    var_41 = ((/* implicit */_Bool) var_7);
}
