/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235788
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)0))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) 1273506621U)), (var_19)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60058)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
                    arr_10 [i_2] [(unsigned short)16] [i_2 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), ((short)-32758)))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3520321004U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) || (((/* implicit */_Bool) (short)-32758))));
                }
                var_21 = ((/* implicit */unsigned char) (_Bool)1);
                arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (max((max((((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_1 + 1])), (15246075894984043611ULL))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_1 + 1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_1])))))));
                var_22 = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) (short)13599)), (3200668178725508005ULL))), (((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27863)))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) ^ (((/* implicit */int) var_4))))) ? (max((var_17), (((/* implicit */unsigned long long int) 3021460674U)))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) / ((~(((/* implicit */int) var_8))))))) <= (min((max((((/* implicit */unsigned int) (_Bool)1)), (3455341614U))), (min((var_9), (335395612U)))))))));
    var_24 = ((/* implicit */int) (-(813582235394899895ULL)));
}
