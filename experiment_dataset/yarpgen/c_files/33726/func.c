/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33726
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
    var_19 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) < (arr_0 [i_0 - 3])))), (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27260)))))));
                    var_21 = ((/* implicit */short) var_7);
                    var_22 ^= ((/* implicit */long long int) arr_6 [i_0] [i_0 + 2] [i_0]);
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_2]), (arr_6 [i_0] [i_2] [i_0])))) ? (arr_0 [i_0 - 3]) : (((/* implicit */int) ((arr_0 [i_0 - 4]) < (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
}
