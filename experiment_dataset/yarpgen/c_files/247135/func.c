/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247135
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) (_Bool)1))))) : (var_8)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2489105841U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51689)))))), (((((/* implicit */_Bool) 3668142778U)) ? (var_4) : (var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [11] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) min((max((12611491237483141758ULL), (((/* implicit */unsigned long long int) 786432)))), (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (4931171177291921850ULL) : (((/* implicit */unsigned long long int) var_12)))), (max((4409934925165876078ULL), (((/* implicit */unsigned long long int) var_1)))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_1])), (4294967295U)))) ? (((((/* implicit */_Bool) 1783103282U)) ? (((/* implicit */unsigned long long int) 1375108680)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51669)))))) ? (((((/* implicit */_Bool) arr_8 [3] [i_2 + 3])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 3])) ? (var_8) : (var_13))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 14036809148543675538ULL)) ? (((/* implicit */unsigned long long int) 1448262107U)) : (min((4931171177291921850ULL), (((/* implicit */unsigned long long int) (signed char)-54)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (5129927906494091622ULL)))) ? (min((((/* implicit */int) (signed char)-122)), (1528228776))) : (((/* implicit */int) var_6))))))))));
}
