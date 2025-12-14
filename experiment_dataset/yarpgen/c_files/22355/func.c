/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22355
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_3] [i_2 + 1] = ((/* implicit */short) var_2);
                                var_15 = (~(var_4));
                                arr_19 [i_0] [i_2] [i_0] [(_Bool)1] = var_0;
                                arr_20 [i_4] [i_4] [i_1 + 2] [i_4] [i_0] [i_0] = ((/* implicit */short) var_12);
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_14))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
                        arr_25 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(var_0)));
                        var_18 = ((/* implicit */unsigned int) var_0);
                    }
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                    {
                        arr_28 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                        arr_29 [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-((-((-(((/* implicit */int) var_10)))))))))));
                    var_20 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
}
