/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19416
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_5))) || (((/* implicit */_Bool) (+(var_9))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [14LL]);
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) (~(var_6)));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_9))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((-(((/* implicit */int) (short)6529)))))) % (((/* implicit */int) var_4))));
            arr_10 [i_2 + 1] |= ((/* implicit */short) ((4294967295U) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [(_Bool)1])))))));
            var_16 = ((/* implicit */_Bool) max((3218774140425063065LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)19071))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (arr_7 [i_2])))))))));
        }
        arr_11 [i_0] = ((/* implicit */long long int) (unsigned char)236);
    }
    var_17 = var_1;
    var_18 = ((/* implicit */short) ((((((((/* implicit */int) var_2)) << (((/* implicit */int) var_12)))) << ((((-(((/* implicit */int) var_1)))) - (19))))) != ((~(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (short)19096))))))));
}
