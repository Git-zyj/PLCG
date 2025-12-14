/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199380
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (var_16))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (2147483647) : (((/* implicit */int) (signed char)-28))))), (((((/* implicit */_Bool) (unsigned char)237)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) var_1)) : (var_16))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0]))))))))) | (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47233))) <= (17554009046052969470ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) : (arr_1 [i_1 + 2])))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) var_12);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4863457791842420596ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) : (((long long int) 18446744073709551615ULL))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_11 [i_1] [i_3 - 1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (max((arr_2 [i_3] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3] [i_3 + 3] [i_3 - 1])))))));
                            var_19 *= ((/* implicit */_Bool) 2ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
