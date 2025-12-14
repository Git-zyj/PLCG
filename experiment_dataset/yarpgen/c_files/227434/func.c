/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227434
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) 1152851135862669312LL))), ((+(((/* implicit */int) (unsigned short)65524))))));
    var_20 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) var_15)), ((unsigned short)65532))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 |= ((/* implicit */unsigned short) arr_2 [i_0] [11]);
        var_22 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (15838402991824237134ULL))));
        var_23 ^= min((((/* implicit */int) ((arr_1 [i_0]) >= (3212063416227936407ULL)))), ((((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_16))) : (((int) 516966101)))));
        var_24 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                var_25 &= ((/* implicit */signed char) ((unsigned short) -516966105));
                var_26 -= (!(((/* implicit */_Bool) -516966102)));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_5);
}
