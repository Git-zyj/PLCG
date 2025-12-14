/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226283
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
    var_10 |= ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [17LL] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_5 [10ULL] [10ULL]);
                                arr_14 [(signed char)5] [i_0] [13ULL] = ((/* implicit */short) arr_7 [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_0] [i_2 + 1] = ((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0]) != (arr_1 [i_2] [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [0] [i_5] [i_0] [i_2]);
                        var_11 = ((((/* implicit */int) arr_5 [i_1] [(signed char)13])) - (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 1] [i_5] [i_5] [i_5] [15])));
                        var_12 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0])) * (((((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_0])) * (((/* implicit */int) arr_10 [i_1] [i_2] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_5);
}
