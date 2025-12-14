/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52893
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1])) ^ (arr_3 [i_1] [i_0]))))));
                var_21 = ((/* implicit */int) min((var_21), (arr_3 [i_0] [i_0])));
                var_22 = var_15;
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 23; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(arr_10 [i_2]))) | (arr_7 [i_2] [i_2]))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [22]) % (arr_7 [i_2] [(unsigned short)2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))) : ((~(((/* implicit */int) arr_8 [i_2]))))))))))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_10 [i_2]) ^ (arr_7 [i_2 + 1] [i_2])))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [i_2]) : (arr_10 [i_2]))) : ((+(var_17))))) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) >> (((var_16) - (376445209)))))) ? (arr_7 [i_2] [i_2]) : ((~(arr_11 [i_2 + 1])))))));
                arr_13 [i_2] = ((/* implicit */unsigned short) (+((+(arr_7 [i_3 + 1] [i_2])))));
                var_25 = ((/* implicit */unsigned short) arr_11 [i_2 + 1]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_19) >> (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_15)) - (7251))))))))));
}
