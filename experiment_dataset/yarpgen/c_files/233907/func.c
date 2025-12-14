/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233907
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
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)11597))) != (min((-2330271099997681328LL), (((/* implicit */long long int) (short)-31551))))))), (((signed char) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11582))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [4] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0] [i_1] [i_0]))), (((((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [(_Bool)1]))))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_0] = ((unsigned short) 198107887U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((var_6) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2565356208U)))) ? (((/* implicit */int) min((var_7), (var_7)))) : ((~(var_2)))))) : (var_1)));
    var_13 = ((/* implicit */unsigned char) (+(1729611107U)));
}
