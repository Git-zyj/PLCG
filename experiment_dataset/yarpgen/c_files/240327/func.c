/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240327
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) 1125899906841600LL)) ? (((/* implicit */int) (short)-3719)) : (((/* implicit */int) (unsigned short)5774)))) : (((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */int) var_5)) : (((((-1127187321615277413LL) > (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) var_1)) : (min((var_0), (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((min((1663189611), (((/* implicit */int) (signed char)-83)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)5774)) - (5756)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [0] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1127187321615277413LL))))) : (((/* implicit */int) (unsigned short)59762)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)10] [i_0]))))) ? (((arr_7 [(short)13] [i_1] [i_1] [i_1]) & (var_0))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_0]))) <= (arr_2 [i_2] [i_3])))))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((+(arr_7 [(short)16] [i_1] [3U] [i_0 + 1]))) < ((-(((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) arr_2 [i_0 + 2] [i_1]);
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (var_4)))) ? (((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5750))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
}
