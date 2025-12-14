/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207308
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
    var_12 &= ((/* implicit */signed char) ((((/* implicit */int) min(((signed char)23), (min((var_0), ((signed char)32)))))) <= (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ^ (arr_2 [5] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9505311597158885039ULL))))) : (((/* implicit */int) (signed char)23))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_10 [i_3 - 2] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) - (arr_2 [i_0] [i_1])))));
                            arr_13 [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_0 [i_3 - 2]), (((/* implicit */int) arr_12 [i_0] [(signed char)4] [i_3 + 1] [8ULL] [6] [i_0])))));
                            var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (939524096U)));
                        }
                    } 
                } 
                arr_14 [i_0] [(signed char)4] = ((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_12 [i_0] [7LL] [i_1] [i_1] [i_1] [7LL])))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                var_16 ^= ((/* implicit */short) arr_11 [8ULL] [i_1] [i_1] [11ULL]);
            }
        } 
    } 
}
