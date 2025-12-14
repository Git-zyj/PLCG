/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35611
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
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((/* implicit */unsigned long long int) ((var_4) == (var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_1]))))), ((-(((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_2] [i_3] [7ULL]), (var_9)))))))))));
                                var_21 *= max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_8))))))), ((~(arr_9 [(signed char)12] [i_1]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned short) var_3);
                    arr_17 [i_0] [8LL] [i_0] [i_0] = ((/* implicit */long long int) ((((arr_9 [i_0] [i_0]) - (var_0))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_15))))))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
    } 
}
