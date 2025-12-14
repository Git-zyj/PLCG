/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193226
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
    var_20 &= ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) | ((~(var_12))))))));
    var_21 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_3 [i_0] [i_0] [8ULL]), (((/* implicit */unsigned short) var_6))))) < (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned short)18)), (arr_5 [i_0] [i_1])))));
                    arr_8 [i_0] [i_2] [i_0] [6ULL] = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */long long int) var_0);
    var_23 = ((/* implicit */unsigned short) (short)3);
}
