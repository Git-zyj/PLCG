/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5211
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) ? (1257866577U) : (1257866577U))))));
                    var_12 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [i_0]))) : (((arr_4 [i_1] [(unsigned char)4]) ^ (((/* implicit */long long int) (~(arr_6 [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                arr_15 [i_3] = ((/* implicit */int) 9000025256844388657LL);
                var_13 = (~(((int) 3037100718U)));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
}
