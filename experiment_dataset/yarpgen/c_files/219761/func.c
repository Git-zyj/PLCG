/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219761
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
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44254)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)-4014)))) : (((/* implicit */int) (signed char)117)))) & (((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)27469)))) | (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)-85))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)4), (((/* implicit */short) (signed char)30))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (short)-20203);
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_1]))))), (var_6)));
                arr_6 [i_0] = arr_3 [i_1];
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */long long int) max((((/* implicit */signed char) ((arr_9 [i_3] [(unsigned short)3]) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1])) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (unsigned short)16383)))))))), ((signed char)56)));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */int) var_4)), (min((((/* implicit */int) (short)127)), (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [(short)6]))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                            {
                                var_22 += (!(((/* implicit */_Bool) (signed char)-23)));
                                arr_15 [i_0] [i_1] [(unsigned short)1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_4])))))) ? (((/* implicit */int) arr_13 [i_0] [i_4 + 2] [i_2] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_4 + 2]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((arr_17 [i_0] [i_1] [i_2] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3]))))))));
                                var_24 = ((/* implicit */unsigned short) ((long long int) arr_11 [i_5] [i_3] [i_2] [i_1] [i_0]));
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [3U] [0] [i_3] [i_5]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) != (((((/* implicit */_Bool) -1953889459)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)82)))))))) >= (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37416))) / (17051716150726214483ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_1))))))))))));
    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)63))));
}
