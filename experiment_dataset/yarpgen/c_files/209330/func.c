/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209330
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(unsigned char)10] [i_2] [i_1] [i_0 - 1])))))));
                        var_14 |= ((/* implicit */unsigned long long int) ((8191) << (((3877081511861671420ULL) - (3877081511861671412ULL)))));
                    }
                } 
            } 
            var_15 &= ((/* implicit */unsigned long long int) (+(8192)));
        }
        var_16 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34363)))))))));
    }
    var_17 = ((/* implicit */long long int) (~(max((min((((/* implicit */unsigned long long int) var_2)), (var_7))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
    var_18 -= ((/* implicit */int) var_8);
}
