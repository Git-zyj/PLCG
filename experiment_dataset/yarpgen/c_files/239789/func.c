/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239789
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
    var_17 = ((/* implicit */_Bool) max((max((var_7), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_15))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_4 [18LL] |= var_0;
        var_18 += ((/* implicit */_Bool) arr_2 [(unsigned short)8]);
        arr_5 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57292)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) / ((-(521321764U))))) : (((unsigned int) arr_0 [i_0] [i_0 + 2])));
        arr_6 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_13)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) (-(521321789U)));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_19 *= ((/* implicit */signed char) arr_14 [i_1 + 1] [i_3] [i_3] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) arr_18 [i_3]);
                                arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [19LL] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 143493300)) > (521321764U)));
                                arr_21 [i_5] [(signed char)12] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (521321778U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 1])))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (3773645493U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = max((max(((+(var_7))), (((var_12) ^ (((/* implicit */long long int) var_8)))))), (16383LL));
}
