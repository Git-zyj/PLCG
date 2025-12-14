/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230402
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
    var_16 = max((var_8), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))))));
    var_17 = ((/* implicit */unsigned long long int) 3766959496101733331LL);
    var_18 = ((/* implicit */long long int) (short)31);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((max((arr_8 [6ULL]), (((/* implicit */unsigned long long int) -1868709625)))) >= (((/* implicit */unsigned long long int) (-(var_6))))))), (562949953421311LL)));
                    arr_10 [0LL] [i_1] = ((/* implicit */int) min((max((var_13), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_5 [i_2]))));
                }
            } 
        } 
    } 
}
