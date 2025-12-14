/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49540
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3979305252681189945LL)))) && (((/* implicit */_Bool) ((3979305252681189925LL) | (-3979305252681189948LL))))))) > (((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> ((((~(-1271961500472584634LL))) - (1271961500472584604LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((max((max((var_15), (((/* implicit */long long int) (unsigned short)63523)))), (((/* implicit */long long int) ((unsigned char) -1885649265))))), (((/* implicit */long long int) (-(((/* implicit */int) min((var_8), (((/* implicit */short) var_5))))))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((arr_1 [i_0] [i_2]), (((/* implicit */unsigned int) max((var_14), ((unsigned char)178)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_9 [i_0])), (max((((/* implicit */unsigned int) ((unsigned char) arr_5 [i_0] [i_1]))), (((arr_12 [i_0] [i_1] [i_1] [i_0] [i_0]) >> (((((/* implicit */int) var_11)) - (17)))))))));
                var_20 = ((/* implicit */long long int) ((signed char) ((int) var_10)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
}
