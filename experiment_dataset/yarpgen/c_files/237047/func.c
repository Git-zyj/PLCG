/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237047
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 + 1] [i_0]), (arr_3 [i_1 - 1] [i_1 + 1] [i_0]))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_0] [i_1 - 1] [i_0]), (arr_3 [i_0] [i_1 + 1] [i_0])))) / (4095)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4117))))), (0U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)237))));
        var_24 = ((/* implicit */unsigned short) arr_5 [i_2]);
        arr_7 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))) - (3871001049U)))));
        var_26 = ((/* implicit */unsigned int) (((~(1073741823))) >= (((((/* implicit */int) var_12)) | (((/* implicit */int) var_11))))));
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), (-1073741800)));
    }
    var_28 = ((/* implicit */short) (~(4294967295U)));
}
