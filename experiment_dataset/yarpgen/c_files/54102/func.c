/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54102
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)5))))), (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3999239169U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3999239169U)))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (unsigned short)30946))))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (arr_11 [(_Bool)1] [i_1] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */_Bool) 18446744073709551615ULL);
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (!(var_7)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_5] [i_7] [11ULL] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25ULL)) ? (16777215U) : (max((arr_15 [i_5] [i_7] [(_Bool)1] [i_6] [i_6] [i_7]), (4278190080U)))))), (((((/* implicit */_Bool) 295728127U)) ? (((/* implicit */unsigned long long int) 924585677U)) : ((-(arr_20 [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_30 [i_5] [i_5] [i_8] [i_8] [i_8] [i_8] [i_7] = ((295728118U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
