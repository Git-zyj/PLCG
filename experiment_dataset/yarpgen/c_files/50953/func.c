/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50953
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((1643914230U) | (6311918U)))) <= (((long long int) ((unsigned int) var_7)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) ((long long int) 106531155U)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) > (((long long int) var_15))))));
                    var_20 = ((/* implicit */long long int) ((unsigned int) 1384916972U));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */long long int) var_0))))) && (((var_15) <= (var_4)))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_6] [4LL] [i_7] [i_4] [i_6] = (~(4294967289U));
                                arr_24 [i_4] [i_6] [i_4] [i_4] [i_4] [i_4] [i_4] = var_9;
                                var_22 = ((/* implicit */unsigned int) ((long long int) ((long long int) var_0)));
                            }
                        } 
                    } 
                    arr_25 [i_3] [12LL] [i_5] = var_13;
                    var_23 = ((unsigned int) (~(var_1)));
                    arr_26 [i_5] [i_4] [i_5] [0LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) > (var_12))))) <= (((var_18) + (var_2)))));
                }
            } 
        } 
        arr_27 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_7) << (((var_3) - (962937903U))))))));
        var_24 = ((/* implicit */long long int) (((-(var_9))) - ((-(var_5)))));
    }
    var_25 = ((/* implicit */long long int) ((unsigned int) (-(1384916972U))));
}
