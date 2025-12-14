/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239097
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_8))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)243)) - (((/* implicit */int) (unsigned char)255)))) - (((arr_3 [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_4)))))))));
                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_21 = ((unsigned int) ((short) ((((/* implicit */int) arr_9 [i_2] [i_2])) + (((/* implicit */int) arr_10 [i_2] [(unsigned short)11] [(unsigned char)4] [i_5])))));
                                var_22 = ((/* implicit */int) max((max((((unsigned int) var_17)), (((/* implicit */unsigned int) min((var_5), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_11 [i_2] [i_3] [i_4] [i_3]))), (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_15 [i_4] [i_2] [i_3] [i_5])) : (((/* implicit */int) var_10)))))))));
                                var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((unsigned int) arr_17 [i_2] [i_6]))))), ((+(var_6)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) arr_10 [3LL] [i_3] [i_4] [i_4]);
                    var_25 *= ((/* implicit */int) ((_Bool) min((min(((short)28483), (((/* implicit */short) (unsigned char)255)))), (((/* implicit */short) (!(((/* implicit */_Bool) 0U))))))));
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_8 [i_4] [i_4] [i_3])))))), (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (min((3245698250U), (3U))) : (((/* implicit */unsigned int) arr_17 [i_4] [i_3]))))));
                }
            } 
        } 
    } 
}
