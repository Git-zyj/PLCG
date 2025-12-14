/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211061
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (-(((((/* implicit */int) max(((unsigned short)9918), ((unsigned short)55598)))) >> ((((-(((/* implicit */int) (unsigned short)46654)))) + (46683)))))));
                    var_11 -= ((unsigned short) max((((unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_0])), ((short)-29045))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_4] [i_4] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3] [i_3]))))), (((unsigned int) arr_5 [i_3] [i_4]))));
                arr_15 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((arr_9 [i_4]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)9928)) - (9928))))) << (((arr_1 [i_3 - 1] [i_3 + 1]) - (1542851724U))))))));
            }
        } 
    } 
}
