/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39940
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))) + (arr_0 [i_0])));
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_7), (((/* implicit */unsigned long long int) (unsigned char)11)))) != (((/* implicit */unsigned long long int) 803387265U)))))) != (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2919))) & (arr_0 [i_0])))), (min((12938021934404078255ULL), (((/* implicit */unsigned long long int) var_6))))))));
        var_11 = (-(var_8));
        var_12 -= max((min((((((/* implicit */_Bool) 12938021934404078255ULL)) ? (12938021934404078272ULL) : (18446744073709551606ULL))), (((/* implicit */unsigned long long int) (unsigned char)231)))), (var_7));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) 7342883499365231925ULL)) ? (4659349060509544096ULL) : (((/* implicit */unsigned long long int) -4009415833319385880LL)))))));
            var_14 = ((/* implicit */signed char) ((_Bool) ((signed char) ((unsigned char) (short)-21141))));
            var_15 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_6 [(unsigned char)4])), (1044393929723633235ULL))), (((unsigned long long int) var_0))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_5 [i_2] [i_2]))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_13 [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_3)) ? (12938021934404078258ULL) : (arr_7 [i_3])))))) ? (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [10] [i_4]))))) : (min((var_0), (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_4] [i_4])))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
            }
            arr_14 [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) ((unsigned long long int) max(((short)28463), (((/* implicit */short) arr_9 [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_3] [i_2] [i_2])), (arr_10 [i_2] [i_3])))))))) : (arr_12 [i_3] [13LL] [(short)3] [(short)3]));
        }
        arr_15 [i_2] = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
    }
    var_18 |= ((/* implicit */unsigned char) ((unsigned int) 842673865U));
}
