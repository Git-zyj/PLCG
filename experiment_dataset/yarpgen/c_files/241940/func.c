/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241940
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (((+(max((arr_1 [i_1]), (arr_4 [i_0] [i_0] [(signed char)14]))))) << (((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_11))))) - (2111006205U)))));
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(arr_1 [i_0]))), (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) var_5)), (var_16)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_0)), (var_1)))))));
                arr_6 [i_0] [i_1 - 2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((short)768), ((short)8191))))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1])))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_10 [i_4 + 1] [i_4] [i_4 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(short)8] [(short)8] [i_2]))) : (var_16))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_1 - 1] [i_4 - 2] [i_4 - 1] [i_4])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [i_1 + 1])))))));
                            var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_10 [i_6] [i_5] [i_0] [i_0])))))) ? (((unsigned int) arr_17 [i_1] [i_1] [i_1 - 1] [i_6 - 1] [i_6])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 2] [i_6 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(short)0] [(signed char)17] [i_1 - 3] [i_0])) || (((/* implicit */_Bool) var_14))))) : (((var_18) / (((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [i_5])))))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) (signed char)-81)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_8] [i_7]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (arr_32 [i_7] [i_7] [i_8])))) : (arr_29 [i_7 + 2])))) ? (min((((/* implicit */unsigned long long int) (signed char)9)), (4294967296ULL))) : (min((min((((/* implicit */unsigned long long int) arr_31 [i_8] [i_7])), (var_16))), (((/* implicit */unsigned long long int) min((var_7), (var_11)))))));
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_41 [i_7 - 2] [i_8] [i_9] [i_10 + 2] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7 + 2] [i_8] [i_10]))) : (var_16)))) || ((!(((/* implicit */_Bool) arr_31 [i_7 - 2] [i_7 - 1])))))) ? ((+(min((arr_32 [(signed char)0] [i_9] [i_11]), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                                var_25 |= ((/* implicit */short) (~(((/* implicit */int) ((short) max((arr_39 [i_7] [i_7] [i_7] [(_Bool)1] [(_Bool)1] [i_7]), (arr_39 [9ULL] [i_8] [i_8] [9ULL] [i_8] [i_8])))))));
                                arr_42 [i_11] [i_10] [(_Bool)1] [i_8] [i_8] [0U] = ((/* implicit */int) min((arr_32 [i_7] [i_8] [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_16)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_11 + 3] [(short)13] [i_11 - 2] [i_11 - 1] [i_11] [(short)13])))))));
                            }
                        } 
                    } 
                } 
                var_26 += ((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_28 [i_7] [i_8])), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))) % (max(((+(arr_29 [i_7]))), (((/* implicit */unsigned long long int) arr_30 [i_7]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) max((var_11), (((unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0)))))));
}
