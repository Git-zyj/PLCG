/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226505
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)221)))) : (max((var_4), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) (short)32767)))))) <= (max((((/* implicit */unsigned long long int) (signed char)96)), (var_4)))))))))));
    var_13 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) (-(var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)3664))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_2] [i_1] [i_0] = (-(3231630593U));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_2 [i_1] [i_4])) : (((/* implicit */int) (unsigned short)15872)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)96)))))))));
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((9222535869667203746ULL) < (((/* implicit */unsigned long long int) 3231630593U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (max((var_10), (var_2))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))), ((+(((((/* implicit */_Bool) (unsigned short)61871)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))))));
}
