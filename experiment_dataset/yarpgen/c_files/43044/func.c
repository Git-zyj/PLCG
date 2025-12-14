/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43044
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
    var_13 = ((/* implicit */unsigned short) ((((((_Bool) var_9)) && (((/* implicit */_Bool) min((4605778105684640779LL), (var_1)))))) ? (((/* implicit */long long int) (+(((unsigned int) -6522708817520435993LL))))) : (var_1)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_14 |= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1] [i_0])), (var_5)))) || (((/* implicit */_Bool) 6522708817520435992LL)))) ? (((/* implicit */long long int) min((3107748793U), (min((((/* implicit */unsigned int) var_8)), (1464272392U)))))) : ((+(min((9223372036854775807LL), (var_10)))))));
                        var_15 = ((/* implicit */long long int) ((((unsigned int) 248290053U)) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-6522708817520435993LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_2 - 1] [i_1 - 1]))))))))))));
                        var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((arr_0 [i_0] [i_3 + 1]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2]))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_1] [i_1])))))))));
                    }
                } 
            } 
        } 
        var_17 = (unsigned short)23291;
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [(unsigned short)16] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [18LL])))), (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = arr_0 [i_0] [i_0];
        var_19 &= ((/* implicit */unsigned short) var_12);
    }
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
    var_21 = ((/* implicit */long long int) var_12);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49113))))) ? (max((((/* implicit */unsigned int) var_4)), (var_2))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17510)))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
