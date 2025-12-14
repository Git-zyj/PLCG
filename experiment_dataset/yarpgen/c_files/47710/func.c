/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47710
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_3 - 2] [i_3] = ((/* implicit */short) var_8);
                            var_13 = ((/* implicit */unsigned long long int) (unsigned char)18);
                            var_14 ^= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_2] [(_Bool)1] [(_Bool)1])) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)17)) ^ (((/* implicit */int) arr_1 [i_2] [i_0]))))))), ((~(arr_7 [i_2] [i_3 - 1] [i_2] [i_3 + 1] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((int) var_5));
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_2)) > (min((var_3), (((/* implicit */int) (unsigned char)238))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_22 [11ULL] [i_5 + 1] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_19 [i_7 - 3] [i_5 + 1] [i_5] [i_5])), (((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1] [i_4])) ? (arr_14 [i_5 + 2] [i_4] [i_4]) : (var_7)))));
                            arr_23 [i_4] [7ULL] [i_5 + 2] [11LL] [7ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_18 [i_4] [i_5 + 2])))) ^ (((/* implicit */int) var_1))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_15 [i_7] [i_5 - 1] [i_4]) % (arr_15 [i_7] [1ULL] [1ULL])))) < (((((/* implicit */unsigned long long int) max((1809043047), (var_8)))) * (((unsigned long long int) (short)1202))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_7]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((arr_18 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_4] [i_5]))))) : ((~(12252344617675346845ULL)))));
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_32 [i_10] [i_9] [5LL] [i_5] [i_4] &= var_5;
                                arr_33 [18ULL] [i_9] [i_8] [i_5 + 1] [i_4] = ((/* implicit */short) arr_15 [i_4] [i_5 + 1] [i_5 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
