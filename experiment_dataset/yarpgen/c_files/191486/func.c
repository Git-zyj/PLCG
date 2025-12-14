/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191486
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
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) ((unsigned int) arr_0 [i_1]));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) max(((unsigned short)6480), (((/* implicit */unsigned short) (short)-15199))));
                    var_12 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))) - (4611686018427387904ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27324))) - (35184372088831ULL)));
}
