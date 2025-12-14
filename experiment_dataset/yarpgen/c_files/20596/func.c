/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20596
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [5LL] [i_1] [i_2] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4408336994300777210LL))))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) 321546004U)) & (((arr_11 [i_0] [i_0] [i_3] [i_3] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */int) (signed char)102)) >> (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (short)-2216))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_4] [i_0])) >= (((/* implicit */int) arr_3 [i_3] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_0)));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */int) (((+(((/* implicit */int) arr_5 [i_0] [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 67107840)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) var_0);
        arr_19 [i_5] = ((((/* implicit */int) ((unsigned short) -812490836))) >= (((((/* implicit */int) var_12)) + (((/* implicit */int) (short)32767)))));
    }
    var_17 = (!((((+(var_3))) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */int) var_14);
}
