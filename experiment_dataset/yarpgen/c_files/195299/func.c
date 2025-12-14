/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195299
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_0] [1] [i_0] [8U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1460792576U)) ? (-1117426208) : ((-2147483647 - 1))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9115810858203831613LL)) ? (((/* implicit */long long int) (-(2549095339U)))) : (min((((/* implicit */long long int) (-2147483647 - 1))), (-2029303558646685384LL))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [10] [10] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) 2147483647)) / (-728348623981833488LL)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1162636615U)))) ? ((((-(var_4))) + (((/* implicit */long long int) ((int) var_3))))) : ((+((-(var_0)))))));
}
