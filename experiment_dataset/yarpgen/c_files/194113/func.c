/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194113
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))))));
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((min((((/* implicit */unsigned int) var_1)), (var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4163326384U)))))) : (min((var_4), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min(((_Bool)1), (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) arr_0 [i_0])))))) == (max((var_4), (((/* implicit */unsigned int) arr_4 [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_2 - 2] = ((/* implicit */unsigned int) -8989847815621829838LL);
                    arr_10 [i_2 - 4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (max((var_6), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]))))))) && ((!(((/* implicit */_Bool) -5128105846856173416LL))))));
                }
                for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (-2735910472288112449LL)));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) >= ((-(arr_17 [i_1] [i_1] [i_1] [i_3] [i_3 - 2])))));
                                arr_19 [i_0] [i_1 - 2] [i_3] [i_4] [i_5] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_3 - 2] [i_3 - 1] [i_1 + 2] [i_1 + 1])))) ? (((/* implicit */unsigned int) max((arr_7 [i_3 + 1] [i_3 + 1] [i_1 + 3] [i_1]), (arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 2] [i_0])))) : (min((((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 3] [i_1])), (var_4)))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_3] [i_3] [i_1] [i_0]), ((+(((/* implicit */int) var_10))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_3)) != (((/* implicit */int) var_7)))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_3]))) != (arr_17 [i_0] [i_0] [(unsigned char)18] [i_0] [i_0])))))))));
                    var_17 -= ((((/* implicit */_Bool) (-(arr_0 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))) : (((arr_0 [i_1 - 2]) & (((/* implicit */unsigned long long int) var_8)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (18200968592401017707ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))))));
                arr_25 [i_6] [(short)4] [(short)4] = ((/* implicit */signed char) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_7] [i_6] [i_6 - 1]))))), (arr_18 [i_7 - 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]))) >= (((/* implicit */long long int) (-(arr_11 [i_6] [i_7 - 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_10);
}
