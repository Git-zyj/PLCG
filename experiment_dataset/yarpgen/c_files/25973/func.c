/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25973
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
    var_20 = ((/* implicit */signed char) (((_Bool)0) ? (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_17)) ? ((-(((/* implicit */int) var_15)))) : ((-(((/* implicit */int) var_1))))))));
    var_21 -= var_19;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (signed char)125)))) / (((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)53079)) ? ((-(min((((/* implicit */long long int) (unsigned short)7)), (arr_5 [i_0] [i_0] [i_1 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_0])), ((short)-3795)))) * (((/* implicit */int) var_7)))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_16))))))) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_18)))) + (2147483647))) << (((/* implicit */int) var_7))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (var_3)));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) (_Bool)0);
}
