/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211455
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
    var_11 = ((((((/* implicit */int) min((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))))) + (2147483647))) << (((var_0) - (2122373469))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0 + 2]);
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0)) ? (arr_0 [2] [2]) : (12077389146700199669ULL))), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])), (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0 + 1] [i_0]) << (((6129010888010829792ULL) - (6129010888010829783ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_1 [4ULL] [i_0 + 2])))))))));
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12077389146700199665ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_1))))))) && ((_Bool)1)));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] |= ((/* implicit */int) (-(((unsigned long long int) (+(arr_4 [i_1 - 1] [i_1 - 1]))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5))))))) != ((-(((12077389146700199665ULL) * (((/* implicit */unsigned long long int) -2691454677212031799LL))))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
    {
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_2))))) : ((-(arr_8 [i_2 + 4])))));
        var_16 = ((/* implicit */unsigned char) ((int) (+(arr_8 [i_2 + 4]))));
        arr_10 [i_2] = ((/* implicit */int) ((unsigned long long int) ((arr_8 [i_2]) % (((/* implicit */unsigned long long int) max((var_5), (-2147483631)))))));
    }
}
