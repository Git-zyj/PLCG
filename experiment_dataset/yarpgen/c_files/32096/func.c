/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32096
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
    var_16 = ((/* implicit */_Bool) ((signed char) var_1));
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_11) : (((/* implicit */long long int) (-(var_6)))))), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_1 [i_1 + 2] [i_1 - 2]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_4);
                                var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (arr_3 [(signed char)3] [i_1] [(signed char)3]))))) : (max((var_8), (((/* implicit */long long int) arr_3 [i_2] [i_3] [i_2]))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_15))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_13)))), (((long long int) 3682544917U))))) ? (max((((long long int) var_13)), (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))));
}
