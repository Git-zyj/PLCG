/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234911
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
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_9)))) >= (((((/* implicit */unsigned long long int) var_5)) * (var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((short) arr_2 [i_2 - 1]))), (var_2)));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))) ? (arr_0 [i_1]) : (max((((/* implicit */unsigned long long int) -6087387831883808800LL)), (arr_0 [i_1])))));
                }
            } 
        } 
    } 
}
