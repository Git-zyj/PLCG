/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243299
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1975181713) < (var_5))))) - (var_7))) >> (((((/* implicit */int) var_8)) + (19988))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 7870188330322674162LL)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) var_11)))));
                        arr_12 [i_0] [i_1] [7U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_9 [i_1] [i_2] [i_3] [i_3] [i_3]), (((/* implicit */short) arr_4 [i_0 + 1]))))) - (min((arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [2ULL] [i_2]), (arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])))));
                    }
                    for (long long int i_4 = 3; i_4 < 7; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (1513523875101700518LL)))) ? (((unsigned long long int) -1975181713)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))))));
                        arr_15 [i_0] [i_1] [(_Bool)1] [0ULL] [i_4] = ((/* implicit */int) ((_Bool) arr_7 [2LL] [i_1] [i_2] [4] [9U]));
                        var_16 = ((/* implicit */unsigned short) (_Bool)1);
                        var_17 = ((((/* implicit */_Bool) -1975181713)) ? ((((!((_Bool)1))) ? (max((-1975181707), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 3488272414U))))) : ((-(((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_12);
                        arr_18 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1]))));
                        var_19 = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_20 -= ((/* implicit */unsigned long long int) ((_Bool) -1718917906));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 3488272414U))));
}
