/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50491
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (!(arr_6 [i_0])))) != (((((/* implicit */_Bool) 1272134710)) ? (((/* implicit */int) (_Bool)1)) : (1942030880))))))));
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) != (arr_4 [i_0 - 2])))), (((signed char) ((unsigned char) 9399491719804694891ULL))))))));
                }
            } 
        } 
    } 
    var_11 -= ((/* implicit */long long int) var_9);
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) ((_Bool) var_7))))) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_5)))))) : (((/* implicit */int) var_0))));
}
