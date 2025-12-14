/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3483
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)36597);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (signed char)0);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((var_9) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (signed char)19)), (arr_3 [i_3]))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1]))) == (arr_3 [i_3]))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)21410)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            {
                arr_19 [i_5] [i_4] = ((/* implicit */unsigned char) arr_9 [i_4 - 1]);
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_3)), (1729382256910270464LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_10))))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_5])), (var_11)))));
            }
        } 
    } 
}
