/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41320
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [16LL] [16LL] = ((/* implicit */unsigned short) ((int) var_1));
                    arr_11 [i_0] [4LL] [i_2 - 1] = ((/* implicit */signed char) (((~(((/* implicit */int) (short)645)))) ^ ((~((~(((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            {
                arr_19 [i_3] [i_4] [i_3] = min((((unsigned int) ((unsigned short) arr_17 [i_4] [i_3] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_7))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4 + 3] [i_4]))) > (7LL))))))));
                var_13 = ((/* implicit */unsigned int) arr_13 [i_4]);
                var_14 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_17 [i_4] [12LL] [i_3]), (arr_18 [i_4] [14LL] [i_3]))))));
            }
        } 
    } 
}
