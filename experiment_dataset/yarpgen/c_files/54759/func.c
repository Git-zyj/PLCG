/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54759
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)1)) << (((((/* implicit */int) (unsigned short)24205)) - (24198)))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_2))))) : (((var_7) - (((/* implicit */unsigned long long int) -150952512)))))) << (((/* implicit */int) ((unsigned short) ((var_3) && (((/* implicit */_Bool) -150952512))))))));
                arr_5 [i_1] [i_0] [i_0] = ((((-150952527) + (-150952509))) <= (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_14))))))) ? (min((max((((/* implicit */long long int) (_Bool)1)), (36028797018963967LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41319)) / (((/* implicit */int) (unsigned short)45745))))))) : (max(((-(-36028797018963965LL))), (((/* implicit */long long int) -150952511)))))))));
}
