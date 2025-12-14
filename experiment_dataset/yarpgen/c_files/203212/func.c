/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203212
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
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)18415))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_18)));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -3835024117755273497LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) max((arr_5 [i_1] [i_1]), ((short)-7031)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = (short)12637;
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2])) + ((-(((/* implicit */int) var_3))))));
                    var_25 = ((((/* implicit */int) ((_Bool) arr_5 [(_Bool)1] [i_3]))) <= (((/* implicit */int) ((short) arr_2 [i_2] [i_2]))));
                    var_26 = ((/* implicit */short) (+(((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2 + 2])))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)30721))) ? (((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_3])) : (((/* implicit */int) var_2))));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_14 [21U] = ((/* implicit */short) arr_8 [i_4] [i_4] [i_4]);
        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_4] [i_4]))))));
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)1))))));
}
