/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248218
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)18403), ((unsigned short)47132)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)47119)) : (((/* implicit */int) (unsigned short)18428))))) ? (((/* implicit */int) (unsigned short)47119)) : (((/* implicit */int) max(((unsigned short)47150), (((/* implicit */unsigned short) (_Bool)1)))))))));
        var_15 = ((/* implicit */short) max((1760871102), (((/* implicit */int) (unsigned short)18397))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 3422592270U)) ? (var_10) : (-1))) : (max((((/* implicit */int) (_Bool)1)), (var_4))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            {
                arr_9 [i_1] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) var_3))));
                var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) var_13)) : (var_12)))) ? (min((((/* implicit */int) (_Bool)1)), (var_10))) : (((((/* implicit */int) arr_5 [i_1] [i_2])) >> (((((/* implicit */int) (unsigned short)2032)) - (2022)))))))));
            }
        } 
    } 
}
