/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238279
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
    var_12 = ((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned char) var_6)), ((unsigned char)10)))))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-76)) % (((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */signed char) ((((((11446424462577562945ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned long long int) arr_6 [(short)2] [(short)2] [(short)2] [(short)2])))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_6 [i_0] [i_0] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */signed char) ((2305843009211596800ULL) <= (((/* implicit */unsigned long long int) 1250912794U))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */signed char) ((long long int) var_9));
}
