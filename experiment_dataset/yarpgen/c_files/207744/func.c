/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207744
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) (unsigned char)98)) ? (((((/* implicit */_Bool) min(((unsigned char)158), ((unsigned char)97)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) : (((((/* implicit */unsigned long long int) (-2147483647 - 1))) * (15001320372666710539ULL))))) : (var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_5 [i_2 + 1] [i_0]), (arr_5 [i_2 - 1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3 - 1] [i_2 - 2] [i_0] = (-(((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_2 + 1] [i_3 - 3] [i_4]))));
                                var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_3 - 2]))))))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_0] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((18ULL) << ((~(18446744073709551615ULL)))))));
                                arr_15 [i_4] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3633114744U)) && (((/* implicit */_Bool) (unsigned char)103))))) : ((~(((/* implicit */int) (unsigned char)101)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
