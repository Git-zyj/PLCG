/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51705
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) + (arr_2 [i_0] [i_0])))));
                    var_17 = ((/* implicit */unsigned char) (((~(2005183228U))) << (((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)21)))))));
                    var_18 += ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_12 [i_4] [i_4] = ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_4])) || (((/* implicit */_Bool) ((signed char) arr_6 [i_4] [i_3]))));
                arr_13 [i_4] = ((/* implicit */long long int) arr_10 [i_4]);
                arr_14 [i_3] |= ((/* implicit */_Bool) 9223372036854775807LL);
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) min((var_9), (((/* implicit */short) var_15))));
}
