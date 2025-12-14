/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240152
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-29502);
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4083334445U)) || (((/* implicit */_Bool) arr_0 [i_2])))) ? (1795245560) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_4), (var_4)))) : (((/* implicit */int) var_6))))) : (var_2)));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_5))))));
                    var_15 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned char) -1))) * (-1))) * ((~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (-837342699)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [(unsigned short)0] = ((/* implicit */short) 0);
                                arr_15 [(signed char)7] [i_1] [23U] [i_2] [i_3] [i_4] = ((/* implicit */long long int) -837342699);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    var_16 ^= ((signed char) ((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2]) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_5] [i_5] [21ULL])) : (((/* implicit */int) var_13))));
                    arr_19 [i_0] [i_1] [i_0] |= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5] [i_5]))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5] [24])) <= (((/* implicit */int) var_4)))))));
                }
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */long long int) -647792440);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7 + 2] [i_7 + 2] [i_7 - 1]))) - (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 837342698)))))) : (((((/* implicit */long long int) ((((/* implicit */int) (short)-22564)) & (((/* implicit */int) (_Bool)1))))) ^ (0LL))))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 647792439)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)11580)) : (((/* implicit */int) arr_0 [i_0]))))) : (((-5668250260925476709LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44176)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    arr_29 [i_0] [0] [0] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14366574090680245392ULL)) ? (((/* implicit */int) var_11)) : (-647792440)))));
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */int) var_10);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_13))));
                }
            }
        } 
    } 
    var_21 -= ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (short i_9 = 2; i_9 < 17; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
            {
                {
                    var_22 &= ((/* implicit */short) var_12);
                    arr_38 [(short)16] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) min((((unsigned short) var_8)), (((/* implicit */unsigned short) var_10))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_10))));
                    var_24 ^= ((/* implicit */signed char) var_9);
                    arr_39 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(-444023367))) < (((((/* implicit */_Bool) (signed char)-25)) ? (2147483647) : (-837342699))))))) >= (var_2)));
}
