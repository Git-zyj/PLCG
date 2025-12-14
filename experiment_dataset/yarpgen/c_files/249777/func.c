/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249777
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (10) : (((/* implicit */int) (unsigned short)13126)))) >= (((/* implicit */int) (_Bool)1)))))) : (((arr_2 [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 2] [i_0 - 2]))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [13] [i_0 - 2] [i_4] [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)65520))))));
                                var_13 += ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (arr_5 [i_0 - 2] [i_1] [i_4] [i_3]))))))) ^ ((-(((/* implicit */int) (signed char)-31)))));
                                arr_14 [i_4] = ((/* implicit */unsigned short) arr_11 [i_4]);
                            }
                        } 
                    } 
                } 
                var_14 = ((((int) arr_6 [i_0] [i_0] [i_0 + 1])) >= (min((((/* implicit */int) (signed char)58)), (var_8))));
            }
        } 
    } 
}
