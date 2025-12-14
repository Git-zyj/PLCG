/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25668
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) (signed char)56);
        arr_2 [i_0] [i_0 - 2] |= ((/* implicit */short) (~(1881276419100067357LL)));
    }
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-52)) < (((/* implicit */int) (unsigned char)238))))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_8))));
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                arr_8 [i_2] = ((var_8) ? ((-(((var_1) + (((/* implicit */int) (unsigned char)31)))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (signed char)56))))));
            }
        } 
    } 
}
