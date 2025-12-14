/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51440
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1124707509U)) || (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) var_0);
            var_18 -= (!(((/* implicit */_Bool) var_5)));
            arr_4 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) -892825917)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (var_3)))))));
        }
        var_19 = ((/* implicit */unsigned short) var_7);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) 892825927);
        arr_8 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1807061919) : (((/* implicit */int) arr_0 [i_2]))))) ? (785045797) : ((-2147483647 - 1))))) ? (max((((((/* implicit */_Bool) 2778253202U)) ? (((/* implicit */int) var_1)) : (724946328))), (2147483642))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-6473)))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 6; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_3 + 4] [i_3 + 2]))) : (((((/* implicit */_Bool) var_13)) ? (arr_10 [i_3 - 2] [i_3 - 1]) : (arr_10 [i_3 + 3] [i_3 - 2])))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((long long int) 892825917)), (((/* implicit */long long int) ((unsigned char) var_4))))))));
        }
        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_22 += ((/* implicit */unsigned long long int) 892825917);
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((-2147483616) + (var_10)))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) -892825899)) ? (1064137977) : (((((/* implicit */_Bool) arr_10 [i_2] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_5])))))));
                arr_15 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)16651))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))), (min((var_3), (((/* implicit */unsigned int) (unsigned char)194))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_12))));
                            var_25 = ((/* implicit */int) var_15);
                            arr_21 [i_2] [i_2] [i_2] [i_2] [2LL] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) (((_Bool)0) ? (((/* implicit */int) arr_14 [i_4] [i_2] [i_4 + 1])) : (((/* implicit */int) var_9)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_26 ^= ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
            var_27 &= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2778253202U)), (arr_17 [i_2] [i_2] [5LL] [i_8] [i_2] [i_8]))) ^ (((/* implicit */unsigned long long int) min((18LL), (-2553238290538951737LL))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                arr_28 [i_2] [i_8] [i_8] = ((/* implicit */unsigned char) var_0);
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max(((short)-6360), ((short)6041)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15937049428792611974ULL)))))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 &= ((((/* implicit */_Bool) ((1152780767118491648LL) % (((/* implicit */long long int) -128145730))))) ? (((/* implicit */int) (short)-16652)) : (((/* implicit */int) var_2)));
                        arr_34 [i_2] [i_2] [i_11] [i_2] [i_11] = ((/* implicit */unsigned long long int) var_8);
                        arr_35 [i_2] [i_2] [i_9] [i_10] [i_2] [i_10] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                        arr_36 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_2] [i_11])))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (1690970079)))));
                    }
                    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        arr_39 [i_2] [3] [i_2] [i_10] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (-892825915)))) ? (((((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_14 [i_2] [i_2] [i_10])))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)1)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) 862095825)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : ((-2147483647 - 1)))))))) ? (2977640158U) : (((/* implicit */unsigned int) (~((+(-632500520)))))))))));
                        arr_40 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_9] [i_10])) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_3)) ? (arr_26 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) / (-1632181926192139828LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (7344193190630777334LL)))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_5))));
                    }
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2707361697U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0))) : (((/* implicit */long long int) var_10))))) ? (min((((/* implicit */long long int) var_2)), (5097770763957809061LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16448)))));
                    arr_41 [i_2] [i_2] [i_8] [i_2] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) var_7)))) % (((/* implicit */int) ((unsigned char) arr_12 [i_8])))));
                    arr_42 [i_2] = 151980006;
                }
                arr_43 [i_8] [i_8] [i_2] [i_8] = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_29 [i_2] [0] [i_9] [i_9]))))), (arr_18 [i_2]))));
                /* LoopSeq 3 */
                for (short i_13 = 1; i_13 < 6; i_13 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (short)6361))));
                    arr_47 [(unsigned char)4] [i_8] [i_9] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                    arr_48 [i_2] = ((/* implicit */unsigned char) var_10);
                }
                for (short i_14 = 1; i_14 < 6; i_14 += 3) /* same iter space */
                {
                    var_34 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -1690970081)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((((/* implicit */_Bool) var_6)) ? (9738107482578030896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                    arr_52 [i_2] [i_8] [(_Bool)1] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (1587605596U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_2] [i_8] [i_9] [i_8] [i_2] [i_8] [i_9]))))) : ((-(var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8719412052775818063LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5409439171499871860ULL)))))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    arr_56 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
                    var_35 ^= ((/* implicit */unsigned char) arr_0 [i_2]);
                    arr_57 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) var_8)) + (2147483642))));
                }
            }
        }
        arr_58 [i_2] = ((/* implicit */_Bool) ((8719412052775818062LL) ^ (((arr_26 [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
}
