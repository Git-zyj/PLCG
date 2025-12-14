/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30423
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) 2147475456);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) var_5);
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_7))))) > (arr_1 [i_2])));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_0)))))) >> (((max((((/* implicit */int) var_1)), (-21))) - (1186))))))));
                }
            } 
        } 
    }
    var_14 = (-(min((((/* implicit */unsigned int) var_2)), (var_6))));
    var_15 = ((/* implicit */int) var_4);
}
