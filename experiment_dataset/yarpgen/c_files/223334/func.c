/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223334
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
    var_11 &= ((/* implicit */long long int) (~(max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((min((min((var_2), (((/* implicit */int) (unsigned short)40423)))), (((/* implicit */int) ((var_9) > (((/* implicit */int) (signed char)-50))))))), (var_2)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_4]);
                                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_2]))), (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) ^ (arr_5 [i_3 - 1] [i_1])))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [9LL] [9LL])) ? (var_0) : (((/* implicit */int) arr_6 [i_1] [i_3 + 1]))))) ? (min((var_7), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) min((var_9), (arr_2 [i_2] [i_2] [i_2]))))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 + 1]))))))));
                                var_16 &= arr_1 [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) >> (((/* implicit */int) (_Bool)0)))))), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((arr_14 [(signed char)0]) ? (arr_12 [i_6] [i_5]) : (arr_12 [i_5] [i_6])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_15 [(signed char)12]) : (var_3))) : (max((var_1), (((/* implicit */int) arr_17 [6LL] [i_6] [i_5]))))))))));
                var_19 = ((/* implicit */int) max((var_19), (max((max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) arr_17 [(_Bool)0] [i_6 + 2] [i_6 - 1])))), (((/* implicit */int) ((((arr_14 [(_Bool)1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) arr_13 [(signed char)0] [(signed char)0])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_7))) ^ (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) ((long long int) var_1)))))))));
}
