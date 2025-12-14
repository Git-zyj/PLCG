/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211860
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
    var_14 = ((/* implicit */signed char) var_7);
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (var_12))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))))) : ((((~(var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] = 18446744073709551604ULL;
                    arr_9 [i_2] [(signed char)17] [(signed char)8] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) % (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [(signed char)3] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [7ULL])) >> (((unsigned long long int) 1ULL))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_1 [i_0]))))))) || (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)61))))) == (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) min(((signed char)31), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (arr_11 [i_3])))))))));
                    }
                    for (signed char i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] [9ULL] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_12), (var_0)))) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_2))));
                            arr_20 [i_2] [i_2] [i_2] [11ULL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_4 + 1] [i_1] [i_4] [i_1]))))) ? (max((18446744073709551606ULL), (5262935629840699082ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [(signed char)15] [i_4] [i_4]))) - (arr_3 [i_0] [(signed char)12] [(signed char)12]))))), (((/* implicit */unsigned long long int) var_5))));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (7822465484422118854ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) <= (0ULL)))) : (((((/* implicit */_Bool) arr_6 [7ULL] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-114))))))), (arr_7 [6ULL] [i_2] [6ULL])));
                    }
                    var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-29)));
                }
            } 
        } 
    } 
}
