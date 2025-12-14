/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25452
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (unsigned char)116))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1 - 1] [6] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 1]);
                    var_18 *= ((((((/* implicit */_Bool) -1)) && ((!(((/* implicit */_Bool) -1351788265)))))) || (((/* implicit */_Bool) max((arr_3 [i_0] [i_0 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (signed char)48))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-46)) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_4 - 2])) ? (arr_1 [i_0 + 1] [i_3]) : (((/* implicit */unsigned int) -1351788265)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((1713223197) != (arr_2 [i_0])))))))));
                    arr_12 [i_4] = (+(((/* implicit */int) (unsigned char)66)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) arr_17 [i_4] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])) ? (((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])) ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6]) : (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6]))) : ((~(((/* implicit */int) arr_17 [i_4] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2])))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_5] [i_4 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 - 2] [i_6 + 1]))))) : (((/* implicit */int) arr_17 [i_4] [i_3] [i_3] [i_3] [6U]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) var_9);
    var_23 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-41))));
}
