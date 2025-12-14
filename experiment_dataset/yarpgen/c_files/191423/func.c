/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191423
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)57290))))))) > ((+(15869143495293291356ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) 1075541020004449994ULL);
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_0 [i_0]))))))));
                var_17 |= 17189073299289163015ULL;
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 7397912278645534148LL))));
                var_19 ^= ((/* implicit */unsigned short) 3750331079051857972LL);
            }
        } 
    } 
    var_20 |= ((/* implicit */int) 1257670774420388600ULL);
}
