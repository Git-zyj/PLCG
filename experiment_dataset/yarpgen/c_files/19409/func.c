/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19409
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(var_12)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-4096), (((/* implicit */short) (signed char)7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11381))) ^ (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (signed char)25)) ? (3ULL) : (((/* implicit */unsigned long long int) 807800374827422750LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))))))));
                arr_4 [(unsigned char)13] [i_1] = ((/* implicit */unsigned int) (short)(-32767 - 1));
                var_16 = ((/* implicit */long long int) (~(((var_7) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2]))))));
                arr_5 [i_0 + 4] = min(((((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))), ((!(arr_3 [i_0 - 1] [i_0 - 2]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_18 += ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_1)) ? (var_12) : (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)11381)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_5) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_8)))))))))));
    var_20 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((var_12) & (((/* implicit */unsigned long long int) var_9)))))));
}
