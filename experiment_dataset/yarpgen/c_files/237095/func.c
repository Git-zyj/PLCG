/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237095
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
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) == (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (-2076274963049324549LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)128)) % (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) - (arr_1 [i_1]))), (min((((/* implicit */long long int) (unsigned char)84)), (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [2U] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_3] [i_2]) : (((/* implicit */int) arr_3 [i_2])))))))) : (((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_4])) ? (262973322U) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (var_10) : (1946979209U)))))));
                                var_18 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(683202977U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (3946834510857977087LL))) == (arr_1 [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) ((long long int) min((758164094U), (1946979209U))));
                                arr_26 [i_7] [i_6] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_2] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
