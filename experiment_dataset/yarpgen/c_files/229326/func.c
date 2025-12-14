/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229326
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [8] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16016))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(arr_1 [i_1])));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)160);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_1] [i_0])));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (5106155995366025209LL) : (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]))));
                    arr_15 [(short)17] [i_3] [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_2] [i_3])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
        {
            var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)215)) + (arr_5 [i_0])));
            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0] [i_4])) : (((/* implicit */int) arr_17 [i_0] [i_4]))));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_5] |= ((/* implicit */short) arr_17 [i_5] [i_0]);
            var_14 ^= (((~(((/* implicit */int) arr_9 [(signed char)9] [i_0])))) | (((/* implicit */int) arr_18 [i_0])));
        }
    }
    var_15 = ((/* implicit */long long int) var_3);
}
