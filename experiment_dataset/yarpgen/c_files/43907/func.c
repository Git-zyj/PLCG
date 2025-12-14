/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43907
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((12591654645176365345ULL), (((/* implicit */unsigned long long int) ((int) arr_5 [0]))))))));
                    var_12 = ((/* implicit */unsigned char) ((0ULL) >> (((-1) + (54)))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */int) var_6);
        var_15 = ((/* implicit */unsigned long long int) 1);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        var_16 -= ((/* implicit */int) ((-15) >= (-1)));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_8 [i_4] [i_4] [7] [i_4 + 1]))));
        arr_15 [(unsigned short)10] |= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
    }
    var_18 += ((/* implicit */_Bool) var_0);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((((/* implicit */_Bool) 13811289003362569447ULL)) ? (var_10) : (857632405)))))) ? (max((((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) var_5))))), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
