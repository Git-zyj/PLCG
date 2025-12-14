/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19290
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
    var_15 = max((var_9), ((~(var_5))));
    var_16 = ((unsigned int) ((unsigned int) min((3145728U), (4294967295U))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = min((min(((~(arr_1 [i_0] [i_0 - 1]))), ((+(arr_0 [i_0]))))), (4294967295U));
        var_17 = arr_1 [14U] [14U];
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_18 ^= (-((~(min((var_7), (arr_5 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1]))))))));
    }
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) max((arr_1 [i_2 + 1] [i_2]), (arr_1 [i_2 + 1] [i_2])))) ? (var_3) : (((unsigned int) (!(((/* implicit */_Bool) 1U)))))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) max((3U), (1687279552U)))) ? (var_11) : (3464211939U))) : (min((max((895138366U), (83196596U))), (var_14)))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) (-(min((arr_1 [i_2] [i_2]), (arr_7 [i_2] [i_2])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (var_3)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_22 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3] = min((var_8), (min((min((arr_7 [i_3] [i_4]), (arr_21 [i_4] [i_4] [i_4] [i_4] [i_6]))), (arr_8 [i_3] [i_4 - 1]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
                            {
                                var_22 = max((((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4 + 1])) ? (arr_25 [i_4] [i_4 + 1] [i_4 + 1]) : (arr_25 [i_4] [7U] [i_5]))), ((+(arr_26 [i_3] [i_3] [i_3] [3U] [i_3] [i_3] [i_3]))));
                                var_23 &= arr_20 [i_3];
                                arr_27 [i_4] = ((unsigned int) (+(83196580U)));
                            }
                        }
                    } 
                } 
                var_24 = (+(((unsigned int) ((unsigned int) 0U))));
            }
        } 
    } 
}
