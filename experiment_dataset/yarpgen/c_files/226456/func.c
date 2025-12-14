/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226456
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) ((long long int) var_1));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (short)16355)) && ((_Bool)1))));
                var_11 *= ((/* implicit */short) ((((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6)))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_1) <= (var_1))))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((unsigned int) var_7)) << (((((((/* implicit */int) var_6)) ^ (((((/* implicit */int) (unsigned char)59)) >> (((((/* implicit */int) (short)21822)) - (21795))))))) - (237)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((((((var_4) + (9223372036854775807LL))) << (((var_5) - (3862880802U))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((var_0) - (2263383253U))))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)185)) ^ (((/* implicit */int) (short)16342)))));
                    var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_3))) || (((/* implicit */_Bool) var_0)))))) >= (((var_5) >> (((var_0) - (2263383257U))))));
                }
            } 
        } 
    } 
}
