/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23147
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
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (unsigned char)255);
                    arr_8 [(short)5] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_6 [i_0 - 3] [9] [i_0] [i_0 + 1]) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */int) ((short) arr_1 [i_2]))) : (((/* implicit */int) ((unsigned short) arr_7 [i_1])))));
                    var_16 = ((/* implicit */unsigned char) ((signed char) ((short) arr_7 [i_0 + 1])));
                    arr_9 [i_2] [(unsigned short)6] [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 4290969215365601367ULL))) ? (((((-3344388190683473177LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) arr_5 [i_1] [i_2])))))) : (var_8))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned char) var_5)))));
    var_18 = ((/* implicit */unsigned int) var_13);
}
