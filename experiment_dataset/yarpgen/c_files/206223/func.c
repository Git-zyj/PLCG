/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206223
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) var_7);
                                arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 - 2])) || (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_8)))))))) | (((/* implicit */int) (signed char)-119))));
                            }
                        } 
                    } 
                } 
                var_12 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) var_0)));
                var_13 = ((/* implicit */unsigned short) ((min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0U]))) > (var_10)))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_2);
}
