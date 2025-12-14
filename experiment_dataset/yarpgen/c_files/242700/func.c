/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242700
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)18] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_3]))))) <= (((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_1 - 2] [i_4]))))))));
                                arr_10 [i_0] [i_1] [0ULL] [i_4] [0ULL] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [2LL])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2872))) > (4ULL)))) : (((/* implicit */int) arr_0 [i_1 + 1])))))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_1 - 2] [i_4 - 1] [i_4 - 1])), ((unsigned short)37583))))) <= (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_4 + 3])), (8ULL))))))));
                                var_13 ^= var_0;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4ULL)))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 1] [i_2] [i_1])), (4294967291U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2)))))))) : (((arr_5 [i_1 + 1] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1])) : (18446744073709551607ULL)))));
                                arr_16 [i_6] [i_2] [i_5] [i_6] = (-(((var_1) / ((+(var_0))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551601ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2] [i_5] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_14 [i_1] [i_5] [0])))))) : ((+(arr_13 [i_6] [i_5] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_2] [i_6] [i_6] [i_6 + 1] [i_6 + 1])) < (((/* implicit */int) var_2))))) : (((/* implicit */int) var_7)))))));
                                arr_17 [i_0] [4LL] [i_0] [i_6] [i_5] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) : (4ULL)));
                                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) 8ULL))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */int) var_5)) - (((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -6682094574445384763LL)) ? ((-(6682094574445384763LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))), (var_7))))));
    var_18 = ((/* implicit */unsigned char) var_3);
}
