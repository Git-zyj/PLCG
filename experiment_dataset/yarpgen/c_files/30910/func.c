/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30910
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
    var_10 ^= ((var_2) - ((+((+(var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((int) (((((-2147483647 - 1)) == (var_2))) ? ((~(var_8))) : (max((1982939202), (var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] = max((max((-1982939203), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), ((~(var_5))));
                                var_11 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = (+(((((/* implicit */_Bool) ((int) var_5))) ? ((+(var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1073741823))))))));
}
