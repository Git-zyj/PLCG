/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219838
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
    var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)94)), (8768060520540451874ULL)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        var_13 &= ((/* implicit */_Bool) ((short) min(((+(((/* implicit */int) var_0)))), ((-(((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((11775366248416866579ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 4])) / (((/* implicit */int) arr_3 [i_0]))))) ? (((var_11) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((arr_6 [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (12249571950300640309ULL))) ^ (((/* implicit */unsigned long long int) arr_9 [(short)7] [i_3] [i_2] [(short)7]))));
                        var_17 = ((/* implicit */signed char) ((arr_8 [i_1]) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_11)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (~(((unsigned int) (-(((/* implicit */int) arr_19 [i_5] [i_6] [i_6])))))));
                var_20 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_6])))))), (max((min((4271807597930800468ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) max((var_3), ((unsigned short)63347))))))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5] [i_6 - 1] [i_5]))));
            }
        } 
    } 
}
