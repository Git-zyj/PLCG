/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21151
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */unsigned long long int) (~(30LL)))) : (((((/* implicit */_Bool) 134217727U)) ? (4240507229324903101ULL) : (18446744073709551615ULL)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]);
                    }
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((-176641581712340868LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (134217730U)))) << (((((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (min((((/* implicit */unsigned long long int) (short)-16439)), (arr_18 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (0) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))) - (12314085301613763981ULL))))))));
                    }
                    for (short i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_5 + 2]))) <= (((long long int) arr_2 [i_1 + 1] [i_5 - 1]))));
                        arr_24 [i_2] = max((((int) arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1])), (((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1])))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (var_2))))) - (arr_18 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_1 - 1] [i_5 + 2] [i_1 - 1] [i_1 - 1])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned short) ((long long int) 4240507229324903123ULL))));
                    }
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])) : (((2295350309U) >> (((4160749565U) - (4160749546U))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) 4681055263722983108LL)))));
    var_14 = ((/* implicit */unsigned int) 13LL);
}
