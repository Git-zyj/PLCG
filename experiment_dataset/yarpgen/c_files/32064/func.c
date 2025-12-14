/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32064
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
    var_15 &= (unsigned char)188;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31093)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4185)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_2] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)156)) == (((/* implicit */int) (unsigned char)136))));
                        arr_13 [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)45669))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31094))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (short)11728)))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5)))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)188)) >= (((/* implicit */int) (short)-7243)))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */long long int) (unsigned char)54);
                            var_19 += ((/* implicit */unsigned char) arr_6 [6ULL] [(short)2] [i_1]);
                            arr_19 [i_5] [i_1] [i_1] [i_0] |= ((/* implicit */short) (unsigned char)39);
                        }
                        for (short i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                            arr_22 [i_2] [i_1 + 2] [i_2] [i_4 + 1] [i_2] [i_1 - 2] = ((/* implicit */unsigned long long int) arr_0 [1LL] [1LL]);
                        }
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) ((short) var_0));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
                        {
                            var_21 ^= (short)9251;
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_8 + 1]))));
                            arr_29 [i_0] [i_0] [0LL] [i_7] [i_8] &= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_8])))), ((!(((/* implicit */_Bool) (unsigned char)81))))));
                        }
                        for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            var_23 *= ((/* implicit */short) min((max((((/* implicit */long long int) (unsigned char)174)), (arr_0 [i_9 + 1] [i_7]))), (((((/* implicit */_Bool) (short)31957)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1 - 1] [i_2])))));
                            arr_32 [i_2] = ((/* implicit */short) var_8);
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                            var_25 = ((/* implicit */_Bool) (unsigned char)54);
                        }
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_26 &= ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_10] [i_0]);
                            arr_35 [(short)0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)165))))) ? (((/* implicit */int) (unsigned char)201)) : (((((/* implicit */_Bool) 7262042125627089318ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_12)))))) <= (((/* implicit */int) min(((unsigned char)91), ((unsigned char)97))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 19; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) var_2);
                            arr_38 [i_0] [i_1] [i_2] [i_2] [i_11] = arr_28 [i_11 - 1] [i_0];
                            var_28 = ((/* implicit */short) (~(arr_26 [i_0] [i_1] [i_2] [i_7] [i_11 - 2] [i_0])));
                        }
                        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_2])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)32759))))) ? (max((((((/* implicit */_Bool) (short)9252)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_2] [i_0])))), (((/* implicit */int) arr_24 [i_1] [i_1] [i_1 - 1] [i_1] [i_1])))) : (((/* implicit */int) max((arr_34 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1] [i_1 - 1] [i_7]), (arr_34 [i_1 + 2] [12ULL] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [(short)13]))))));
                            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)241))));
                        }
                    }
                    var_31 = min((arr_10 [i_1] [i_1] [i_2] [i_1 + 2] [i_1 - 2]), (((/* implicit */short) arr_5 [i_0])));
                    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_1 - 2] [(unsigned char)13] [i_2] [i_1 - 1] [i_1 + 3]))));
                }
            } 
        } 
    } 
}
