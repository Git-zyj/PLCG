/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46817
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_1] [i_1] [i_1])))) ? ((-(((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_3 [(_Bool)1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (arr_3 [i_0] [i_1 - 1] [i_1 - 1])))));
                var_11 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)0)) >> (((arr_2 [i_0] [i_0]) - (378262856U)))))))) : (((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)0)) >> (((((arr_2 [i_0] [i_0]) - (378262856U))) - (3884102843U))))))));
                var_12 = ((/* implicit */signed char) (+(max((((-1044559938) / (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)49))))))));
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(var_4)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (4190538248U)))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) != (var_4)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-68)) - (((/* implicit */int) (signed char)-50))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] [i_4] = ((max((((/* implicit */unsigned int) (signed char)-30)), (798102816U))) >> (min((((/* implicit */unsigned int) var_8)), (max((3703803247U), (((/* implicit */unsigned int) var_8)))))));
                                var_15 = ((/* implicit */_Bool) ((signed char) 2075451567U));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((min((var_2), (231991242U))) >> (((((/* implicit */int) (signed char)60)) - (37)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_2])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_2 [i_3] [i_0])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-17))), (((signed char) 754396728))));
}
