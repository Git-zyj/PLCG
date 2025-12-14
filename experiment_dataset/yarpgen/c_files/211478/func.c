/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211478
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((-798170742) / (2044432709)))) < (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_7))))) ? (((/* implicit */int) ((_Bool) ((int) var_1)))) : (((var_1) - (((/* implicit */int) ((-701088962749453266LL) != (((/* implicit */long long int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_0 - 2])))))) >= ((+(-5492148036083065301LL)))));
                var_12 += ((/* implicit */_Bool) max((((arr_3 [i_0] [i_0 + 4]) & (((/* implicit */unsigned long long int) 3516600454143522932LL)))), (min((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (arr_3 [i_0 + 2] [i_0 + 4])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_0 - 2])) & (((/* implicit */int) arr_0 [i_0 + 3]))))));
                            var_14 = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))))));
                            var_15 = ((/* implicit */short) ((((long long int) ((3852621045U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_2 + 1] [i_1])))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)96)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) (+((((-(var_0))) - (var_4)))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= ((+(((1124137874672297211LL) << (((var_0) - (710862109)))))))));
}
