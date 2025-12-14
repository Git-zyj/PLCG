/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43652
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
        var_13 = (!(((/* implicit */_Bool) ((long long int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
        arr_4 [i_0] |= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_7))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_15 += ((/* implicit */signed char) max(((+(((/* implicit */int) arr_1 [i_1] [i_1])))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */_Bool) arr_2 [i_1]);
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65534)));
        var_17 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)33830)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_1] [i_1])))))) - ((+(((/* implicit */int) ((unsigned short) (unsigned short)65535)))))));
    }
    var_18 = ((/* implicit */unsigned int) var_2);
}
