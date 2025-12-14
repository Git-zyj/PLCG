/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222179
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_17 = (~(arr_1 [i_0 - 1]));
        var_18 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) << (((var_12) - (7654660834259544781LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_19 = ((var_13) >= (((max((((/* implicit */long long int) var_0)), (var_13))) & (((/* implicit */long long int) ((/* implicit */int) var_16))))));
    var_20 = ((/* implicit */signed char) (+(var_15)));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_21 |= ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_1]))))))));
                    var_22 = ((/* implicit */unsigned short) var_9);
                    var_23 |= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) var_12)), ((+(var_15)))))));
                }
            } 
        } 
    } 
}
