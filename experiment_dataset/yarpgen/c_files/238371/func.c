/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238371
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_10 &= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_0)) - (11256)))));
        arr_2 [i_0] = ((/* implicit */long long int) ((5525703286146415145ULL) / (var_4)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (1759635644U)));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (-1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65517)))))));
            }
            var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (5525703286146415141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (11302162278467171609ULL) : (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))))));
        }
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_2))));
    }
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((long long int) var_2)))) * (((unsigned long long int) ((((/* implicit */int) (short)6350)) | (((/* implicit */int) (short)-4223)))))));
}
