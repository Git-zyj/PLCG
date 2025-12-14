/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221998
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
    var_13 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1]))) ^ (((min((((/* implicit */long long int) arr_0 [i_2])), (arr_6 [i_0] [i_1 + 1] [i_1]))) << (((((/* implicit */int) min(((signed char)-109), (((/* implicit */signed char) (_Bool)1))))) + (132)))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 18ULL))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */_Bool) 18446744073709551598ULL);
}
