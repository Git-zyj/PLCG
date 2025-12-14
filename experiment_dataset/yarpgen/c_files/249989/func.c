/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249989
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((short) var_10)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_3 + 2]);
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3 + 2] [i_3 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))))) ^ (((((4268511473U) << (((4268511453U) - (4268511450U))))) << (((/* implicit */int) ((_Bool) var_6))))))))));
                        var_14 ^= arr_5 [i_3 + 1] [i_2];
                    }
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_0);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) - (26455830U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(26455840U)))) ? (((/* implicit */int) (_Bool)1)) : (max((-982867325), (((/* implicit */int) var_1))))))))))));
                }
            } 
        } 
    } 
}
