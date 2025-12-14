/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54012
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_12)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)6))) + (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) && (arr_2 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (arr_4 [i_2])));
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_4 [i_1 - 1]))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) min(((!((!(((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4])))))), (((((/* implicit */int) var_3)) != ((~(((/* implicit */int) (short)6))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20)) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 1])) < (((/* implicit */int) arr_6 [i_2 + 2] [i_0]))))) : (((/* implicit */int) (unsigned char)30))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))));
                                var_24 = ((/* implicit */short) arr_7 [i_1] [i_1] [i_1 + 1]);
                                var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)56)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 - 4] [i_2 - 3] [i_2]))))));
                                var_26 = ((/* implicit */short) var_7);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_1] [i_1 + 1] [i_2 + 2] [i_3] [i_2] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1 + 1] [i_2 - 1])), (var_16)))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] [i_6])) < (((/* implicit */int) min((arr_4 [i_1]), ((signed char)-22)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)29026)))))) ? (((((/* implicit */int) arr_18 [i_1] [i_1] [i_2] [i_3])) * (((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_2 - 1] [i_3] [i_3] [i_6])))) : (((/* implicit */int) arr_10 [i_0]))))) : (min((((/* implicit */unsigned int) ((signed char) var_3))), (var_13)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) (((_Bool)1) && (var_10)));
    var_28 = ((/* implicit */int) (_Bool)1);
}
