/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235465
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
    var_14 = ((/* implicit */unsigned char) var_13);
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8468))) : ((~(var_6)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [12U] |= ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)248))))) ? ((+(((int) arr_5 [i_0 + 2] [i_0 + 1])))) : (((((/* implicit */_Bool) ((short) 536870911))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (signed char)105))))))));
            var_18 |= ((/* implicit */unsigned int) var_0);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_3 + 1]);
                    arr_14 [i_0] [(unsigned char)8] [i_0] = ((/* implicit */short) arr_9 [i_0] [(signed char)1] [(signed char)1]);
                    var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned char)8))))));
                }
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    arr_17 [(unsigned char)3] [i_1] [(unsigned char)3] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((_Bool) ((-9) ^ (((/* implicit */int) arr_12 [2] [i_2] [i_1] [(_Bool)1])))));
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_4 - 2])) >> (((arr_8 [(unsigned char)6] [i_1] [0]) - (1294584696U)))));
                }
                var_22 = ((/* implicit */unsigned int) min((arr_13 [i_0] [i_1] [i_1]), ((signed char)45)));
            }
            var_23 |= ((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), ((short)31776)));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_0] [(signed char)11] [i_0 + 1])) : (((/* implicit */int) var_4))))));
        var_25 += ((/* implicit */_Bool) var_11);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) + (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)21)), ((short)-31777)))) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [(signed char)11] [i_0] [i_0 - 2])))))))));
    }
    var_27 = ((/* implicit */_Bool) var_12);
}
