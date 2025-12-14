/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231551
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned long long int) (~(1223602074)));
                var_18 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1223602071)) ? (1982910336) : (((/* implicit */int) (unsigned char)38))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(1223602071))))))) : (((/* implicit */int) var_3))));
                var_20 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (unsigned char)218)), (arr_9 [i_3]))), (((/* implicit */long long int) max((arr_1 [i_3] [0U]), (arr_1 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_2])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))))), (var_8)));
                            arr_19 [i_4] [i_4] [(signed char)4] [8] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) var_11)), (var_8)));
                        }
                    } 
                } 
            }
        } 
    } 
}
