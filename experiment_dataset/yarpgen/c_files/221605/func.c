/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221605
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_5 [1] [i_1]))), ((~(((/* implicit */int) arr_6 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((min((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1))))), (var_13))) == ((+(((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [(unsigned char)4]))))));
                            var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])) * (1006632960U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */short) ((((((/* implicit */_Bool) (short)8340)) || (var_12))) || (((/* implicit */_Bool) ((unsigned short) var_4)))))), (((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_10))))));
    var_20 = (+(1006632960U));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))))))) ? (((((((/* implicit */int) var_7)) != (((/* implicit */int) var_5)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_7)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
