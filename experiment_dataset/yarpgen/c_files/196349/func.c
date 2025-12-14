/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196349
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
    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) (short)-32752))))));
    var_18 &= var_15;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) var_7)) + (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_13)) : (arr_2 [i_0] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)11936)), ((unsigned short)5258)))), (((((/* implicit */_Bool) (unsigned short)45577)) ? (((/* implicit */int) (unsigned short)19959)) : (((/* implicit */int) (short)5858)))))))));
                            arr_11 [i_1] [i_1] = (i_1 % 2 == zero) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1])) >> (((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1])) - (98)))))), (min((((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_1 + 1])), (((unsigned int) var_9)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1])) >> (((((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1])) - (98))) - (122)))))), (min((((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_1 + 1])), (((unsigned int) var_9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) (-(max((max((var_1), (((/* implicit */int) var_6)))), ((~(((/* implicit */int) (short)32767))))))));
    var_22 = ((/* implicit */int) min((3711759710U), (((/* implicit */unsigned int) (unsigned short)2032))));
}
