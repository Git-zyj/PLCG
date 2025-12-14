/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25998
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */int) max(((signed char)-80), ((signed char)-96)))) & (((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))))) & (((((_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)38)))) : (((var_4) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (_Bool)1)))))))))));
    var_11 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((signed char)-10), (((/* implicit */signed char) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)54))))) ? (((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 3])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) (signed char)-77))))));
                var_13 *= ((_Bool) ((((/* implicit */int) arr_3 [(signed char)10])) * (((/* implicit */int) arr_3 [(_Bool)1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_1 + 4] [i_1] [i_1 + 4] [(signed char)6] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_1] [i_2 + 1]))));
                    var_14 += var_5;
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 3] [i_2 + 2] [i_2 + 2])))))));
                }
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((/* implicit */int) ((arr_2 [i_1] [i_4] [i_1]) && (((/* implicit */_Bool) (signed char)-1))))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((arr_2 [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_10 [i_0] [i_4] [i_4] [i_5])) : (((/* implicit */int) (_Bool)1)))))))));
                                var_18 += ((signed char) (-(((/* implicit */int) arr_8 [i_0]))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)1))) * (((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((var_21), (((signed char) arr_13 [(signed char)2] [(signed char)2] [i_3 + 1] [i_0] [(signed char)2] [i_0]))));
                }
            }
        } 
    } 
}
