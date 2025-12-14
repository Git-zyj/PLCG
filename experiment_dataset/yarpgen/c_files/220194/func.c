/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220194
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + (((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])) - (((/* implicit */int) min(((unsigned short)2470), (((/* implicit */unsigned short) var_6)))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)63061)) << ((((~(((/* implicit */int) var_1)))) + (9))))))))));
        var_18 = ((/* implicit */unsigned char) (!(((_Bool) min((((/* implicit */unsigned long long int) -1405392724)), (arr_0 [i_0]))))));
        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)2470)))) ? (((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [16ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14560))) : (arr_0 [i_0]))) : (arr_0 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0])) ? (((/* implicit */int) (unsigned short)2470)) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])))))));
        var_20 += ((/* implicit */long long int) ((min((var_14), (0ULL))) << (((((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_0 [0LL])))) - (37016)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) (unsigned char)31);
            var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)32768)) << (((((((/* implicit */int) arr_4 [i_1] [i_2])) + (16555))) - (13))))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63066)) && (((/* implicit */_Bool) 223372902U)))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) != (576460752303423360ULL)));
        var_25 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)78)) && (((/* implicit */_Bool) arr_3 [16LL] [i_3]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_0);
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1985389002U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2470))) : (3056819428121543831LL)));
}
