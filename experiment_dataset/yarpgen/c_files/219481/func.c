/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219481
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (unsigned short)63032))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_15 = ((((/* implicit */int) ((unsigned short) (_Bool)1))) | (((/* implicit */int) (unsigned char)10)));
                            var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), (((((/* implicit */int) (signed char)110)) + (((/* implicit */int) (unsigned short)29276)))))) * (((/* implicit */int) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_7 [i_3])) + (87))))) > (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)29264)))))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-127)) || ((_Bool)1)));
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_6] [i_6] = ((/* implicit */int) ((arr_19 [i_1] [i_0]) ? (((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 - 2] [i_1 + 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                                arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (-(18446744073709551612ULL)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) arr_15 [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (signed char)-119);
}
