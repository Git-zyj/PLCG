/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217837
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
    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (var_0))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) (short)-21765))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1282041730)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2423706920U)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 171003455)))))) == (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_3 [5U]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 = arr_10 [i_3 + 1] [(short)2] [i_2] [i_3] [i_1];
                            var_16 = ((/* implicit */int) ((unsigned int) ((arr_3 [i_0]) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_6 [i_3] [i_0] [i_3])))))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (max((((/* implicit */int) (short)-26442)), (1282041744))) : (-1))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) (~(max((var_6), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((long long int) min((var_1), (var_1)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (((long long int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((long long int) var_4)) : (max((var_3), (((/* implicit */long long int) var_0))))))));
}
