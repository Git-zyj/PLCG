/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243462
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
    var_14 = ((/* implicit */unsigned long long int) ((((((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_4))))) && (((var_6) < (var_12))))) ? (min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_13)))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_12), (((/* implicit */long long int) var_4)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))) : (((((_Bool) var_8)) ? ((((_Bool)0) ? (var_2) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (var_2)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_12;
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_1])) * (((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_1]))))));
                                arr_16 [i_1] [i_1] [i_3] = ((-4944621786961183396LL) != (-180112715454007415LL));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) ((var_6) != (var_12)))), (((arr_9 [i_1] [(_Bool)1] [i_3] [i_3]) ? (var_1) : (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_1] [i_2 + 1]))));
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        arr_19 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((arr_14 [i_1] [22ULL]) / (arr_6 [i_1] [(_Bool)1] [i_1])))) ? (((arr_10 [i_1] [i_1] [i_1]) ? (var_2) : (var_1))) : (((/* implicit */unsigned long long int) -4539335833183220266LL))))));
    }
    var_19 = ((/* implicit */long long int) (((((!(var_10))) ? (min((var_8), (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >> (((var_1) - (10868084304417952815ULL)))));
    var_20 = ((/* implicit */long long int) var_1);
}
