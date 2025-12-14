/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199781
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_11)))))) < (var_0)));
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431U)) ? (max((var_8), (((/* implicit */long long int) var_4)))) : (max((((/* implicit */long long int) -9)), (var_8)))))) ? (((/* implicit */unsigned int) var_1)) : (max((max((var_9), (var_11))), (((/* implicit */unsigned int) var_10)))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((arr_2 [i_1]), (((/* implicit */int) var_4)))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_17 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -668047845)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554437U)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((var_11), (((/* implicit */unsigned int) var_1)))) : (((unsigned int) var_1))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (max((((unsigned int) (!(((/* implicit */_Bool) (signed char)7))))), (arr_3 [i_0] [i_1])))));
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) == (668047836)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))) || (((/* implicit */_Bool) ((unsigned short) (signed char)-8))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (var_2))));
                                var_22 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_5]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)-6)) ? (2169384582U) : (4261412864U))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((int) min((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (var_7))))))))));
                    var_25 ^= max(((~(min((var_11), (((/* implicit */unsigned int) var_4)))))), (max((((/* implicit */unsigned int) (unsigned short)19)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_1] [i_0]))) * (arr_15 [i_0] [i_0] [i_1] [i_6]))))));
                }
            }
        } 
    } 
}
