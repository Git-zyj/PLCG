/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47239
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (+(arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_1 [14LL]))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2)))) ? (((((/* implicit */_Bool) 4611686017353646080ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (13835058056355905535ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) var_1))))))), (((13798563320975264647ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_14)) != (((/* implicit */int) (unsigned char)228))))));
                    var_20 = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    }
    for (long long int i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) 4238521937U)) | (var_3))) + (9223372036854775807LL))) << ((((~(arr_3 [i_4]))) - (12346059416534831639ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [3U]))) : (var_10)));
        var_22 = ((/* implicit */_Bool) ((((unsigned long long int) var_8)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [i_4 - 1])))))) >> (((((129569197U) >> (((var_12) - (7561206936840386021ULL))))) - (15786U))))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) / (max((((/* implicit */long long int) (unsigned char)233)), (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(var_3)))))) : ((((-(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
}
