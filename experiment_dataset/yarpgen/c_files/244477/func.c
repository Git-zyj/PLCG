/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244477
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5182)) ? (((int) var_3)) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((arr_1 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */short) ((_Bool) arr_6 [i_0] [i_1]));
                                var_12 |= ((/* implicit */short) arr_11 [i_0] [i_1] [i_4] [i_3] [i_3 - 1] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] = ((/* implicit */long long int) (~(((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-6237))))));
                                var_13 = (+(arr_10 [i_3] [i_3] [i_3 - 2] [i_3] [8LL] [20LL]));
                                arr_15 [i_4] [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */long long int) -1295834773)) & (9223372036854775807LL))))))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_6))))));
                    var_15 -= ((/* implicit */short) (+(var_9)));
                }
            } 
        } 
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_5 [i_5]))))), (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
        var_16 = ((((((long long int) (short)-9559)) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_4)) ? (arr_11 [i_5] [i_5] [(short)14] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */short) var_7)))))))) - (2061513401U))));
        arr_20 [3ULL] = ((/* implicit */unsigned char) min((((unsigned long long int) (~(5270713096336534992ULL)))), ((+(arr_3 [i_5 - 1] [i_5 - 1])))));
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        var_17 = ((/* implicit */short) ((arr_21 [i_6] [i_6 + 4]) >= (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_1 [i_6])))))))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}
