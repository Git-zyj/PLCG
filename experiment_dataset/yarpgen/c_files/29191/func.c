/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29191
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [17U] [i_1] [(_Bool)1])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) min(((short)-18018), (((/* implicit */short) arr_3 [i_0] [i_1] [i_2])))))));
                    var_17 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_5 [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                                var_19 = ((arr_0 [i_1] [i_4 + 1]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0]))))) : ((~(4294967295U))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 878065958U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (((((/* implicit */unsigned int) (-(var_12)))) / (((arr_4 [i_0] [i_0] [i_0]) * (1633564156U)))))));
                                var_21 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) % (max((((/* implicit */unsigned int) arr_9 [i_4] [i_3] [i_0] [5U] [i_0])), (4294967278U)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_2])))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)18018))));
}
