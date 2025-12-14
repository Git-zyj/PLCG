/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246891
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */short) (-(max((((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_15))), (((/* implicit */long long int) ((short) var_11)))))));
        arr_2 [i_0] = ((/* implicit */int) (+(((((/* implicit */unsigned int) -238430355)) - (511U)))));
        arr_3 [i_0] [(unsigned short)8] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) var_6)), (var_12))));
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((var_3), (var_3)))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((var_15) != (((/* implicit */long long int) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (var_4)))))))));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */int) (unsigned short)56)) : (((/* implicit */int) (_Bool)1))))))));
                var_19 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)83)), ((unsigned short)65488))), (max(((unsigned short)1023), (((/* implicit */unsigned short) (signed char)38))))))) < (((/* implicit */int) (signed char)38)));
}
