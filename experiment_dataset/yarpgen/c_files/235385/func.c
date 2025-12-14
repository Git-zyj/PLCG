/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235385
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned int) -1453186987))))) ? (((/* implicit */int) ((_Bool) (signed char)-67))) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)58006);
                    var_11 -= ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((1275715703413775562ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((8366270191590908030ULL) * (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) -7054460065246402242LL)) != (0ULL))));
                                var_13 = (!(((/* implicit */_Bool) min((arr_14 [i_4] [i_3] [i_2] [i_1] [3ULL]), (((-4289055583524185449LL) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3])))))))));
                                arr_15 [i_1] [i_3] [(unsigned char)2] [i_1] [i_1] = ((/* implicit */long long int) min((755543466), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)28762)), (-6418091633867829531LL)))) ? (((((arr_17 [i_2] [i_5] [i_2] [i_2]) | (arr_10 [(short)18] [i_1] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (arr_22 [i_0] [20LL] [i_2] [i_5] [i_6 - 1] [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (7482353240382752118ULL))))));
                                var_16 |= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_19 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])), (max((((/* implicit */unsigned long long int) var_4)), (var_5))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) -1855066099)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
