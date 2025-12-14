/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37985
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_2 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) var_10)))))))) == (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10))))));
                                var_13 = ((/* implicit */_Bool) ((unsigned short) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 + 2] [i_4]) / (arr_13 [i_0] [i_1] [3LL] [i_1] [i_1] [i_1] [i_0]))));
                                var_14 |= arr_1 [i_2];
                                var_15 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_1])) / (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    arr_15 [6] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7704781702779086787ULL)))))));
                    var_16 = ((/* implicit */short) (signed char)(-127 - 1));
                    var_17 -= ((/* implicit */long long int) (((~(arr_12 [i_0] [i_1] [i_0 - 2] [i_0 - 1]))) >> ((((~(((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (4659554929452891860LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)101)) ? (16) : (((/* implicit */int) (_Bool)1))))) ^ (var_8)))) > (max((var_5), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
}
