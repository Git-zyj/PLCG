/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229232
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
    var_10 = ((/* implicit */long long int) max((((1668178634) ^ (((/* implicit */int) ((unsigned char) (unsigned char)52))))), (max((((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_5)))), ((~(((/* implicit */int) var_0))))))));
    var_11 = ((/* implicit */unsigned int) (+(max((((4378680784104593730ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) 7798026876619595702LL);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) (signed char)-51);
                                var_14 ^= ((/* implicit */unsigned short) min((min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)8)), (arr_1 [1U])))), ((~(-1480549853))))), (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
}
