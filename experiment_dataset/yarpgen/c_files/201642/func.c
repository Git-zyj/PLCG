/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201642
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
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((-8199770808580100916LL) | (((/* implicit */long long int) (((~(arr_2 [i_1 + 2]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)23778), ((unsigned short)23778)))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) <= (arr_2 [i_0 + 1]))))) / ((~(arr_2 [i_0 - 3]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_13))))));
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36706))) / ((-(var_9)))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) var_0)) / ((~(-1852454812574547601LL))))))));
    var_23 = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)1))))));
}
