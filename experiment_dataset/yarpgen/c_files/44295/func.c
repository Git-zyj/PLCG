/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44295
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */int) (~(((long long int) var_17))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_17)))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2])) ? (arr_12 [i_0] [i_0] [i_0] [i_3]) : (arr_7 [i_4] [i_3] [i_2] [i_0] [i_0])))))));
                                var_18 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_2] [(unsigned short)4] [i_4]))))) ? (133278234U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_1] [3LL] [i_2] [i_4]))))));
                                arr_14 [(unsigned short)2] [(unsigned short)6] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_15)))) ? (((((/* implicit */_Bool) (signed char)62)) ? (arr_11 [i_2] [i_2]) : (arr_11 [i_1] [i_2]))) : (((/* implicit */long long int) ((int) arr_9 [i_0] [i_2] [i_0] [i_4])))));
                                arr_15 [8U] [5] [i_2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) 4398569912272116574LL)) ? (var_4) : (((/* implicit */unsigned int) arr_0 [i_0]))))), (((/* implicit */long long int) var_4))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned short) var_14)))))));
}
