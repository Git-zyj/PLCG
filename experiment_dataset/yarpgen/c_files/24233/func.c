/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24233
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
    var_10 = ((/* implicit */unsigned short) min((max((((((/* implicit */unsigned long long int) var_4)) & (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (var_9)))))), (11434979730931628518ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) 1348921461U)) : (11434979730931628518ULL)));
                    var_12 = ((/* implicit */unsigned short) var_0);
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (var_5)));
                }
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [(signed char)14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2])) ? (arr_3 [i_3 + 1] [i_0] [i_1 + 1]) : (arr_3 [i_3 - 1] [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))))) >> (((arr_0 [i_0] [i_3 - 1]) - (11663806018027740859ULL)))))) : (min((((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 2])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (signed char)0))))));
                    var_14 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) max((var_6), (var_1)))))));
                    arr_11 [i_0] [i_0] [i_3] [i_3 + 1] = ((/* implicit */short) arr_1 [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                                arr_17 [i_4] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))))) ? (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (2946045835U)))))) : (((/* implicit */int) max((arr_14 [i_0] [i_4 - 1] [(unsigned short)13] [i_5] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_6))))))))));
                                var_15 += ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [18LL] [i_1 - 1] [i_1] [i_1] [i_1])) >> (((/* implicit */int) var_7))))) + (max((((/* implicit */unsigned int) var_7)), (var_4)))))));
                            }
                        } 
                    } 
                }
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)46)) ? (0ULL) : (11434979730931628518ULL))) <= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_7 [i_1] [i_0] [i_0] [i_0])))))))) != (min((min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) 0LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_6);
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (7011764342777923098ULL) : (((((/* implicit */_Bool) min(((unsigned char)250), (((/* implicit */unsigned char) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) % (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) && (var_7)))))))));
}
