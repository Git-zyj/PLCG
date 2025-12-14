/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214706
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
    var_12 = ((/* implicit */unsigned long long int) (unsigned short)3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) arr_1 [i_0]);
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (short)19806))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65532)));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((unsigned int) 68933965U)), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-12)) * (((/* implicit */int) var_7)))))))) + (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_6)))), (max((var_9), (((/* implicit */unsigned long long int) (unsigned short)22235))))))));
}
