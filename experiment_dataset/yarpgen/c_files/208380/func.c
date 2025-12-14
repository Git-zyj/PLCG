/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208380
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
    var_12 &= var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (((~(max((((/* implicit */unsigned long long int) arr_2 [3ULL] [i_0])), (767946615464936041ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) + (268435455U))))));
                var_14 = min((((((/* implicit */_Bool) arr_3 [(short)6] [i_0 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0])))), (((((((/* implicit */int) var_4)) != (500680923))) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_0])) : (min((((/* implicit */int) arr_4 [9U] [2] [(_Bool)1])), (arr_0 [(short)7]))))));
                var_15 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) 4026531840U))))))));
                            arr_11 [9LL] [(short)8] [(_Bool)0] [9ULL] [0ULL] [i_0] = ((/* implicit */unsigned long long int) (((~((((_Bool)1) ? (((/* implicit */int) (short)-23709)) : (-813605303))))) % (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
