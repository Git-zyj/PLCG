/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45496
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
    var_19 = min((var_15), (((/* implicit */long long int) (unsigned short)17594)));
    var_20 |= (~(((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)17594))))) - (min((var_8), (((/* implicit */long long int) var_13)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_2] [i_1] [i_0])))))), (min((arr_5 [7LL] [7LL]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
                                var_22 += ((/* implicit */unsigned char) (~(min((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_0] [i_0] [i_0] [i_1] [i_0]))))), (((/* implicit */long long int) ((unsigned short) (unsigned short)23585)))))));
                                var_23 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_4] [i_1] [i_1] [i_0]) : (8378185430982115536LL)))))), (var_6)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) min(((short)22088), (arr_4 [i_2] [i_1] [i_0])))), ((+((+(((/* implicit */int) arr_9 [i_0] [9LL] [i_0] [i_0] [i_0]))))))));
                    var_25 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_5 [i_2] [i_1])))) <= (min((((((/* implicit */int) arr_5 [i_2] [i_0])) - (((/* implicit */int) var_0)))), (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47941))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_16)) : (var_15)))))));
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)0)) : (511))), (((/* implicit */int) ((var_17) == (4294967280U)))))), (max(((+(((/* implicit */int) var_18)))), (min((var_10), (((/* implicit */int) (unsigned short)17594)))))))))));
}
