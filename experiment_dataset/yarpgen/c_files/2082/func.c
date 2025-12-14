/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2082
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
    var_16 &= ((/* implicit */_Bool) ((unsigned char) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_15))))))));
    var_17 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
    var_18 = ((/* implicit */unsigned char) ((signed char) var_5));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)94))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) 11)) : (1473214672U))), (((/* implicit */unsigned int) (signed char)-74)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) arr_3 [(_Bool)1])))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)-123)))))))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-82))))));
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */signed char) ((((int) min((var_7), (2013272129)))) % (((/* implicit */int) (signed char)109))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_21 = (~(((((/* implicit */int) ((signed char) (signed char)127))) * (((/* implicit */int) arr_11 [i_1] [i_5] [i_1] [i_1])))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_5 - 2])) ? (arr_8 [i_2] [i_5 - 3]) : (arr_8 [i_2] [i_5 - 2])))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) var_11)) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) + (var_13)))))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_0] [16] = ((/* implicit */signed char) ((var_11) <= (((/* implicit */int) (signed char)42))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)3)))) > (((/* implicit */int) var_5))));
                        arr_29 [i_1] [i_1] [i_2] [i_7] = (~(arr_21 [i_0] [i_1] [i_2] [i_7 + 1]));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((arr_8 [i_2 - 1] [i_2 + 1]) * (min((((var_0) / (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_15 [17U]))))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (unsigned char)8))))), (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (1402221871U))))));
                            var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) (+(var_3)))) - (-9223372036854775793LL)))));
                            arr_36 [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    }
                    for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */int) arr_14 [i_1] [i_10] [i_2] [i_0] [i_0] [i_1]);
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((var_13), (((/* implicit */int) (signed char)-117)))))) <= (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)117)) : (var_7))))))))));
                    }
                }
            } 
        } 
        arr_39 [i_0] = ((/* implicit */unsigned int) arr_7 [21LL]);
    }
}
