/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50865
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
    var_17 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0]), (((/* implicit */unsigned short) arr_1 [i_1 + 2])))))) : (((arr_0 [i_0]) >> (((var_2) + (45835676597526179LL)))))))) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                arr_8 [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) / (var_5))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = max((var_9), (((/* implicit */long long int) (-(arr_15 [i_1] [i_1 + 2] [i_1] [i_4] [i_4])))));
                                arr_17 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) arr_1 [i_0])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)1])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_4]))))))))) : (arr_4 [11LL])));
                                arr_18 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [(short)3] [i_3] [(short)9] = ((/* implicit */unsigned long long int) (((~(arr_15 [5ULL] [i_0] [i_1 + 1] [2ULL] [i_2]))) % (((/* implicit */unsigned int) ((arr_12 [i_0] [i_1] [i_3] [i_3] [i_1 + 2] [i_3]) % (((/* implicit */int) min((((/* implicit */unsigned short) (short)-30085)), ((unsigned short)65535)))))))));
                                var_20 = ((/* implicit */unsigned int) var_14);
                                arr_19 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -499891364)) && (((/* implicit */_Bool) arr_1 [i_1 + 1])))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */long long int) (short)-4271);
            }
        } 
    } 
}
