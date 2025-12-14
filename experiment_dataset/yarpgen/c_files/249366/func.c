/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249366
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) % (var_17)))) ? (((((/* implicit */int) (_Bool)1)) * (var_14))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 205859142)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((_Bool) -945949931)) ? (50331648U) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_10 [(unsigned short)1] [i_2] [i_3] [i_2 - 1] [i_2 + 2])))))))));
                                arr_13 [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) > (((var_17) + (((/* implicit */unsigned long long int) var_0))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_24 = ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_11 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_8))))))))));
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) || (((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_4 [(unsigned short)12]))))))), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (var_19)))))));
                }
            } 
        } 
    } 
}
