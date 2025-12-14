/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190337
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_15 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) * (0U))));
                arr_9 [i_0] = var_11;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) % (var_5)))) <= (9223372036854775807LL)));
                    arr_20 [i_3] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 4611686018427387903LL)), (5571307657654846243ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30091)))));
                    arr_21 [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) <= (134217664ULL)));
                }
            } 
        } 
    } 
}
