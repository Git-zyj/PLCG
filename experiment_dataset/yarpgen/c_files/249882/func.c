/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249882
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
    var_10 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)11))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) var_8)), (var_4))))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)11)) ? (arr_7 [i_0] [i_4] [i_0] [i_3]) : (2154950649U)))))) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))));
                                var_13 = ((/* implicit */unsigned char) arr_12 [i_0] [i_3] [i_2] [i_3]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((var_4), (((/* implicit */unsigned long long int) var_3))))));
                    var_15 = ((/* implicit */unsigned char) 2140016633U);
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((var_4) | (((/* implicit */unsigned long long int) max((2140016633U), (((/* implicit */unsigned int) (unsigned char)252))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_8)))))));
}
