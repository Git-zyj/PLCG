/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206186
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
    var_18 = ((/* implicit */_Bool) ((-8626177994471217748LL) | (((/* implicit */long long int) 469762048))));
    var_19 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_14))))) < (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned int) arr_0 [(unsigned short)10] [i_0]);
        var_21 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (signed char)-32))));
        var_24 = ((/* implicit */unsigned short) (_Bool)1);
        arr_4 [i_1] [i_1] = ((arr_3 [i_1 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)100)) & (((/* implicit */int) var_7))));
    var_26 ^= (unsigned short)39879;
}
