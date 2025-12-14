/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234871
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [5ULL] [i_1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) << (((arr_1 [i_0]) - (7795748326159807260LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [(unsigned char)0])) : (((/* implicit */int) var_2))))) + (arr_2 [i_0] [i_1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_2 + 1] [15ULL] [i_4 - 1]))))) : ((-(arr_11 [i_2 + 1])))));
                    var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) ((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_3]))))))))));
                }
            } 
        } 
    } 
}
