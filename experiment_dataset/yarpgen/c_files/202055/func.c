/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202055
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)128))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1])))));
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_23 [i_2] = ((/* implicit */_Bool) arr_11 [i_2]);
                                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20718))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20718)))));
                                arr_24 [i_2] [i_3] [i_6] [i_5] [i_6] [i_2] = ((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_3]);
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */_Bool) 18446744073709551608ULL);
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -9223372036854775790LL))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)20))));
    var_16 = ((unsigned short) var_3);
}
