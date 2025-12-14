/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211317
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
    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 24576LL)) ? (((/* implicit */long long int) var_10)) : (var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((signed char) (+((+(var_10)))))))));
                var_21 = ((/* implicit */short) ((int) max((arr_5 [i_1 - 1] [i_0]), (((/* implicit */unsigned long long int) var_5)))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(var_0))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (short)32750))))))) : (-1501438590936294739LL)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((short)32743), ((short)-9988)));
                                var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 + 1])), ((-(11671370428037241942ULL))))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((short) (short)32750))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? ((+(((/* implicit */int) (_Bool)0)))) : (var_18)));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] = ((arr_10 [i_1 - 1] [i_1 + 2] [i_1 + 2] [17ULL] [17ULL]) + (((/* implicit */int) (unsigned char)232)));
            }
        } 
    } 
    var_24 = (~(((/* implicit */int) var_12)));
    var_25 |= ((/* implicit */signed char) var_2);
}
