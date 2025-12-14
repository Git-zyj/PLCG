/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25655
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_15)) : (15657781722121514102ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) var_10)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) 536870911ULL)))))))));
                                var_18 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) -1))), (((((/* implicit */_Bool) arr_15 [i_0])) ? ((+(var_15))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(arr_1 [i_4 + 1])))), ((~(1)))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */short) max((arr_0 [i_0]), (arr_0 [i_0])))), (min((arr_16 [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)92))))));
            }
        } 
    } 
}
