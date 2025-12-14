/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42276
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(arr_4 [i_1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && ((_Bool)1)))))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)173)) <= ((-(((/* implicit */int) (unsigned char)0)))))))));
                    var_12 = ((/* implicit */unsigned short) ((signed char) 8568227));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((arr_5 [i_3] [i_4] [i_5]) / (((/* implicit */int) (unsigned char)173)))))) ? (((((long long int) arr_0 [i_3])) * (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (~((-(arr_16 [i_5 + 1] [i_4 - 2] [i_4 + 1] [i_3])))));
                }
            } 
        } 
    } 
}
