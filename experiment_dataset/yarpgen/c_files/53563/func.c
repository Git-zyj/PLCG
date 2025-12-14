/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53563
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_13))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)27)) : ((-(((/* implicit */int) (unsigned short)0)))))) % (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
                                var_20 = ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_7))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_15))))))) : (min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_4))))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((unsigned short) var_2)), (((/* implicit */unsigned short) var_6)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_4)))), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned int) var_9)), (var_4))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_6)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_8);
}
