/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22978
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) (-(min((var_0), (((/* implicit */unsigned long long int) arr_1 [8ULL]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (9154503550109778060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1954327433)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_1] [i_0])), (6492717334879473034ULL)))) ? ((-(536870911ULL))) : (((/* implicit */unsigned long long int) max((var_4), (var_5)))))))))));
                    arr_10 [i_0] [8ULL] [i_2 + 1] = ((/* implicit */int) 18446744073709551615ULL);
                }
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((2147483647) >> (((1876367765) - (1876367736))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (min((arr_14 [i_3] [i_3]), (arr_14 [i_3] [i_3])))));
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)64874)), (6823619784620088982ULL)));
            }
        } 
    } 
}
