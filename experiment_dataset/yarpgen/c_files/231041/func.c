/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231041
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((1048574) / (-1133846154)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_17 = (((-(((/* implicit */int) (signed char)-8)))) + ((-(max((((/* implicit */int) (signed char)31)), (arr_4 [i_0] [i_0] [(unsigned short)3]))))));
            var_18 = arr_4 [i_0] [i_1] [i_0];
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (arr_5 [2U] [2U] [i_1 - 1]))))))) ? (((/* implicit */int) min((var_12), ((unsigned short)62304)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)98)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))))));
            var_20 = ((/* implicit */unsigned int) (unsigned short)65165);
        }
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_21 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)19545))) != (arr_5 [i_0] [i_2 - 1] [i_2])))) << (((((arr_2 [i_2 - 2] [i_2 - 1]) + (arr_1 [i_0] [i_2 - 1]))) + (6126411741315517130LL))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((arr_5 [i_0] [i_2] [i_3 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_2 - 2] [i_3 + 2] [i_4])))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) (short)23544))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((_Bool) (((-(arr_10 [i_4] [i_3] [i_2] [(unsigned short)14]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_5])))))))));
                            var_24 = ((short) (+(((/* implicit */int) arr_11 [14U] [i_4 + 1] [i_4 - 1] [i_3]))));
                            arr_17 [(short)14] [(signed char)12] [(short)14] [i_4 + 2] [i_4] [i_4 + 1] |= ((/* implicit */long long int) (signed char)(-127 - 1));
                            arr_18 [i_0] [i_2 - 1] [i_2 - 2] [i_3] [i_4 + 2] [i_0] = arr_14 [i_0] [i_3] [i_3] [i_4 + 2] [i_4] [i_5 + 1];
                        }
                        var_25 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_4] [i_4 + 2])) ? (1933411298U) : (var_14))) ^ (min((arr_6 [i_3 + 1] [i_4] [i_4 + 2]), (((/* implicit */unsigned int) (unsigned short)50557))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-((((+(-270102756009350033LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9377))))))))));
                    }
                } 
            } 
            var_27 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2])))))) == (((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (arr_10 [i_0] [i_2] [i_2] [i_2]))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) arr_0 [i_2 - 1])), (arr_20 [i_2] [i_2 + 1] [i_2] [i_0]))))))));
                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (unsigned char)161)))));
            }
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [2U]))))))) : (((/* implicit */int) var_15))));
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_24 [i_0] [i_7] [i_7] = ((((_Bool) arr_10 [i_0] [i_7] [i_7] [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_7] [i_0]) : (arr_10 [i_0] [i_7] [i_7] [i_7]))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */long long int) var_9)) != (((long long int) (+(var_6))))));
            arr_25 [i_0] [i_7] = ((/* implicit */short) max((((unsigned int) 0U)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))));
        }
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-21233))))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 2337539548U)) ? (var_0) : (((/* implicit */long long int) var_1)))) : (((-3527432270923724057LL) / (((/* implicit */long long int) var_14))))))));
}
