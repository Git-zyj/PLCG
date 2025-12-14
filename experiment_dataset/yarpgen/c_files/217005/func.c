/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217005
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) 9579680676937786019ULL)) ? (((((/* implicit */unsigned long long int) min((arr_1 [0]), (((/* implicit */long long int) var_8))))) * (min((8867063396771765596ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 + 4] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_11 = ((/* implicit */unsigned int) min((var_11), (arr_4 [i_0 + 3] [i_0 + 3] [i_2] [i_3])));
                                arr_13 [i_0] [i_1] [i_2] [i_1 + 1] [i_4] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (8867063396771765596ULL) : (var_3)))))) ? ((+(min((((/* implicit */unsigned long long int) arr_10 [1U] [i_3] [i_2] [i_1] [1U])), (17ULL))))) : (((/* implicit */unsigned long long int) ((long long int) -8326018644171800226LL)))));
                                var_12 ^= ((/* implicit */unsigned int) var_8);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3840160032U)) ? (12653724278173499855ULL) : (((/* implicit */unsigned long long int) -1573893384866342104LL))));
                                arr_17 [i_0] [i_1 + 3] [i_2] [i_3] [i_3] [i_5 + 1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [7U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551612ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (-8326018644171800226LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)13] [i_3] [i_5 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_0 + 2] [16LL] [16LL] [i_1 + 1]))));
                                arr_18 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_2] [i_5] [(short)15] [i_5] [i_3])) ? (((/* implicit */int) ((signed char) (short)28724))) : ((-(var_1)))));
                                arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0U)))) ? (-8326018644171800226LL) : (8326018644171800225LL)));
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                arr_22 [i_2] = ((/* implicit */signed char) 17ULL);
                                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1686359408)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (9579680676937786019ULL)))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                            {
                                arr_26 [i_1] [10U] [10U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 8867063396771765596ULL))));
                                arr_27 [0ULL] [i_1] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_20 [(signed char)14] [(unsigned short)16] [(signed char)14] [i_3] [i_7])))))) ? (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_0 + 1] [i_1] [i_2] [i_2] [i_7])), (var_2)))) ^ (min((13455709056469393024ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_0 - 3] [i_3] [i_1 + 3] [i_3] [i_0 - 3] [i_3] [i_7])), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_1]))) : (-8326018644171800226LL))))))));
                                var_16 += ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 8867063396771765597ULL)))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))) == (max((0LL), (((/* implicit */long long int) var_0))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_8 = 3; i_8 < 14; i_8 += 2) 
    {
        var_17 = arr_5 [1ULL] [i_8];
        var_18 = ((/* implicit */long long int) min((1686359408), (((((/* implicit */_Bool) arr_15 [i_8 - 1] [i_8 - 2] [i_8 - 3] [i_8 + 1] [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_15 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8] [(unsigned char)16] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_15 [i_8 + 1] [i_8 - 1] [i_8 - 3] [i_8 - 3] [i_8 - 1] [i_8] [i_8 - 3]))))));
        var_19 = ((/* implicit */unsigned int) max((min((arr_21 [i_8 - 3] [i_8 - 1]), (arr_21 [i_8 - 3] [i_8 - 1]))), (((/* implicit */unsigned short) (_Bool)1))));
    }
}
