/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242916
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
    var_15 = ((/* implicit */short) (+(var_0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1])) - (((/* implicit */int) arr_3 [3LL] [3LL]))))))) >> (((arr_1 [i_0]) - (7319373880508954779ULL)))));
                var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((var_13) - (arr_0 [1U])))))) && (((/* implicit */_Bool) 10816098070377487474ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)65535)) << (((var_0) - (892218568272136065ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_8))) | (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535))))));
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-5987036354240953755LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [2] [2] [2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_0 [4U])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                                var_22 = ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (7630646003332064141ULL))))) : (((((/* implicit */_Bool) var_14)) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)80))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
