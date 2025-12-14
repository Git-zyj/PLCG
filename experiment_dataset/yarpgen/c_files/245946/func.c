/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245946
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
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_5))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3795435468649837267LL)) ? (var_11) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((-3795435468649837268LL) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (((unsigned int) ((var_14) << (((arr_1 [i_0]) - (694484980U))))))))));
        arr_2 [i_0] [16U] = arr_1 [18U];
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 + 1])))) ? (((/* implicit */unsigned int) ((arr_4 [i_1 + 1]) + (arr_4 [i_1 + 2])))) : (((unsigned int) var_12)))))));
        arr_5 [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) max(((unsigned char)2), ((unsigned char)181)));
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)16)), (((((/* implicit */_Bool) var_6)) ? (3739817322U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25775)))))))) <= (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1006690733U)) ? (3221532286U) : (var_10)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (-3696749104463692662LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((688696093U), (1487829080U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (((1062872636U) << (((3288276572U) - (3288276561U)))))))), (12863030189367089818ULL)));
    }
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */signed char) ((unsigned short) max((((int) var_4)), (((/* implicit */int) var_4)))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) var_11)) | (var_13)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) (short)3072)) ? (649654794381004514LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (signed char)104)))))))))));
}
