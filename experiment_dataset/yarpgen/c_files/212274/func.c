/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212274
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
    var_14 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)9)), ((unsigned short)55673))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = (unsigned char)246;
                var_15 = ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1] [i_1 - 2] [i_1]))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 3] [i_1])) ? (arr_3 [i_1] [i_1 - 3] [i_1]) : (((/* implicit */int) var_12)))) : (arr_3 [i_1] [i_1 + 1] [i_1]));
                var_16 ^= max((((/* implicit */long long int) (~(((((/* implicit */int) (signed char)5)) ^ (((/* implicit */int) var_0))))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) + (var_6)))), (max((((/* implicit */long long int) var_9)), (9LL))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)4))))) ^ (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned char)24))))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_6 [i_0] [i_1 - 3] [i_0] [i_2]))));
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_1] [i_1])), (((var_11) / (((/* implicit */int) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_1] [i_1 - 3] [i_1 + 3] [2ULL])))) ? (((/* implicit */int) min(((short)27872), (((/* implicit */short) var_10))))) : (((/* implicit */int) min((var_9), (arr_9 [i_1 + 2] [10U] [(short)10] [i_0] [i_0]))))))));
            }
        } 
    } 
}
