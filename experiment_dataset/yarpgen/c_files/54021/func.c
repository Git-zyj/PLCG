/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54021
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
    var_16 += ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0))) % (((/* implicit */unsigned int) ((var_5) + (((/* implicit */int) var_10)))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))))) : (var_12))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] &= var_6;
                        arr_12 [i_1] &= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)10] [i_0] [i_3])) ? (2810100990U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((arr_10 [i_0] [i_0] [(_Bool)1] [i_3]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((arr_4 [i_0] [i_0]), (((/* implicit */signed char) arr_10 [i_1] [8] [8] [8]))))))))));
                    }
                } 
            } 
        } 
        arr_13 [(signed char)4] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (-(arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2])));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_4] [1LL])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_4] [12U])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_4] [i_4]))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) 256);
            arr_19 [(unsigned short)11] [i_5] = ((/* implicit */unsigned int) arr_3 [0] [0] [0]);
        }
    }
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) var_15)), (3488071957U))) : (((/* implicit */unsigned int) (+(var_5))))));
}
