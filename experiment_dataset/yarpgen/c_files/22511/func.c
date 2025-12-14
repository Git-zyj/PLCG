/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22511
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_2 [i_0] [i_0 + 1]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))))) > (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_3 [i_0 + 1] [i_0] [i_0])), (arr_0 [i_0])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_5 [i_2 + 3] [i_2 + 3] [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [(_Bool)0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_7 [i_0] [(short)11] [i_1] [i_1]))))))))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32764)))))) <= (17508489899242185337ULL)));
                    }
                }
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (arr_7 [i_0] [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) (-(arr_8 [i_0] [i_0 - 1] [1LL] [i_1] [i_1])))) : ((-(arr_7 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1172697200U)) ? (8191) : (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */int) max((arr_5 [i_0 - 1] [i_1] [i_0]), (arr_0 [i_0])))) << (((((((/* implicit */_Bool) (unsigned char)96)) ? (3122270100U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16694))))) - (3122270082U)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((-(min((var_8), (((/* implicit */unsigned long long int) var_3)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))))));
}
