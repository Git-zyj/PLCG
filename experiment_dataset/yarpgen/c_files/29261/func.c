/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29261
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) var_14)), (1530741453))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) -1880165817)), (arr_5 [i_1])))))) ? (((/* implicit */long long int) ((int) 1149450643411517935LL))) : (((((/* implicit */_Bool) var_8)) ? (((long long int) (signed char)-29)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2] [i_1] [(unsigned short)12]))));
                    var_22 ^= ((/* implicit */long long int) (signed char)-1);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (signed char)127)) ? (-1268037771) : (1530741453))) : (((/* implicit */int) var_14))));
                    arr_11 [i_2] |= ((/* implicit */signed char) max((-1149450643411517964LL), (((/* implicit */long long int) ((44392511) / (var_3))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        arr_17 [i_1] [3] [i_1] [i_3 + 1] [9] [i_4] = ((/* implicit */signed char) (unsigned char)37);
                        var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) (signed char)-2))))));
                        var_25 ^= ((/* implicit */int) var_12);
                        arr_18 [i_4] [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]);
                        var_26 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (var_9) : (((/* implicit */int) arr_12 [i_0] [i_1] [(short)12] [i_0]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_21 [i_3 + 1] [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_12);
                        arr_22 [i_0] [i_1] [14ULL] [9] [i_1] = ((/* implicit */_Bool) (short)-5232);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [(short)16] [i_1] [i_1] [0LL] [(short)4] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1150145684U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5226))) : (1134907106097364992ULL)));
                            arr_26 [i_1] [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)176);
                        }
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((((((((/* implicit */_Bool) arr_1 [2LL])) ? (-50383719) : (((/* implicit */int) arr_0 [i_3])))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-111)) ? (arr_24 [i_0] [i_1] [i_3 - 1]) : (var_10))) - (16014818922989577435ULL)))))));
                }
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    arr_30 [i_7] [i_1] [15] = ((-50383718) | (((/* implicit */int) arr_12 [(unsigned short)8] [i_1] [i_0] [(unsigned short)8])));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_36 [i_0] [4] [i_1] [i_7] [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_23 [2ULL] [i_1] [2ULL] [i_8]);
                                arr_37 [i_0] [i_8] [i_7] [i_8] [i_8] [i_7] &= ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (short)-28863))))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */short) (((!(((/* implicit */_Bool) 1149450643411517935LL)))) || (((/* implicit */_Bool) var_5))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)5231)) ? (((/* implicit */unsigned long long int) var_12)) : (var_15))))) : (var_2)));
}
