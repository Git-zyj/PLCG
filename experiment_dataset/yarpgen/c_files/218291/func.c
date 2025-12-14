/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218291
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned short) arr_4 [8ULL] [i_1] [8ULL]);
            var_17 = ((/* implicit */long long int) min((var_17), (min((((/* implicit */long long int) arr_0 [(unsigned short)6] [i_1])), (arr_2 [i_0])))));
        }
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 228290474887475080LL))))) ? ((-(((/* implicit */int) (unsigned short)53353)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [4] [i_0])) == (4156127549714848395ULL))))))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((arr_6 [(unsigned short)14] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))) / (((/* implicit */long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) | (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [0ULL] [i_2]))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned short) (_Bool)1);
        var_20 ^= ((/* implicit */unsigned long long int) ((arr_4 [i_3] [i_3] [(unsigned short)6]) ? ((+(arr_7 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_16 [i_3] = ((/* implicit */unsigned short) (((+(arr_6 [i_3] [i_3]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) || (((/* implicit */_Bool) arr_6 [i_3] [i_3]))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((unsigned short) min((((/* implicit */long long int) 680581934)), (arr_2 [i_4])));
        var_21 = max((((15720223083853542323ULL) & (((/* implicit */unsigned long long int) ((arr_19 [i_4]) ? (((/* implicit */int) arr_19 [(unsigned short)3])) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))))), (((((/* implicit */_Bool) max((arr_14 [i_4] [9ULL]), (((/* implicit */long long int) arr_5 [(signed char)4] [(signed char)4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2043200170749940910ULL) != (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_1))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))));
}
