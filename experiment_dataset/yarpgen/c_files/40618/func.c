/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40618
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)1958)) ^ (((/* implicit */int) var_11)))))))) % (((((/* implicit */_Bool) -4095302034449723714LL)) ? (((/* implicit */long long int) ((var_2) * (var_4)))) : (-4095302034449723738LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_11 [(unsigned short)7] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) var_5);
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) arr_0 [i_2 + 1] [i_1 + 1]);
                                arr_13 [i_4] [i_4] [i_2] [i_2] [i_4 + 1] = arr_0 [i_3] [i_1];
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_8 [i_1 - 2] [5U] [5U] [5U]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10049))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)6383))))) : ((+(min((-2120986109255339767LL), (((/* implicit */long long int) var_14))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(min((var_4), (((/* implicit */unsigned int) var_3))))));
    var_19 &= ((/* implicit */short) var_15);
}
