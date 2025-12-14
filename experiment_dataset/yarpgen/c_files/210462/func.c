/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210462
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1]);
                var_15 &= ((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (min((((/* implicit */int) arr_4 [i_1 + 1] [5] [i_0])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1] [(unsigned char)7] [i_0])) : (((/* implicit */int) var_11))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)845)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)845)))))))) / ((~(((arr_3 [i_0] [i_0]) << (((arr_3 [i_0] [i_1]) - (11130336460453922459ULL)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) - (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_1 - 2])) - (((/* implicit */int) arr_4 [4LL] [i_1 + 1] [4LL]))))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_0] [i_0])))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((arr_3 [i_1] [i_0]) >= (((/* implicit */unsigned long long int) var_2)))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_8))));
}
