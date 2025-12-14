/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49614
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [5] [i_1] = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned short) var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_4] [i_4] [i_4] [i_0 + 3] [(unsigned short)4] = ((/* implicit */_Bool) var_0);
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >> (((var_8) + (6009011959287025190LL))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 ^= ((/* implicit */int) ((short) var_0));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((((/* implicit */int) ((_Bool) ((unsigned long long int) var_11)))) & (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_0))) < (((int) var_9))))));
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) var_12);
                    var_19 = ((((/* implicit */_Bool) 11526053687874281437ULL)) ? (((/* implicit */int) var_7)) : (((int) 362415469)));
                }
            } 
        } 
    } 
}
