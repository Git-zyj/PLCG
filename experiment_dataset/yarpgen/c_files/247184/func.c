/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247184
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -890784090681493488LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))), (((var_5) ? (var_1) : (var_1)))))) ? (max((var_10), (((/* implicit */unsigned long long int) 890784090681493487LL)))) : (((((/* implicit */_Bool) 890784090681493487LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 8391274700465099506LL)) : (var_4))) : (((/* implicit */unsigned long long int) var_8)))))))));
    var_12 = ((/* implicit */unsigned int) ((short) 890784090681493488LL));
    var_13 = ((/* implicit */long long int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_8)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -890784090681493489LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-890784090681493488LL))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((_Bool) max((0), (arr_1 [i_0 + 2] [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (arr_1 [i_0] [i_0 + 1]))))) : (((3025127930U) / (((/* implicit */unsigned int) arr_1 [3U] [i_0 - 2]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_1 + 2])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_4 [i_1 - 2])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) var_0))))));
        arr_7 [13] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_1 - 1]) <= (arr_3 [i_1 + 2])))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (arr_3 [i_1 - 3]))))));
    }
}
