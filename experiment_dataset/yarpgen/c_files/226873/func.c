/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226873
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) (-(1743114526))))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((var_15) >= (0)))), (((arr_3 [i_3] [i_2] [i_1]) ^ (arr_3 [i_0 + 3] [i_2] [i_3])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(min((var_16), (arr_9 [i_0 - 2] [i_1 - 1] [i_1] [i_1 - 1]))))))));
                arr_12 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (~((((-(((/* implicit */int) var_8)))) | (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_14)))))))));
                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) 7716023337748526115LL));
                var_22 = ((/* implicit */long long int) (unsigned short)26715);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) min(((unsigned short)6137), (((/* implicit */unsigned short) var_7)))))))));
    var_24 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) < (((/* implicit */int) var_5)))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)8192)) : (var_12))) ^ (max((var_6), (844465896))))) : (((/* implicit */int) max((((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (var_3))))));
    var_25 = min((var_16), (max((min((((/* implicit */int) var_8)), (830949011))), (((/* implicit */int) var_17)))));
}
