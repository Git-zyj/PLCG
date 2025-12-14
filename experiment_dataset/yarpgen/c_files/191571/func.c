/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191571
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
    var_18 *= var_5;
    var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1227313503U)))) ? (min(((+(3889587214U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_9) ? (((/* implicit */long long int) -1)) : (var_14))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [10] [i_4] [i_1] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31))))) ? (-4) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0] [i_1])) > (((/* implicit */int) var_15))))))));
                                var_20 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) * (min((437371542), (arr_2 [i_1] [i_1] [i_4]))))) * (((-1) * (((((/* implicit */int) var_15)) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [(signed char)1]))))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1505401992U)) ? (((/* implicit */int) var_17)) : (var_1))), (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [i_2])), (arr_10 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 4])))) : (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0])))))))) : ((~(((/* implicit */int) ((signed char) var_0))))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */int) min((((min((arr_5 [i_0] [i_0] [(signed char)10]), (((/* implicit */unsigned int) var_12)))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_1])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])))) : ((+(((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */_Bool) min((max((max((1354409753U), (((/* implicit */unsigned int) (_Bool)1)))), ((-(14U))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))) : (arr_5 [i_1] [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
}
