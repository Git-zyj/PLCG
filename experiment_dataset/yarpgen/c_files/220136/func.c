/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220136
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */int) (((~(9223372036854775807LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)255)) : (arr_6 [i_2]))))))) >> (((((int) var_7)) + (20))));
                                arr_11 [i_2] [i_3 + 2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_2 - 2] [i_3 - 1])) ? (var_16) : (arr_9 [17LL] [17] [i_0 - 3] [17] [i_0 - 2] [i_2 - 1] [i_3 - 1]))), (var_16)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_19 ^= 9223372036854775807LL;
                                arr_18 [i_1] [i_6] [i_2 - 2] [i_1] [i_6] [i_2 - 2] [i_6] = ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [15] [(signed char)10] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_23 [i_7] [i_1] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_15)))), ((+(((1241302547) | (((/* implicit */int) arr_22 [i_1]))))))));
                                arr_24 [15LL] [(signed char)17] [i_2] [i_7 - 1] [i_7] [i_8] [(signed char)17] = ((/* implicit */signed char) arr_17 [i_2 - 2] [i_1] [(signed char)17] [i_7 - 3] [i_8 - 1]);
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (((/* implicit */int) ((arr_5 [i_2 - 1] [i_2 - 2] [i_2]) > (arr_5 [i_2 + 1] [i_2 + 1] [i_2])))) : (2141693206)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_16);
}
