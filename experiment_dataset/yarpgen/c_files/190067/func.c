/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190067
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << ((((~(((/* implicit */int) (unsigned char)244)))) + (255))))))));
                var_12 = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_6) - (3247742836U)))))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))) < (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((arr_8 [i_2] [i_3]), (((min((arr_6 [i_3]), (((/* implicit */unsigned int) var_9)))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)34)))))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > ((~(var_6))))))));
                var_15 &= ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) arr_10 [i_3])), (min((((/* implicit */unsigned int) (short)-24843)), (4294967295U)))))));
                var_16 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_3] [i_2 - 2])) << (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2]))))))))));
            }
        } 
    } 
}
