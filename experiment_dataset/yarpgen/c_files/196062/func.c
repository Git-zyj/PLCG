/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196062
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
    var_11 = ((/* implicit */long long int) var_7);
    var_12 &= ((/* implicit */long long int) ((short) var_0));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((long long int) ((_Bool) ((3812822259U) >> (((var_5) - (8632622096046000435LL))))))))));
                var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) 1453036228U)) : (6346407661300144020LL)));
                var_15 = ((/* implicit */_Bool) ((signed char) max((var_4), (((/* implicit */long long int) (unsigned short)8)))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8676)) < (((/* implicit */int) (unsigned short)8191)))))) >= (min((((/* implicit */long long int) (_Bool)1)), (6346407661300144020LL)))))), ((~(((/* implicit */int) (short)-32220)))))))));
            }
        } 
    } 
    var_17 = min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13758))) - (var_1))) + (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (482145043U)))))), (var_9));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_18 = ((/* implicit */long long int) (+(((unsigned int) max((var_9), (arr_4 [i_2] [i_2]))))));
        arr_6 [i_2] = arr_4 [i_2] [i_2];
        var_19 = ((((((/* implicit */_Bool) max((arr_5 [i_2]), (arr_5 [i_2])))) && (((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */long long int) (unsigned short)56524))))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_4)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) (unsigned short)48300)))));
    }
}
