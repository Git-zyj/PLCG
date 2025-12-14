/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195897
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (+(arr_1 [(_Bool)1]))))), (max((arr_0 [i_0]), (((/* implicit */short) ((_Bool) (short)32767)))))));
        arr_2 [i_0] = (!(((((/* implicit */int) var_9)) != ((-(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_5 [4ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7067842606849782960ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1)))))))) ? (((/* implicit */unsigned int) var_12)) : ((+(((1884650040U) + (var_13)))))));
        arr_6 [i_1 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (1884650019U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) min((var_9), (((/* implicit */short) var_1)))))))), (arr_4 [i_1 - 1])));
        var_16 = ((/* implicit */short) min(((~(max((((/* implicit */unsigned long long int) var_12)), (arr_1 [(signed char)3]))))), (((/* implicit */unsigned long long int) (-(max((var_11), (((/* implicit */unsigned int) (short)-1)))))))));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        arr_11 [i_2] [1LL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_2 + 1])), (((((/* implicit */_Bool) 1884650019U)) ? (1884650019U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))), (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_12 [i_2] = ((/* implicit */signed char) 0U);
        arr_13 [i_2] = ((/* implicit */short) max((min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 1]))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) > (3476767495578558214LL)))))))));
    }
    for (int i_3 = 1; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((arr_15 [i_3 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))))));
        var_18 = ((/* implicit */unsigned char) arr_3 [i_3 - 1]);
        arr_17 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) min((10151325598507414552ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])) / (var_14))))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) (~(min((14LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_3] [i_3 + 1])), (1884650024U))))))));
        arr_19 [i_3] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) ? (-2076436778) : (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (short)13550)))) : (min((arr_9 [i_3 - 1]), (((/* implicit */int) var_7))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_3] [4ULL]))))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3476767495578558214LL))) : ((+(9223372036854775807LL)))))));
    }
    var_19 = ((/* implicit */unsigned char) var_7);
}
