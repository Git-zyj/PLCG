/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37027
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 += ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) var_5)))) : (var_2));
                var_14 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((var_1) << (((((/* implicit */int) arr_4 [(short)2])) - (71)))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [2])))))));
                var_15 = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (short)32767);
                                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_3 + 1] [(signed char)11] [i_3] [i_3 + 1])) + (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) (!(arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                                var_18 = ((/* implicit */signed char) (_Bool)1);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) * (((/* implicit */int) ((var_2) == (((/* implicit */int) arr_3 [(unsigned short)4] [i_1])))))))) : ((-(-262571130510579122LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) (signed char)127)))))));
    var_21 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (unsigned short)62110)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)12)))), (((/* implicit */int) (unsigned short)20)))) < (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */long long int) var_5);
}
