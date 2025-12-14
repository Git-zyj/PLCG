/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5006
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)27029))));
    var_13 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_0 [i_1]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)116)) && (((/* implicit */_Bool) (signed char)4))))), (((unsigned int) arr_6 [i_1] [i_1] [i_0 + 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_18 [i_5 - 2] [i_4] [8LL] [i_5] = ((((/* implicit */_Bool) (((~(arr_15 [i_4]))) & (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((arr_17 [(unsigned short)15] [i_3] [i_4 + 2] [i_5]) - (10503930845196208186ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_4] [i_4] [i_4 - 1] [i_5 - 1]))));
                    arr_19 [i_3] = var_5;
                    arr_20 [i_3] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)5))));
                }
            } 
        } 
    } 
}
