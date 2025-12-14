/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240883
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_1)) ? (13438986903326450796ULL) : (((/* implicit */unsigned long long int) 9223372036854775793LL))))));
                var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) (unsigned char)194))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)3306)))), (((/* implicit */int) ((short) (unsigned short)3282)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_2))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17218663972635416223ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) var_2))));
                arr_7 [i_0] [i_0] [i_1] = (unsigned short)62229;
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) var_0);
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
    var_15 &= ((/* implicit */short) (!(((/* implicit */_Bool) 1473932270U))));
}
