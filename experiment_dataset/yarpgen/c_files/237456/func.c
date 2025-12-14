/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237456
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_0] [5ULL] [i_1 - 2])) ? (((/* implicit */int) arr_4 [6U] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [12ULL] [i_1 - 2]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [12U] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)36435);
                            arr_14 [i_0] [i_1 + 1] [i_2 + 1] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2 + 1])))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [(short)4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */int) ((_Bool) 4294967277U))) : (((/* implicit */int) arr_0 [i_1 - 1])))), ((-(((/* implicit */int) (signed char)-111))))));
                arr_16 [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_0)));
}
