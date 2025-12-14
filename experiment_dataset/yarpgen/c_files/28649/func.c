/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28649
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (-2101581968)));
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) -2101581968)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 7298640042430973761ULL)) ? (((/* implicit */int) min(((unsigned short)43240), ((unsigned short)45528)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_8 [i_0 - 1]))))));
                                arr_14 [8LL] [i_3] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_9)), (var_6)))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-19760), (((/* implicit */short) (_Bool)1)))))) ^ (min((1384839894U), (3022323874U)))))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6609603266457023649ULL))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-26548))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [8] [i_0 + 1] [i_0] [(unsigned short)11]))) & (-8445914082397460355LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57841)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [0U] [i_1 - 1] [i_0 + 2]))))) ? (((((/* implicit */_Bool) (unsigned char)29)) ? (7952520491256369983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))))) : (min((7606687954691623248ULL), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)25455)) < (((/* implicit */int) var_4)))) ? (((/* implicit */int) min((var_10), (var_10)))) : (-951678234))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_2]))))), (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) / ((~(((/* implicit */int) var_1))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-30910)) * (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (short)-25455)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)1] [i_2] [i_5] [i_6 + 2])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_5] [i_2] [(_Bool)1] [i_0]))) : (var_8)))) ? (((((/* implicit */int) arr_8 [i_6])) ^ (arr_18 [i_0] [i_1] [i_2] [i_5] [i_6 - 1]))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)))) ? (((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_5 + 3] [i_6 - 1])))) : (((/* implicit */int) arr_17 [i_0] [i_5]))))));
                                arr_22 [8U] [i_1 - 1] [i_2] [i_5 - 1] [i_5] = min(((((+(((/* implicit */int) (signed char)-64)))) / ((~(((/* implicit */int) var_0)))))), (((/* implicit */int) arr_19 [i_0 + 1] [i_2] [i_5] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
