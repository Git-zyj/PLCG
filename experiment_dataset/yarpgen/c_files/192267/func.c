/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192267
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = min((((/* implicit */unsigned int) min((305104044), (((/* implicit */int) var_9))))), (1524604828U));
                    var_17 = min((((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_0])) : (var_6)))), ((+(((/* implicit */int) ((signed char) (unsigned short)10329))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-7960)))))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_3 [i_0]))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_14 [i_6])) > (1524988114))))));
                        var_21 = ((/* implicit */unsigned short) min((min((arr_13 [i_4]), (arr_13 [i_0]))), (((((/* implicit */int) (signed char)(-127 - 1))) / (arr_13 [i_6])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_26 [i_7] [i_7] [i_4] [i_4] [(short)2] [i_4] = ((/* implicit */_Bool) (signed char)127);
                    arr_27 [i_0] [i_4] [i_7] [8U] |= ((((/* implicit */_Bool) arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1])));
                    var_22 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_7 - 1] [i_7 + 1] [i_7 - 1]))));
                }
                arr_28 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_16 [i_7 - 1] [i_7 - 1] [(unsigned short)13]), (((/* implicit */short) (signed char)37)))))));
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 14; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_23 |= ((short) (-((~(((/* implicit */int) (signed char)-38))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_38 [(short)10] [i_4] |= ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (unsigned short)5725)), (1226623271U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9794))) : ((((_Bool)0) ? (158750048U) : (((2919037531U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (!((_Bool)1))))))) >= (((/* implicit */int) ((short) ((arr_10 [i_0]) / (((/* implicit */int) arr_30 [i_0] [i_4])))))))))));
                            arr_39 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39112)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (signed char)74))))))) : (((unsigned int) ((signed char) (short)-30722)))));
                            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_11])) ? (((/* implicit */int) arr_11 [i_9 + 1] [i_4] [i_0])) : (((/* implicit */int) var_7)))), (((int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9] [i_9 + 1] [i_9 - 3])) ? (((/* implicit */int) arr_11 [i_9 - 3] [i_9 - 3] [i_9])) : (((/* implicit */int) arr_11 [i_9 - 3] [i_9 + 2] [(short)0]))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) 1524988114))));
                            var_28 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_9])) != (((/* implicit */int) var_13)))) ? (((/* implicit */int) arr_29 [i_4] [(short)1] [i_10] [i_10])) : (((/* implicit */int) ((unsigned short) 2670344458U)))));
                        }
                    }
                } 
            } 
        }
    }
    var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (unsigned short)55741)) ? (((/* implicit */int) (unsigned short)19149)) : (((/* implicit */int) (signed char)-7))))));
    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)41479))));
    var_31 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((short) (_Bool)1))), (var_12)))));
}
