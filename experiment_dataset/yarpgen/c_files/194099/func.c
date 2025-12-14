/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194099
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (max(((+(var_9))), (((/* implicit */long long int) max((var_11), (var_11)))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_3))))));
                    var_14 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1 + 1])), (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                                arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(var_8)))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (arr_5 [i_0] [i_1 - 2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(signed char)2])) ^ (((/* implicit */int) var_3))))))) : (arr_8 [i_0] [i_0] [i_3] [i_4])));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) var_4))))) ? (max((((((/* implicit */_Bool) (short)1375)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1375))) : (4003442960U))), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1])) ? ((+(((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
}
