/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19419
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
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)80)));
    var_15 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) var_1)) - (var_7))))) - (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)110)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) 2147483647)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-10345)))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-10354), (((/* implicit */short) (signed char)-80)))))) - (((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                }
                var_16 = ((/* implicit */int) ((unsigned char) ((unsigned short) (unsigned char)98)));
                var_17 += ((/* implicit */_Bool) (unsigned short)65522);
                var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned short) (unsigned char)133)))))));
            }
        } 
    } 
    var_19 += (~(((/* implicit */int) (short)10348)));
}
