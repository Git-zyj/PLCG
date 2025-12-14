/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20052
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
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_15 = ((unsigned short) (signed char)112);
                        var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_6 [(signed char)0] [i_2 + 2] [i_2 + 2] [i_1 + 1])))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)204)) != (((/* implicit */int) (unsigned short)40795)))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((_Bool) (+(4294967291U)))) ? (max((((((/* implicit */int) arr_5 [i_3] [i_1] [i_3])) / (var_11))), (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2])))))) : (((/* implicit */int) arr_9 [i_3] [i_3] [(unsigned char)3])))))));
                        var_18 = (short)-31431;
                    }
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [(unsigned short)10]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-26039)) : (((/* implicit */int) (signed char)5))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)31431)) << (((((/* implicit */int) (short)18991)) - (18986)))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))) : (((-1111611904) + (((/* implicit */int) (unsigned short)40715)))))) : (min((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_4] [i_5])), (((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) arr_1 [i_2])))))))))));
                                var_20 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_9 [i_2] [i_2] [i_5])) << (((((/* implicit */int) arr_5 [i_0] [i_2] [i_1])) - (189))))) : (((/* implicit */int) arr_8 [i_2 - 1] [i_4] [i_2 - 1]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (-2117850070)))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_9 [i_2] [i_2] [i_5])) << (((((((((/* implicit */int) arr_5 [i_0] [i_2] [i_1])) - (189))) + (63))) - (11))))) : (((/* implicit */int) arr_8 [i_2 - 1] [i_4] [i_2 - 1]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (-2117850070))));
                                var_21 = ((/* implicit */short) ((signed char) (unsigned char)211));
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_2] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 2] [i_0] [i_1 - 2] [i_0])) << (((/* implicit */int) ((((/* implicit */_Bool) 104638870)) || (((/* implicit */_Bool) (unsigned short)578)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_12))));
}
