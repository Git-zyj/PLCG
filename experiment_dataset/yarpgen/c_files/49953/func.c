/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49953
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3871910175708962752LL)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) == (-3871910175708962752LL)))) : (((/* implicit */int) max((var_17), (var_6)))))))));
                arr_7 [i_0] = ((/* implicit */long long int) (~(-1976790879)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_17 [(short)10] [i_1] [i_3 - 1] [i_3] [i_4] [17LL] [23U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) 1ULL))) ? (((/* implicit */unsigned long long int) (-(var_18)))) : (var_16))) ^ (((/* implicit */unsigned long long int) (-(arr_0 [i_2 - 1] [i_2 - 1]))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_11 [i_0] [i_2 - 1] [i_3 + 2] [i_3] [(unsigned short)24]) ^ (arr_11 [i_0] [i_2 + 1] [i_3 + 2] [i_1] [i_4]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                arr_19 [i_0] [3U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                                arr_20 [0] [i_1] [(unsigned short)21] [i_3] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-3871910175708962752LL), (((/* implicit */long long int) 1822733020U))))) ? (var_8) : (-1976790879)));
                                var_20 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_9 [i_4] [i_3] [i_1]) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51536))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_8)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 8210420955187760962LL);
}
