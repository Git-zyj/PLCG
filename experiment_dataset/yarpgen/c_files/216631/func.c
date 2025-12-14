/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216631
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned int) ((unsigned short) (short)-29709));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = (unsigned short)37371;
                    var_17 = (unsigned short)14105;
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) arr_4 [i_0 - 1] [i_0]))), (((unsigned int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_10)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_18 = ((short) (unsigned short)925);
            arr_11 [i_0] = ((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_0 + 1]);
            arr_12 [i_0] [i_0] = (+(3119345952U));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_4] [i_6])) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0] [i_0 - 1])) >= (((/* implicit */int) ((unsigned short) var_13)))))) : (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) (unsigned short)61897)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_4])))))))));
                        arr_19 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)925)))));
                        arr_20 [(unsigned short)7] [(unsigned short)7] [i_0] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) + (1722316901U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))));
                        var_20 -= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_5])) % (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)925)) : (((/* implicit */int) (unsigned short)6536))))));
                    }
                } 
            } 
            var_21 += var_2;
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            arr_25 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) 3930744575U);
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_8 + 1] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29558))) : (arr_22 [i_8 + 1] [i_8])));
                        var_23 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)35978))));
                        var_24 = ((short) var_4);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_34 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_7] [i_11] [i_11])) ? (((/* implicit */int) arr_6 [4U] [i_11] [i_7])) : (((/* implicit */int) (unsigned short)61934))));
            var_25 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_9)))));
            arr_35 [i_7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_7] [i_7] [i_11] [i_11])) * (((/* implicit */int) arr_15 [i_7] [i_11] [i_7] [i_7]))));
            arr_36 [i_7] [(unsigned short)14] [i_11] &= ((/* implicit */unsigned short) 4294967269U);
        }
        var_26 = ((/* implicit */unsigned short) 7U);
    }
    var_27 = ((/* implicit */unsigned int) var_2);
}
