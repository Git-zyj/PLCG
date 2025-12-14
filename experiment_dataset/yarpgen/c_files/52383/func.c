/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52383
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0 + 1] = var_3;
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] = 3367862992U;
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 520093696U)))))) >= (((((/* implicit */_Bool) min((3345163462U), (4294967295U)))) ? (1419241735U) : (14U)))));
                            var_16 = max((520093696U), (arr_1 [i_0]));
                            var_17 = ((unsigned int) arr_3 [4U] [i_0 + 1] [i_0 + 1]);
                            var_18 = arr_3 [i_0 - 1] [i_1 + 3] [i_1 + 3];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_19 = (~((~(var_0))));
                            var_20 ^= ((((/* implicit */_Bool) 1635803940U)) ? (arr_21 [i_8] [i_6 - 1] [i_6 - 1]) : (((3395427564U) / (arr_29 [i_4] [i_5] [i_6] [i_6] [i_5] [i_7]))));
                        }
                        arr_31 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5] [i_7] [i_6 - 2])) || (((/* implicit */_Bool) arr_18 [i_5] [i_4] [i_6 + 2]))));
                        arr_32 [1U] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((3774873580U) < (arr_15 [i_5]))))));
                        arr_33 [7U] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3345163460U)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((arr_15 [i_6 - 2]) < (arr_15 [i_5]))))));
                    }
                } 
            } 
        } 
        var_22 = arr_26 [i_4];
    }
}
