/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38652
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
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))) * (0U));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = arr_1 [i_0];
        arr_2 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) 14376803539097589128ULL);
                                arr_14 [i_0] [i_1] [9U] [i_3] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 4])))))));
                                arr_15 [i_0] [i_1 - 4] [i_2] [i_3] [3ULL] [i_3] = ((unsigned int) max((3U), (((((/* implicit */_Bool) -813279013035029198LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_1] [i_3] [i_2] [i_4] [i_3]))) : (3U)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [8LL] = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
        arr_17 [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) var_5);
    }
}
