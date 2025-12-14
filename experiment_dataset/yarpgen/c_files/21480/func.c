/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21480
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) 4503599627370492LL))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4503599627370462LL)) * (18446744073709551595ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_4 [i_0 - 3]))))));
                    arr_6 [i_0] [7ULL] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(arr_0 [i_0] [i_0]))), (arr_0 [i_0 + 1] [i_1])))) ? (min((0), (arr_2 [i_0 - 4] [i_0 + 3] [i_0 - 2]))) : ((~(((/* implicit */int) arr_4 [i_0 - 3]))))));
                    arr_7 [i_2] = ((/* implicit */unsigned short) (((~(arr_0 [i_0 - 2] [i_0 - 2]))) | (max((arr_0 [i_0 + 3] [i_0 - 1]), (arr_0 [i_0 - 3] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */long long int) var_13);
}
