/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212260
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)127))) - (((/* implicit */int) var_11))));
        arr_5 [i_0] [(short)5] = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_0]));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) (short)16391);
        var_19 &= (~(((/* implicit */int) ((short) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1984))))))));
        var_20 = ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_6 [i_1])))))) < ((+((~(((/* implicit */int) arr_8 [i_1])))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_8 [12LL]))))))) : ((~(((((/* implicit */_Bool) arr_6 [(signed char)19])) ? (arr_7 [(_Bool)1]) : (3709686957U)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned char)72))));
                    var_23 = ((/* implicit */unsigned int) max((((unsigned long long int) (signed char)56)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    }
    var_24 = var_4;
    var_25 = ((/* implicit */unsigned short) var_6);
}
