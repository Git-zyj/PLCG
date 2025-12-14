/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239573
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
    var_11 = ((/* implicit */short) ((long long int) var_0));
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [18U] [16ULL]))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0] [22U])))) || ((!(((/* implicit */_Bool) (+(arr_1 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : ((+((+(arr_7 [i_0]))))))))));
                    var_14 &= ((/* implicit */unsigned char) ((((_Bool) arr_5 [1] [3U] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_1] [i_2])));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (max((var_10), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) var_8)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((arr_0 [i_0]) ? ((+(((/* implicit */int) ((_Bool) var_7))))) : ((+(((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3]))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_17 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_16 [i_5] [i_5] [i_5] [i_5 + 1])))) < (arr_10 [i_0] [i_0])));
                        var_18 = ((/* implicit */int) ((short) (+(((/* implicit */int) arr_8 [i_0])))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])))) ? (arr_6 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_6 [i_0] [(short)14]))))))));
                        arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 3] [i_4]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_3] [i_0])))))))) ? ((-((+(arr_12 [(short)14] [i_4] [i_0]))))) : (((/* implicit */unsigned int) arr_15 [i_0] [i_5 + 1] [i_3 + 3]))));
                        arr_18 [i_0] [i_4] [i_5] = arr_16 [i_0] [i_0] [i_4] [i_0];
                    }
                    var_20 = ((/* implicit */long long int) (+((-(((arr_10 [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_16 [i_0] [i_3 - 2] [i_3] [i_4]))))))));
                    arr_19 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_0 [20LL]);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_0 [i_0]), (var_6))) ? ((-(arr_16 [i_0] [i_0] [i_3] [i_4]))) : (arr_16 [i_3] [i_3] [i_3 + 3] [(short)14])))) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (((((/* implicit */int) arr_8 [i_3])) + (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_3]))))))));
                }
            } 
        } 
    }
}
