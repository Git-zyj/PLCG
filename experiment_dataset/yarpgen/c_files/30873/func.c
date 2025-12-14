/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30873
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
    var_12 = (!(var_10));
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) 8388576)) : (arr_5 [i_0] [4U])));
            var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_14 [8] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_2);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            var_15 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                            arr_17 [i_0] [i_4] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((unsigned short) ((int) var_0)));
                            arr_18 [i_0] [i_4] [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_23 [0LL] [6U] [i_5] [6U] [6U] = ((/* implicit */int) (signed char)-102);
                            arr_24 [i_2] [i_1] [i_5] [i_3 - 2] [(short)9] [i_3] = ((/* implicit */_Bool) (~(var_4)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_27 [i_3] [i_1] [i_6] [i_3] [6ULL] = ((/* implicit */long long int) var_7);
                            var_16 = ((/* implicit */unsigned short) 33538048U);
                        }
                        for (int i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            arr_30 [i_7] [i_1] [i_1] [i_7] [3ULL] = ((/* implicit */int) var_8);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_11))));
                        }
                        arr_31 [i_0] [i_2] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((int) (-(var_0))));
                        var_19 = ((_Bool) (!((_Bool)0)));
                        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_29 [i_1] [(short)2] [10U] [6LL] [i_3 - 1] [i_0])) : (3249233263U)));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_8]))) : (((((/* implicit */_Bool) arr_20 [4] [4] [4] [i_8] [4])) ? (1935421977U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048)))))));
            arr_35 [(unsigned char)9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1045734033U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (arr_26 [i_0] [i_8] [i_0] [i_8] [i_8])));
            arr_36 [i_0] [i_0] [i_8] = ((/* implicit */int) ((unsigned long long int) 16777212U));
            arr_37 [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((1045734032U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? (((arr_26 [i_0] [i_0] [i_0] [10ULL] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) var_6))));
            arr_42 [i_0] [i_9] [i_9] = (~(((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1])));
        }
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            arr_46 [0] [5] [i_10] = ((/* implicit */_Bool) arr_12 [i_10] [i_0] [i_0] [3LL] [3LL]);
            var_23 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        }
        arr_47 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_6));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_51 [i_11] = var_2;
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6858)) / (((/* implicit */int) arr_22 [i_11] [i_11] [i_11] [i_11]))))) ? (((/* implicit */long long int) (~(arr_13 [i_11])))) : (6537065653620238512LL)));
        var_25 = ((/* implicit */int) arr_10 [3U] [i_11] [i_11]);
    }
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            {
                arr_56 [i_12] = ((signed char) var_3);
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) (((~(var_6))) % (((/* implicit */int) ((unsigned char) arr_60 [i_12] [i_12])))));
                    arr_61 [(unsigned char)6] [i_13] [(unsigned char)6] &= ((/* implicit */short) (~((~(max((787880284), (266338304)))))));
                }
            }
        } 
    } 
}
