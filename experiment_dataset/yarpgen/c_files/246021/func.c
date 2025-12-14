/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246021
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) max((arr_5 [i_0 + 2]), (((_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0 - 1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_4] &= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1])) == (((/* implicit */int) arr_5 [i_0 - 1])))))));
                                var_13 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_12 [i_0] [i_0 - 1] [i_0 + 2] [i_4])))) + ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((var_0) >= (((/* implicit */unsigned long long int) 1303291973)))))))) : ((((+(arr_3 [i_0] [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)21699)))))));
                    var_14 = ((/* implicit */_Bool) ((unsigned long long int) max((arr_6 [i_0] [i_1 + 2] [i_2] [i_2]), (arr_6 [i_0 - 1] [14ULL] [14ULL] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            for (unsigned char i_6 = 3; i_6 < 12; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned long long int) arr_3 [i_0] [i_5 + 1] [i_6])))));
                    arr_22 [13ULL] [i_5] [i_6] [8ULL] = ((/* implicit */int) arr_5 [i_6 - 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_16 &= ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-59)), (7737538216569810188LL)))) & (12929486523646380483ULL));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), ((((-(arr_15 [i_8 + 1] [i_5] [i_0 - 1] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1])))))));
                                arr_28 [i_0] [i_5] [11LL] [i_7] [i_5] [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_24 [i_0 + 2] [7ULL] [i_0 + 2] [i_0 + 2]))) <= (9473609946855144688ULL))))) / (max((((/* implicit */unsigned long long int) 4134184292988696071LL)), (18446744073709551615ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 1]))))))));
        arr_29 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0 + 2])))) : ((-(arr_3 [i_0] [(short)7] [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned int) var_3);
}
