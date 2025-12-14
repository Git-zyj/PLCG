/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234264
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
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11090998065387918012ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_6))))))));
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) var_13)) : (max((((/* implicit */unsigned long long int) var_15)), (var_7)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_22 ^= ((((/* implicit */_Bool) (signed char)34)) ? (((unsigned int) 3594236792U)) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-32767)) + (32793)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (arr_0 [0] [i_0 - 2]) : (((/* implicit */int) (unsigned char)15))))), (((2034979987212907579LL) | (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) 11090998065387918012ULL)))));
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */long long int) arr_0 [i_0] [8U])) : (min((((/* implicit */long long int) arr_2 [12ULL])), (-1670750020546395793LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1670750020546395793LL)) ? (((/* implicit */long long int) 2050083732)) : (7870640305667130028LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [(unsigned short)6])) : (((/* implicit */int) arr_2 [12LL]))))) : (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [14U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)4]))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((long long int) var_13)))));
                var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((unsigned int) arr_5 [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)178)) & (((/* implicit */int) (unsigned char)140))))))) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)34)) ^ (-310430594))))));
            }
        } 
    } 
}
