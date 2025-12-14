/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32112
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned char)0] [i_0])) && (((/* implicit */_Bool) 12617977830858453273ULL)))))) ^ (arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned char) (signed char)96);
        arr_2 [(unsigned char)2] |= ((/* implicit */short) arr_1 [i_0] [(signed char)11]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_3]);
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_0] = var_4;
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_3 - 1]))));
                        var_23 = ((/* implicit */unsigned char) arr_11 [i_0] [i_2]);
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 + 4] [i_3 + 4])) ? (((unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1 + 3])) : (var_9))))) * (12617977830858453266ULL)));
                    }
                } 
            } 
        } 
    }
    var_25 ^= ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) (unsigned char)187)) ? (12617977830858453257ULL) : (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((12617977830858453263ULL) - (12617977830858453233ULL)))))))));
}
