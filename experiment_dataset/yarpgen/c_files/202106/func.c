/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202106
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((70368744177663ULL) < (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2])))))) | (70368744177654ULL))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)90))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)64938)) == (((/* implicit */int) var_7))))) : (((/* implicit */int) ((unsigned short) var_3)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1])) | (((/* implicit */int) arr_2 [i_1 - 1] [i_2])))))));
                                var_15 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) 2087375663U)), (18446673704965373952ULL)))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned long long int) (signed char)-126);
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) 24876391)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned short)13584)))))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) var_1)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)13601))) >> (((((/* implicit */int) max((var_8), (var_13)))) - (11625)))))) : ((~((~(var_12)))))));
}
