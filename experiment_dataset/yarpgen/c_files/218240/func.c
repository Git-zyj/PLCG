/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218240
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((((arr_1 [i_0]) ? (((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) << (((((/* implicit */int) arr_3 [i_0] [i_0])) + (28))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) arr_4 [i_0]))));
                            arr_8 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) arr_0 [i_1]);
                var_16 = ((/* implicit */signed char) arr_6 [i_0] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4] [i_1] [i_0] [9])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_4 + 3]))))) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_1 + 1])) : (((arr_6 [i_0] [i_0] [i_0] [i_1 + 1] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_4]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [(unsigned char)1] [i_4 + 2] [(unsigned char)1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_3 [(unsigned char)7] [(unsigned char)7]))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_4 + 3] [i_1 + 1])) >> (((/* implicit */int) arr_6 [(unsigned short)7] [i_1] [i_0] [i_1] [i_1] [9]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] = (+(min((((((/* implicit */int) arr_2 [i_6] [(signed char)2] [i_4 - 1])) * (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_4] [i_5] [i_4])))), (((arr_13 [i_0] [i_0] [(signed char)0] [i_0] [i_6]) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_1] [(signed char)2] [i_1] [i_6] [(unsigned char)6])))))));
                                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)6] [i_4] [i_5] [i_5 + 2] [i_4])) ? (((/* implicit */int) arr_14 [(unsigned short)6] [i_0] [i_4] [i_5 + 2] [i_5 + 2] [(_Bool)1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_5] [i_5 + 2] [i_6]))))) ? (((/* implicit */int) arr_15 [i_0] [(unsigned short)1] [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_11 [(signed char)4] [(signed char)4] [i_4] [i_4 + 3]))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [6] [i_1] [i_1 - 1] [i_4 + 2] [i_5 + 2] [i_6 - 1])) ? (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_1 + 1] [(unsigned char)3] [(signed char)4] [i_6])) : (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_4] [(_Bool)0] [i_6]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_4 + 3] [(unsigned short)6] [i_0])), (arr_14 [i_0] [i_1] [i_4] [i_5] [i_0] [i_4])))) : (((arr_6 [i_0] [i_1] [(unsigned short)0] [i_5 + 1] [i_6 + 1] [i_1]) ? (((/* implicit */int) arr_6 [i_6 - 3] [i_5 - 1] [(unsigned short)6] [(unsigned short)6] [i_0] [(unsigned short)2])) : (((/* implicit */int) arr_6 [i_6] [(unsigned short)4] [(signed char)8] [i_6 + 1] [i_6 - 3] [i_6])))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) arr_6 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0])) ? (((/* implicit */int) (!(arr_5 [i_0] [i_0] [(unsigned short)8] [i_0])))) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_6 + 1] [i_0] [i_6]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) min((arr_15 [i_0] [i_1] [i_1] [i_5] [i_6 + 1]), (((/* implicit */signed char) (_Bool)1))))), (arr_4 [i_6])))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) -962906634))))) > (((/* implicit */int) var_3)));
}
