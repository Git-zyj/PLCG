/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244708
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) >= (((/* implicit */int) var_4))))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? (((unsigned long long int) (+(var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) (unsigned char)192))))))) && (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_3;
                var_20 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [0]))))) - (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_1 + 1])) || (var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_3 + 2] [i_1 - 1])))) : (arr_6 [i_3 + 2] [i_1 - 2])));
                                var_22 -= ((/* implicit */unsigned char) (signed char)49);
                                var_23 = ((/* implicit */_Bool) (unsigned char)192);
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_11 [i_1 + 1] [i_0] [i_0] [i_1 - 2]), (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1])))))));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_14 [i_1] [i_1 + 1] [i_1 - 2])))) == (((/* implicit */int) var_16))));
                    var_24 = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1]);
                }
                var_25 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)192));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (var_5))))))));
}
