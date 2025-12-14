/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29715
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
    var_16 = ((/* implicit */signed char) (+((-(min((var_15), (((/* implicit */long long int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) arr_2 [i_4] [i_1] [i_0]);
                                var_18 = ((/* implicit */unsigned int) 16383ULL);
                                arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) - (arr_1 [i_0]))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [14LL]))))), (min((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])))))))));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((arr_3 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [15LL] [i_0])), (arr_5 [7ULL] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((var_10) && (((/* implicit */_Bool) 16383ULL)))) || (((((/* implicit */_Bool) 18446744073709535233ULL)) || (((/* implicit */_Bool) (unsigned short)65514))))))), (max((var_1), (((/* implicit */long long int) var_4)))))))));
}
