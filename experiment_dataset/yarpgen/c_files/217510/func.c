/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217510
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
    var_20 = ((/* implicit */unsigned int) min((((2937140860237792849ULL) == (((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) (unsigned short)34254)) - (34235)))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                var_21 ^= ((/* implicit */unsigned int) (unsigned short)31816);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 - 1])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31816)))))))) ? (max((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
            }
        } 
    } 
}
