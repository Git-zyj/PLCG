/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29537
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
    var_17 |= ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                                arr_14 [i_3] [i_3] [i_3] [i_4] [i_0] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (-1003013090))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_15 [i_0] = ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0] [i_3 - 2] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5567)) ? (((/* implicit */int) (short)21509)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(var_0)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_1] [i_0])) : (((/* implicit */int) var_5))))))));
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_3 + 3] [i_4 - 1] [i_4]))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_8))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_11 [i_0] [(unsigned short)12] [i_2] [i_3] [i_3] [i_3 + 2] [(short)9]), (arr_5 [i_0] [(short)21] [i_3] [i_4])))) % (min((arr_2 [(unsigned char)10]), (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) var_7)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_14)))) ? (min((((/* implicit */unsigned int) var_11)), (1300742859U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) (short)-1657))))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_9))) | ((-(((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
}
