/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33896
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */short) max((((/* implicit */unsigned int) 296776616)), (1380829715U)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) ((((/* implicit */int) (signed char)26)) >= (((/* implicit */int) arr_0 [i_1 - 1])))))));
                        var_21 = ((/* implicit */_Bool) (unsigned char)2);
                        arr_12 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_0 + 1]))));
                    }
                    arr_13 [6U] [i_1] [i_0] = ((int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24912)) & (((/* implicit */int) arr_2 [i_0]))))), ((~(4294967285U)))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned short) max((((short) var_0)), (((/* implicit */short) (_Bool)1)))));
}
