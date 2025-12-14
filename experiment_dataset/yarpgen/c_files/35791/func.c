/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35791
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1151532095) : (((/* implicit */int) var_9))))) : (((((/* implicit */long long int) 0U)) / (var_1)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_2))))) : (max((min((0U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_7))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (unsigned short)48633))));
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)30))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1]);
                arr_4 [i_1 + 2] [i_1] [2ULL] = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_5)), (arr_1 [i_0 - 1])))) == (((((/* implicit */int) arr_1 [i_0 + 2])) ^ (((/* implicit */int) var_8))))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1055531162664960ULL))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32767)) & (133693440)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (arr_6 [i_3 + 1]) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (signed char)87))))) : (min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_5)) : (536870911))), (((/* implicit */int) max(((unsigned short)504), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))))));
                                arr_19 [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)0);
                                var_20 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((~(min((((/* implicit */unsigned int) var_12)), (arr_15 [i_3 + 2]))))) | (4294967295U))))));
            }
        } 
    } 
}
