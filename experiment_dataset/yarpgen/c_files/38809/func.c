/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38809
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
    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) (unsigned short)2622))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_7)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
    var_20 = ((/* implicit */signed char) ((((((unsigned int) var_15)) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */int) var_16)) << (((((/* implicit */int) var_0)) - (25880))))) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)72))) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_5 [i_0])))) : ((-(((((/* implicit */int) (signed char)80)) >> (((var_17) - (2641234655U)))))))));
                    arr_6 [i_0] [i_2] = (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [(signed char)3])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned int) var_1)), (var_17))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned short)2622))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned short i_4 = 4; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 3; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_6 - 1] [i_5] [i_6 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_4 - 4])) ? (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)-68)))) : (((((/* implicit */int) arr_19 [i_5] [i_4 - 4] [(signed char)12] [i_6 + 1] [(unsigned short)1])) - (((/* implicit */int) arr_19 [i_5] [i_4] [i_5] [i_6 + 2] [i_7]))))))) ? ((~(((/* implicit */int) (signed char)-77)))) : (((((/* implicit */_Bool) ((unsigned short) arr_13 [i_5] [i_7 - 1]))) ? (((/* implicit */int) arr_18 [i_7 - 3] [i_6 + 3] [22U] [i_4 - 4] [i_4] [i_4] [i_4 + 1])) : (((((/* implicit */int) var_16)) * (((/* implicit */int) var_16))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_8)))))) <= (((((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_6 + 3]))))));
                                arr_21 [i_3] [(signed char)11] [(unsigned short)16] [i_6] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_7 - 1])) < (((/* implicit */int) arr_12 [i_6 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4 - 1])) ? (((/* implicit */int) arr_9 [i_7 - 1])) : (((/* implicit */int) arr_15 [i_4 - 1]))))) : (((unsigned int) arr_12 [i_6 + 2]))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_3] [(signed char)24] [i_4 - 4] = ((((((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) (signed char)-66)), (2306802701U))))) & (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_19 [i_3] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 3]), (((/* implicit */unsigned short) var_11))))) << (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)17] [i_4 - 2] [i_3] [i_4]))) : (var_14))) - (4294967241U)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_9);
}
