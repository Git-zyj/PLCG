/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224617
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
    var_14 = ((/* implicit */long long int) 15084728206247942241ULL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_15 += ((/* implicit */_Bool) ((arr_0 [i_0 + 1]) | ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_16 *= ((/* implicit */unsigned char) 7299496711270822621LL);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2]) - (arr_0 [i_0 + 1])))) * (((arr_3 [i_0 - 2] [i_0 - 2]) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) arr_2 [i_3 - 2]);
                        var_19 = ((/* implicit */_Bool) arr_2 [i_0 - 1]);
                    }
                } 
            } 
        }
        var_20 -= ((/* implicit */short) 193663526405705741LL);
    }
    var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) ((signed char) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
}
