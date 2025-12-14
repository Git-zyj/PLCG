/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236899
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
    var_19 |= ((((((((/* implicit */_Bool) (unsigned short)511)) || (((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) var_14)))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_2] [i_1])) << (((var_8) - (621311354)))))));
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)22))))), (((unsigned long long int) arr_3 [i_2] [i_2 - 1]))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_2])) - (var_18))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_14 [i_3]));
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) arr_11 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) var_14)))))) : (((unsigned int) arr_11 [i_3]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_15);
}
