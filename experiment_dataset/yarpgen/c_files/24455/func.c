/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24455
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
    var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13)))))))));
    var_16 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((var_6) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))) & (((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 1104487216U))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_3 - 2] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(1962762563)))))))));
                                var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_2 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0 + 2] [i_5 + 1])) * (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_5 + 1]))))) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 2] [i_0 - 1] [i_5 + 1])) : (((int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_5 - 1])))))));
                                var_21 = ((/* implicit */short) max((((((unsigned int) arr_18 [i_7] [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2])) & (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0] [i_5] [i_1] [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)19129)))))));
                                arr_20 [i_0 - 2] [i_0 - 2] [i_7] [i_0 - 2] = ((/* implicit */unsigned short) var_4);
                                var_22 = ((/* implicit */_Bool) (~(((arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]) % (((/* implicit */int) ((unsigned char) arr_19 [i_7 + 4] [i_6] [i_0] [i_1] [i_0])))))));
                                var_23 ^= (~(((((((/* implicit */int) arr_13 [i_1 + 3] [i_5 - 1] [i_1 + 3])) != (((/* implicit */int) var_14)))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((int) var_3)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~((-(((/* implicit */int) ((_Bool) var_5))))))))));
}
