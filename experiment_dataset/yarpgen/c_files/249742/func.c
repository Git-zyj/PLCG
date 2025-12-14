/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249742
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
    var_19 = var_10;
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) (~(arr_8 [i_0] [i_2] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_0 - 2] [i_2 - 3] [i_0 - 2] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 4230076214U)) : (6274718465437531007ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_2 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_13 [i_4] [i_3] [(short)13] [i_1] [3]))))) : (6242025749865838412ULL)))));
                                arr_17 [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)0)), ((~(-1516328407)))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */int) (((~(((/* implicit */int) ((unsigned char) -1265901555))))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1265901538)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)6] [i_2] [i_0]))))) && (((/* implicit */_Bool) arr_4 [i_2])))))));
                }
            } 
        } 
    } 
}
