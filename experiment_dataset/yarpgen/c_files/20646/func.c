/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20646
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_2)));
        var_21 += ((/* implicit */signed char) 16021717589863340195ULL);
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_6 [10ULL] [i_1] &= ((/* implicit */_Bool) arr_4 [i_1]);
        var_22 = ((/* implicit */_Bool) ((short) 16021717589863340195ULL));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_15 [i_4 - 1] [i_2] [i_4] [i_3] = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_23 = (~(((unsigned long long int) ((_Bool) var_0))));
                                arr_21 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) + (((/* implicit */int) arr_13 [i_3] [i_6 + 1] [i_6 - 1]))));
                                arr_22 [i_6] [i_6] [i_5] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4 - 1] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_18)))) : ((~(var_3)))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] = ((/* implicit */signed char) (~(var_18)));
                    arr_24 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_3] [(signed char)19] [i_3] [i_2])) ? ((((-(arr_8 [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))))) : (arr_14 [i_3] [i_3])));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [(short)2] [i_2]));
    }
    var_25 = 2425026483846211434ULL;
}
