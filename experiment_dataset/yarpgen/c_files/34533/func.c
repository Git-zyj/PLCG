/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34533
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
    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) | (((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [(unsigned char)14] [i_3] = ((/* implicit */long long int) var_10);
                        arr_14 [i_2] [i_0] [i_2] [i_0] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 17592186044415LL)) - (((((/* implicit */_Bool) var_2)) ? (17799041091041529103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] [14LL] = ((/* implicit */unsigned short) (!((((-(arr_9 [i_1] [(unsigned char)2]))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_5)))))))));
                }
            } 
        } 
    } 
}
