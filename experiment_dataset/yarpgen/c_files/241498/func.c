/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241498
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
    var_17 = var_0;
    var_18 = ((/* implicit */short) ((((int) (-(((/* implicit */int) var_6))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) var_0);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)22297)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-23315)))) <= ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_0]))))))) > (((/* implicit */int) (((-(12196814420907650419ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) arr_3 [(short)12]))))));
                    var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])))) ? ((-(((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) && (var_8))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_14)) ? (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
}
