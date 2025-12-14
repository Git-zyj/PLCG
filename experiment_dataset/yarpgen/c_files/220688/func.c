/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220688
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) var_9)), (min((var_7), (((/* implicit */long long int) (-(var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_2 - 3]) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 3] [i_2])))))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) / (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (3789006964441321498ULL) : (1729382256910270464ULL)))))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 785759004)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_0] [i_0] [i_0]))))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1 - 2])), (var_12))) == (1729382256910270464ULL))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_13))));
                arr_10 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) >> (((var_8) - (530004955)))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1729382256910270464ULL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (8705066096640008144ULL)))));
                var_21 = ((/* implicit */unsigned char) arr_4 [i_1]);
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) > (16ULL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (785759013) : (((/* implicit */int) arr_12 [i_4 - 1])))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_6])) ? (((((/* implicit */_Bool) ((arr_16 [i_4]) * (arr_17 [i_4] [i_4] [i_6] [i_5])))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) var_14))))))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (arr_18 [i_6]) : (arr_18 [i_5])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_4 - 1]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_6);
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (1928594657)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> (((/* implicit */int) (!(var_6))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (unsigned short)1))))), (max((((/* implicit */unsigned long long int) var_14)), (var_12)))))));
}
