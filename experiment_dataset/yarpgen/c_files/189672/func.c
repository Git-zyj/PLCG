/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189672
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [10U] = ((/* implicit */unsigned int) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7080974963075896425ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 += ((/* implicit */int) var_14);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_0))));
                    var_22 += ((((/* implicit */int) var_10)) >> (((var_2) + (76570273))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_16 [i_1] [12U] [i_3] [7U] = ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2] [i_4] [i_3]))) ? (13182848222575869225ULL) : (arr_4 [i_1] [i_1]));
                        arr_17 [i_1] [i_2] [i_3] [i_4] [7ULL] = ((((/* implicit */unsigned long long int) ((unsigned int) 18305692320129691264ULL))) / (((((/* implicit */_Bool) ((int) (short)1081))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1]) % (var_9)))) : ((-(7271655815749443430ULL))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_5]);
                        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((short) var_5))) ? (7904659152749687452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_26 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [12U] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [4ULL] [11ULL] [3] [i_6] [i_1]))))) : (((unsigned int) 2996421682123123981ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */int) var_10);
                                var_25 = ((/* implicit */short) ((max((10818485054676325068ULL), (17505664476793121821ULL))) + ((-(((unsigned long long int) var_15))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_19))));
                    var_27 = (-(arr_21 [i_1] [i_6] [i_7]));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) var_3);
}
