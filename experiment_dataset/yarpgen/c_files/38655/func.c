/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38655
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
    var_10 += (+(((/* implicit */int) var_8)));
    var_11 = ((/* implicit */_Bool) ((int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) (+(var_0)));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2066862703U))) ? (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (4207786862514522876ULL))) : (((14238957211195028723ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) -508246761)) : (((((/* implicit */_Bool) 8393675907193606906ULL)) ? (14238957211195028744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16320)))))));
            var_14 = ((/* implicit */int) max((var_14), (arr_1 [i_0] [i_0])));
        }
        var_15 |= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)12608)), (arr_0 [i_0])))) || (((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1))))))));
        var_16 -= ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-1) : (((/* implicit */int) (unsigned short)50817))))), (max((var_0), (((/* implicit */unsigned long long int) 4492595645283477052LL)))))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((unsigned char) -4492595645283477063LL))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(2147483647))))))));
}
