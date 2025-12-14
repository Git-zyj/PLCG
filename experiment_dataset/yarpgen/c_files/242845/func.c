/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242845
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
    var_12 = ((/* implicit */unsigned int) (!(var_11)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (+(1719083680U))))))))));
                var_14 = var_7;
                arr_7 [i_0] = (((_Bool)1) && (((/* implicit */_Bool) 9U)));
            }
        } 
    } 
    var_15 |= ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_12 [i_2] = arr_9 [i_2];
        var_16 = ((/* implicit */int) ((unsigned int) (((_Bool)0) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        arr_13 [i_2] = ((/* implicit */_Bool) max((((int) var_2)), ((-(((/* implicit */int) arr_11 [i_2] [i_2]))))));
        var_17 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)197)))), (((unsigned int) var_7))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((2315700126U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))))) & (var_8)));
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_3])) < (((/* implicit */int) (unsigned char)167))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_24 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5]))));
            var_18 = ((_Bool) var_1);
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
    }
}
