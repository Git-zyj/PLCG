/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203238
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
    var_15 = ((/* implicit */long long int) var_10);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) & (((unsigned int) (short)-26996))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */int) ((min((arr_9 [11] [i_0 - 1] [11] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_0 - 1])))) < (((((/* implicit */int) var_3)) - (arr_9 [i_0] [i_0 - 1] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 2311449732166304710LL)) ? (-2311449732166304708LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747))))))));
                                var_19 |= ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_12))), (((/* implicit */long long int) ((-8889799745085690854LL) < (((/* implicit */long long int) ((var_7) / (var_8)))))))));
                                var_20 = ((/* implicit */unsigned int) var_3);
                                var_21 = ((/* implicit */int) max((((/* implicit */unsigned char) max((((signed char) (short)448)), (((/* implicit */signed char) ((4294967295U) < (arr_5 [i_1] [i_2]))))))), ((unsigned char)57)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)4)), (var_2))) == (-2311449732166304711LL)))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_23 = 3;
}
