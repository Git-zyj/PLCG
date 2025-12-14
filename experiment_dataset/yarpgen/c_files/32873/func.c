/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32873
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_1))))) : (max((min((var_1), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)51828))))))));
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29960)) ? (8903411579615674437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))), (((max((((/* implicit */unsigned long long int) (short)-29960)), (1723101862330412300ULL))) << (((((unsigned long long int) 9595238603429586228ULL)) - (9595238603429586220ULL)))))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)29960)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_11))))))), (6114101604626600297ULL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_0 [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) (short)12824))))))) ? (((/* implicit */int) (short)29945)) : (((/* implicit */int) (short)-29960))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) (short)-29961)), (((((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3])) * (((/* implicit */int) arr_1 [(unsigned short)11] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)32767)), (min((max((((/* implicit */unsigned long long int) var_15)), (8851505470279965387ULL))), (((/* implicit */unsigned long long int) (signed char)-110))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */signed char) min((5640539129873048721ULL), (((/* implicit */unsigned long long int) (short)15638))));
                        var_21 = ((/* implicit */unsigned long long int) var_5);
                        var_22 = ((/* implicit */short) (~(((((/* implicit */int) max((((/* implicit */short) arr_13 [i_1])), ((short)32762)))) - (((((/* implicit */_Bool) 6375021197283901997ULL)) ? (((/* implicit */int) (short)-29968)) : (((/* implicit */int) (short)18422))))))));
                    }
                } 
            } 
        } 
    }
    var_23 += ((/* implicit */unsigned long long int) var_10);
}
