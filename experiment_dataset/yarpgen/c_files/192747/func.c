/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192747
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
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [5LL] [10LL] [0] [i_3]))))))));
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1]))));
                    }
                } 
            } 
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */long long int) var_0)) ^ (-7853922659895461591LL))))))));
        }
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
        arr_10 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 3] [i_0])))))) != (((((/* implicit */_Bool) var_3)) ? (3628087220595323664LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
    }
    var_22 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))))))));
    var_23 = ((/* implicit */unsigned char) ((var_6) & (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) == (12313840087002178921ULL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
}
