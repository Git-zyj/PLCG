/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4952
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
    var_20 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_14)))));
    var_21 = ((/* implicit */long long int) (-(2121747759)));
    var_22 = ((/* implicit */int) ((unsigned short) min(((+(-2121747760))), (((/* implicit */int) (unsigned short)43331)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) 3027669677U))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3027669686U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)31467))))) < (max((4908407804553255342LL), (((/* implicit */long long int) var_19))))))), (((((/* implicit */_Bool) (unsigned short)43331)) ? (((/* implicit */long long int) -2121747760)) : (-4908407804553255321LL)))));
                                arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((-2121747773), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_14)) - (7342)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
