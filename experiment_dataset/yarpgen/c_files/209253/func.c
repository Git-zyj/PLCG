/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209253
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
    var_13 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (var_8)))) ? (((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */int) (short)-4763))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (1646323532) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) (signed char)70)) ^ (((/* implicit */int) var_12)))) : (1646323532)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [3ULL])) : (1132072593))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_1 [21ULL])) : (((/* implicit */int) var_12)))))) : (min((((((/* implicit */_Bool) 9608951534634971666ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 14889258494273176722ULL)) ? (((/* implicit */int) var_2)) : (var_3)))))))));
        var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1097364144128LL), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((arr_1 [19]) ? (((/* implicit */int) arr_0 [20U])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (-1262036028)))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 - 1])), ((unsigned char)0)))));
        arr_2 [(signed char)8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (signed char)-11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (4274360995119556050ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))) ^ ((+(((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [10]))) : (1972072206572550481LL))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_12)) > (var_4))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) - (((/* implicit */int) arr_3 [(short)0] [(_Bool)1]))))) ? ((+(((/* implicit */int) arr_0 [2])))) : ((+(((/* implicit */int) arr_1 [i_2]))))));
        arr_8 [3] [3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_0 [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) (+((+(((((/* implicit */int) arr_1 [(signed char)6])) & (((/* implicit */int) arr_6 [(_Bool)1]))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_1 [9U]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [14ULL] [14ULL]))))) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3])) + (((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) arr_9 [(signed char)6])), (-1646323515))))))));
        arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */int) arr_6 [i_3])), (-1552298818)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_9 [i_3])))) : ((+((+(((/* implicit */int) (unsigned short)55507))))))));
    }
}
