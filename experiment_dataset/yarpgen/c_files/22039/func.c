/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22039
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 4] [i_1 - 2] [(short)13]);
                    arr_10 [i_0] [i_0] [i_0] [0ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [18U] [i_1 - 2])) ? (18446744073709551615ULL) : (((unsigned long long int) min((9584945693664139820ULL), (18446744073709551615ULL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) var_0)))))) && (((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = min((max((((/* implicit */unsigned int) ((unsigned short) 1383519589U))), (arr_4 [i_3] [i_3]))), (((/* implicit */unsigned int) (_Bool)1)));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~((~((~(1ULL))))))))));
        arr_15 [i_3] &= ((/* implicit */short) arr_1 [i_3]);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))))) >= (((unsigned long long int) arr_1 [i_3]))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                arr_22 [i_5] [i_4] [i_5] = max((1ULL), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_12 [i_5])), (127676851))), (((/* implicit */int) (unsigned short)65535))))));
                arr_23 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
}
