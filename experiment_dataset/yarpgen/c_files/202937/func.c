/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202937
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
    var_18 = ((((/* implicit */_Bool) ((short) ((6324764899401496678ULL) + (((/* implicit */unsigned long long int) var_1)))))) ? ((((((-(var_13))) + (9223372036854775807LL))) >> ((-(((/* implicit */int) var_17)))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_11)))) >= ((~(((/* implicit */int) (signed char)60)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)45))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */int) (signed char)59)) * (((/* implicit */int) var_12)))) / (((/* implicit */int) ((unsigned char) var_10)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) ((max((((long long int) (signed char)60)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-60)) + (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_2]))))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255))))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)61702))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_2);
}
