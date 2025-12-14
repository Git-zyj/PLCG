/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26027
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28053)) ? (((/* implicit */int) (short)-28084)) : (((/* implicit */int) (short)-454))))), (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1] [i_2]) : (arr_2 [i_0] [i_1]))))));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (arr_4 [(unsigned short)2] [i_2] [i_2] [i_2]))))) % (arr_2 [i_0] [i_2])))) ? (((/* implicit */int) ((unsigned char) ((var_6) <= (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1 - 1] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) 4294967295U);
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (short)11287)))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_2] [(short)2] [i_2] [i_0])) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) arr_9 [i_4] [(signed char)14] [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16535))) * (9ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((((/* implicit */int) arr_3 [i_1 - 1] [i_1])) % (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((unsigned char) -1LL));
    var_17 -= ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned char) var_7))) % (((/* implicit */int) ((unsigned short) var_6)))))));
}
