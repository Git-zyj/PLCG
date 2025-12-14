/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207547
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
    var_19 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [(unsigned char)12] [(unsigned char)12]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9328))) > (0U))))));
                        arr_14 [9U] [9U] [i_2] [i_3] [(short)17] = ((/* implicit */_Bool) 131008LL);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 14786836201005273981ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30265))) : (2622823252U)))), (6825779987208625661LL)));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20435))) & (((((/* implicit */_Bool) (signed char)40)) ? (2715190175U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_4])))))));
        var_21 &= ((/* implicit */short) ((_Bool) 619050580214461744ULL));
    }
    for (short i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) (((((+(arr_0 [i_5] [i_5]))) > (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [20U] [i_5]), (((/* implicit */short) (_Bool)0)))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (short)-11890)) : (((/* implicit */int) (unsigned char)147))))))) : (var_1)));
        var_22 -= ((/* implicit */long long int) arr_10 [i_5] [i_5] [i_5 + 1] [i_5 - 1]);
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_7))));
        arr_22 [i_5] = ((/* implicit */_Bool) var_11);
    }
    var_24 = ((/* implicit */short) min((((/* implicit */int) ((short) max((var_18), (((/* implicit */unsigned int) var_8)))))), ((((+(((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (3765603419U)))))));
}
