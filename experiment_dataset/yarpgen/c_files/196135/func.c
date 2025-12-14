/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196135
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) (unsigned short)35225);
                        arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_2] [i_2]);
                        var_15 ^= ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_3 + 1]);
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((((/* implicit */int) var_5)) / (arr_0 [i_0])))))) ? (min((var_12), ((+(((/* implicit */int) arr_8 [i_0] [i_0])))))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 6; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) (~(min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35225)) / (arr_10 [i_0] [i_4])))), (min((((/* implicit */long long int) var_13)), (4134728284120127636LL)))))));
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [i_4] [i_4] [i_0])))), (((/* implicit */int) max((arr_5 [i_0] [i_4] [i_0]), (arr_8 [i_5 + 3] [i_6]))))))) ? (min((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_9)))) : (arr_19 [2LL] [i_6] [i_6] [7] [2LL] [i_0] [i_0])));
                                var_19 ^= ((((/* implicit */_Bool) (unsigned short)28838)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_0])) || (((/* implicit */_Bool) (unsigned short)40253))))) : (((/* implicit */int) min((arr_5 [i_7] [i_5] [i_7]), (arr_12 [i_5 - 1])))));
                                var_20 ^= arr_2 [(unsigned short)0] [(unsigned short)0];
                                var_21 = ((/* implicit */int) arr_5 [i_0] [i_4] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_22 ^= ((((/* implicit */_Bool) arr_22 [i_4])) ? (((long long int) arr_19 [i_5 + 4] [9LL] [2LL] [i_5] [4LL] [i_5] [i_5])) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_4]))))), (((arr_13 [i_0] [i_0] [i_9]) | (((/* implicit */int) arr_6 [8] [i_4] [i_8] [8] [i_8]))))))));
                                arr_28 [3] [i_4] [i_5] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_3 [i_0] [i_4]), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1069240038)) : (arr_16 [i_0] [i_4] [i_5] [i_4] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_9] [i_8] [i_9])) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_12 [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 ^= var_3;
}
