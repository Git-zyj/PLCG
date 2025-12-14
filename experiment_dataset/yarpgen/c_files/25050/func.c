/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25050
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32764)) ? (2017268094U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7915)))))) ? (((/* implicit */int) (unsigned short)20350)) : ((-(((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 2] [i_1] [i_2] [i_2] = ((2727120834U) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45191))) - (-183874118489736653LL))) - (183874118489781822LL))));
                    var_20 *= ((/* implicit */unsigned short) ((183874118489736679LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) -3733586485155127502LL))));
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((_Bool) (((!(((/* implicit */_Bool) (unsigned short)511)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 183874118489736679LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_3])))) : ((+(70351564308480LL)))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 2]))) % (var_4))))));
            }
        } 
    } 
}
