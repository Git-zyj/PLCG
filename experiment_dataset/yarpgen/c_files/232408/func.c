/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232408
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = max((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) max(((unsigned short)56505), (((/* implicit */unsigned short) arr_5 [i_0]))))) / (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) arr_9 [i_2 + 1] [i_2 + 1] [i_4 - 2] [i_3]))), (max((((/* implicit */unsigned char) arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])), (((unsigned char) var_2))))));
                                var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3] [i_4] [i_4] [i_0])) ? (((/* implicit */int) (unsigned short)56505)) : (((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) arr_11 [i_2 + 2] [i_4] [i_2] [i_4] [i_4] [i_4 - 2])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) : (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_13 += ((/* implicit */signed char) ((unsigned short) ((signed char) arr_7 [i_0])));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_0] [(signed char)16] [i_0]))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_11 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)20] [i_0]))))));
        var_15 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19327))))) ? (((((/* implicit */_Bool) (unsigned short)44689)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (139)))))))));
    }
}
