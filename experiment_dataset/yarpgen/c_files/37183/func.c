/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37183
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
    var_12 = ((/* implicit */unsigned long long int) -70855854);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 98654817U)) || (((/* implicit */_Bool) ((signed char) var_10)))));
    var_14 = ((unsigned char) ((min((var_5), (((/* implicit */unsigned int) var_1)))) ^ (21U)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((int) 1745619123)));
                    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)72)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [6U]))))))) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) var_7);
                                var_16 = (+(((/* implicit */int) arr_2 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
