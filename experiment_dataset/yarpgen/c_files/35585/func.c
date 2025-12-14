/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35585
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
    var_20 = ((/* implicit */_Bool) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (6745202334314076ULL)))))))));
    var_21 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)29832)))) + (2147483647))) << (((((((/* implicit */int) min((var_17), (max((var_16), (((/* implicit */signed char) (_Bool)0))))))) + (106))) - (9)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0 - 3])) % (18439998871375237535ULL))))) - (1204246590582875152ULL)));
                    var_22 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) << (((var_13) - (6552836460671376290ULL))))) & (((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_23 ^= ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)28672))))))) ^ (((((((/* implicit */int) (short)29346)) ^ (((/* implicit */int) (short)-1319)))) / (((((/* implicit */int) (short)-28694)) & (((/* implicit */int) (unsigned char)67)))))));
    var_24 = ((/* implicit */unsigned long long int) var_18);
}
