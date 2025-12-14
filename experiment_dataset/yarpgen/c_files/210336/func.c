/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210336
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)14266)) || (((/* implicit */_Bool) ((arr_0 [i_1] [i_0]) | (((/* implicit */int) (unsigned short)14259))))))) ? (max((((((/* implicit */int) (unsigned short)44380)) * (((/* implicit */int) (short)0)))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)7947))))))) : (((((((/* implicit */_Bool) arr_2 [i_2])) ? (var_8) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) ((unsigned short) arr_5 [i_0] [(_Bool)1] [i_1]))) - (23383)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), ((unsigned short)16920)));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2])))))), (((min((((/* implicit */unsigned long long int) (unsigned short)16909)), (arr_3 [i_2] [i_1]))) << (((((unsigned long long int) 5812400218244581319ULL)) - (5812400218244581264ULL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(2061786036357305227ULL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)21173))))))));
}
