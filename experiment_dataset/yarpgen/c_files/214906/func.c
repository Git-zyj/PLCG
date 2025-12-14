/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214906
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_2))))));
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_11)))) ? (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19257)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 1653751980745881248ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_9))))) : (var_13))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (unsigned short)25685;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                    arr_8 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) (((_Bool)1) ? (8278005520138586591ULL) : (3145306464368311899ULL)));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) min((-7911967948318247122LL), (((/* implicit */long long int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])))) : (((((/* implicit */int) var_12)) % (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)39850);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25685)) << (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(_Bool)1])) - (21576)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [0LL] [0LL] [i_0]) : (arr_4 [i_0] [(_Bool)1] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) - (max((137438429184ULL), (((/* implicit */unsigned long long int) (unsigned short)25685))))))));
        arr_10 [i_0] = ((/* implicit */unsigned short) (+(max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned long long int) 0LL);
}
