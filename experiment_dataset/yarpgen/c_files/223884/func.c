/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223884
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(signed char)4] = ((/* implicit */short) (-((~(((/* implicit */int) arr_4 [(signed char)3] [i_2 - 2] [(signed char)8] [i_2]))))));
                    var_16 = ((/* implicit */unsigned char) arr_5 [(signed char)6]);
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned char) (((-((+(((/* implicit */int) (unsigned char)107)))))) <= (max((((/* implicit */int) ((unsigned char) arr_5 [i_0]))), ((-(((/* implicit */int) (unsigned char)96))))))));
    }
    var_18 = max((var_8), (((((/* implicit */_Bool) min((3814422408393200101ULL), (((/* implicit */unsigned long long int) (unsigned char)160))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
}
