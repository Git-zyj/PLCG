/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232949
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((_Bool) min((10667227641383621130ULL), (((/* implicit */unsigned long long int) ((5U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (+(min((4294967285U), (19U)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (18U))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 2] [(short)12] [i_1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1724684107)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned char)133)))))), ((-(((/* implicit */int) arr_12 [i_0] [i_2 + 2] [i_4 - 1] [i_3] [i_2 + 2] [i_0] [i_1]))))));
                                arr_15 [i_3] [i_2] [i_3] [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)19691)), (min((11878297349333238886ULL), (((/* implicit */unsigned long long int) (unsigned char)123)))))), (((/* implicit */unsigned long long int) arr_4 [i_4] [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_8)), (((var_1) ^ (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1), (1724684117)))) ? (min((((/* implicit */int) (signed char)19)), (var_8))) : ((~(-1724684107))))))));
    var_20 = ((/* implicit */short) var_9);
}
