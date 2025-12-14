/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44219
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
    var_19 = ((/* implicit */long long int) var_17);
    var_20 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [0LL] [i_0] [i_2] |= arr_3 [i_0] [i_1];
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1 + 1] [i_1] [i_3] [i_4] [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_1] [i_4] [i_4]))))));
                                var_22 = arr_13 [(signed char)12] [i_1 - 3] [i_2 - 1] [i_2 - 1] [i_3 - 3] [i_2 - 1];
                                var_23 += ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) * (((var_4) / (arr_3 [i_2 + 3] [i_1 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            {
                arr_21 [i_6] = ((/* implicit */unsigned long long int) var_18);
                arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((signed char) var_7));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_8] [i_6] [i_8]))) : (-3157487596412305711LL)))) : (min((var_5), (((/* implicit */unsigned long long int) 9061181937736082900LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) -7705861623676919493LL)) == ((+(arr_24 [7ULL] [i_5]))))))) : (((((/* implicit */_Bool) var_5)) ? ((~(arr_26 [i_8] [i_7] [i_6 + 2] [i_6] [i_5] [i_5]))) : (18446744073709551611ULL)))));
                            var_25 += ((/* implicit */signed char) var_4);
                            var_26 = ((/* implicit */long long int) max((((var_3) * (((/* implicit */unsigned long long int) arr_17 [i_5 - 1])))), (((/* implicit */unsigned long long int) max((var_11), (var_12))))));
                        }
                    } 
                } 
                arr_28 [i_6] = 18446744073709551608ULL;
            }
        } 
    } 
}
