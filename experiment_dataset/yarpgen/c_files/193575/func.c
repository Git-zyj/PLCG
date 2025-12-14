/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193575
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_0 - 1]) || (arr_0 [i_0])))) / (arr_1 [i_0])))) * (((long long int) ((_Bool) var_16)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((406449484U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [5U] [i_2 - 1] [i_1])))))) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_13))))))) : (arr_3 [i_0])));
                                var_19 = ((/* implicit */_Bool) arr_6 [i_0] [(signed char)14] [i_0] [i_2]);
                                arr_15 [11ULL] [i_2] [i_2] [11ULL] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_15)) % ((~(((/* implicit */int) arr_0 [i_0 - 1]))))))));
                    var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1 + 3] [i_2] [i_2]))))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */_Bool) ((arr_11 [(signed char)6] [i_0] [i_0]) | (arr_10 [i_0] [i_1] [(signed char)14] [i_1 + 3] [3] [i_2 + 1])))) ? (((((/* implicit */int) arr_8 [i_2] [i_1] [i_2])) / (arr_1 [i_0]))) : (((/* implicit */int) arr_7 [9] [i_0 - 1] [i_1 + 2] [i_1 - 1]))))));
                }
            } 
        } 
        arr_16 [5U] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(arr_14 [i_0 + 2] [(unsigned char)0] [i_0 + 2] [i_0 + 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) && ((!(var_15)))));
    }
    var_22 = ((/* implicit */signed char) (~(var_5)));
    var_23 = ((/* implicit */int) var_11);
}
