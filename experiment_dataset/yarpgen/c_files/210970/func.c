/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210970
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_10))) & (((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */int) var_0)) : (((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((((/* implicit */long long int) var_2)), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_1] [i_1]))), (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned char) arr_0 [i_0])))))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) max((arr_4 [6ULL] [i_1] [6ULL]), (arr_4 [(signed char)2] [i_1] [(signed char)2]))))) ? (((/* implicit */int) min((var_0), (((((/* implicit */int) arr_0 [10])) != (((/* implicit */int) arr_0 [(_Bool)0]))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3 + 1] [i_4] = ((_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_3 [2] [i_1] [6U])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                                var_16 = max((((/* implicit */int) ((unsigned short) var_12))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) ((unsigned short) var_2))) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_4]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [2LL]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))))));
}
