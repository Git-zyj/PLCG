/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46091
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (var_5) : (var_5))))))) ? (var_8) : (4294967295U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_3 [i_0 - 1])))))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) ^ (max(((~(5ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 + 2])))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 763087535U)), (5ULL)));
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_0 [(_Bool)1]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (4294967295U)))))));
                    var_20 = ((/* implicit */int) (((+(18446744073709551612ULL))) * (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1ULL] [9U]))) * (var_0))), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_2])))))))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_13 [(unsigned short)3] [(unsigned short)7] [(unsigned short)3] = ((/* implicit */unsigned short) var_6);
                    var_21 = ((/* implicit */unsigned int) min(((short)-19455), (((/* implicit */short) (unsigned char)148))));
                }
                arr_14 [(_Bool)1] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_22 = max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-17)) ? (var_11) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) var_13)));
}
