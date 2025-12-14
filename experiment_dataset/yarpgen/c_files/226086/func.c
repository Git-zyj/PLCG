/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226086
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) max(((~(247628464217060295ULL))), (max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (18199115609492491299ULL)))))));
                    var_15 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 3862945424349739310LL)))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((unsigned int) 18199115609492491271ULL))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) arr_4 [(_Bool)0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2])))))) : (((arr_4 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((unsigned long long int) 0U)) : (((/* implicit */unsigned long long int) var_10)))), (((((arr_5 [7] [7] [i_0]) <= (arr_6 [16LL] [i_0]))) ? (min((247628464217060316ULL), (((/* implicit */unsigned long long int) 1704227447457603378LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 247628464217060316ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                    var_16 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)144)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 247628464217060299ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_0]))) : (4294967285U)))) : (arr_4 [i_0] [i_1] [(_Bool)0]))), ((~(arr_2 [i_0] [i_1])))));
                }
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) -4594571323990041578LL);
            }
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-17123)) ? (((/* implicit */unsigned long long int) 1435417076)) : (247628464217060297ULL)));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33312)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6))))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (unsigned short)32224))))) && (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))))))));
}
