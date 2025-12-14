/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190454
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
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))) == (((((/* implicit */_Bool) 6114289720966027272ULL)) ? (arr_0 [i_2]) : (((/* implicit */int) (signed char)25))))))))))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)18)) ? (6941623700881848678LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))), (((/* implicit */long long int) (~(((/* implicit */int) ((arr_1 [i_1] [i_3]) == (((/* implicit */unsigned int) var_9)))))))))))));
                        var_17 = ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)18)))) ? (min((((((/* implicit */_Bool) 6941623700881848678LL)) ? (arr_4 [i_0] [(signed char)6]) : (arr_6 [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_7 [i_3])))) : (((/* implicit */unsigned long long int) var_12)));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        arr_12 [6U] [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) arr_7 [i_2]);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_6 [(signed char)12] [i_5]))))), (((/* implicit */unsigned long long int) arr_2 [i_0])));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_4] [13U] [i_0])), (max((17167923013827056706ULL), (var_11))))))));
                            var_20 = ((/* implicit */unsigned char) (-(var_0)));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_18 [i_0] [11] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_2 [i_0])))), ((+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) == (((/* implicit */int) arr_2 [i_2])))))))));
                            var_21 = ((min((1631778853), (((/* implicit */int) arr_16 [7] [i_1] [i_2] [i_4] [i_6])))) == (((/* implicit */int) ((_Bool) min(((_Bool)1), ((_Bool)0))))));
                        }
                        var_22 = ((/* implicit */long long int) 1388156033);
                        var_23 = ((/* implicit */int) min((var_23), (arr_5 [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_21 [i_2] [i_2] [i_1] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                        var_24 |= ((/* implicit */unsigned int) arr_13 [9LL] [i_0] [1LL] [1LL] [i_0] [1LL]);
                        var_25 |= arr_11 [(_Bool)1] [i_1] [i_2] [i_7] [i_0];
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_2] [9LL] [i_0])) == (((/* implicit */int) var_3)))) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) ? (1453882524U) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_1] [i_1]))))))))));
                        arr_24 [i_1] [i_2] [i_2] = ((/* implicit */int) min((((arr_4 [i_0] [i_0]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1182))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned long long int) (short)-10360)), (2035014445250774257ULL)))))));
                    }
                    arr_25 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)48)), ((-(((/* implicit */int) (signed char)102))))));
                }
            } 
        } 
    } 
    var_27 = min((min((1443200067), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) ((5818854129879511467LL) == (((/* implicit */long long int) var_7))))) == (-1607200162)))));
}
