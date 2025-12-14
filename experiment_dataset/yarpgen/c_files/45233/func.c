/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45233
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
    var_17 = max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_1) : (var_4)))) ? (((4087131803U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65507))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (0)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (819498388U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 29594383U)) ? (((((/* implicit */_Bool) -2016223363)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_13))))) : (((2627357360U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) 2627357353U)) ? (1667609936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (2627357334U) : (1667609935U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (2627357352U))))) : (min((((/* implicit */unsigned int) 0)), (max((2627357356U), (((/* implicit */unsigned int) var_1)))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (327787749)))) ? (((((/* implicit */int) arr_0 [i_1] [i_0])) | (var_1))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_1] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_3);
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)62576)), (var_1)))), (((((/* implicit */_Bool) 2627357341U)) ? (var_5) : (var_0)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)65524)))) - (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 2]))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_2] [i_3] [i_4])), (arr_8 [i_2 - 1] [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned int) 0)), (2627357360U))))));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)4978)) ? (var_1) : (((var_16) + (arr_9 [i_2]))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (1667609932U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33465))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (1580775484) : (-305585022)))))))));
                }
            } 
        } 
    } 
}
