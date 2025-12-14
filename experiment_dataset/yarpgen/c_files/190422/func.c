/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190422
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
    var_12 ^= ((/* implicit */unsigned short) (((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (492114455U))))) + (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((short) var_0))) ? (((unsigned int) (signed char)-9)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1903824289)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-1))))))), (min((492114430U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_5 [14ULL] [6] [i_0])) > (var_3)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) 492114455U))), ((unsigned short)7573))))));
                            var_15 ^= ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]);
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2]))))), (arr_5 [i_1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_17 += arr_5 [i_5] [i_4] [(short)12];
                            var_18 *= ((/* implicit */unsigned short) ((max((arr_6 [10] [i_4] [(unsigned short)16] [i_0 + 1]), (((/* implicit */unsigned long long int) -97112895)))) / (((/* implicit */unsigned long long int) 3050175135U))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) var_9));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (signed char i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) max((var_10), (((max((((/* implicit */unsigned long long int) arr_21 [i_6] [i_10])), (var_10))) & (((/* implicit */unsigned long long int) min((-864633137), (((/* implicit */int) (short)400)))))))));
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((3802852866U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 864633153)) || (((/* implicit */_Bool) 1305349786)))))))) ? (((((/* implicit */int) (short)12156)) >> (((1244792145U) - (1244792144U))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((1982779072U), (((/* implicit */unsigned int) (signed char)41))))) > (((140737488355327ULL) / (arr_32 [i_6] [i_7] [i_8] [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (492114426U) : (((/* implicit */unsigned int) arr_33 [i_6] [i_6] [i_8] [4ULL] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3802852841U))))) : (((/* implicit */int) arr_20 [i_6])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [18ULL] [i_7] [i_6] [i_6] [18ULL])) || (((/* implicit */_Bool) (unsigned short)45670))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_30 [(signed char)18] [16U] [i_8] [(short)6] [16U] [i_6]);
                                var_24 = ((/* implicit */unsigned int) max((var_24), (max((min((492114421U), (((/* implicit */unsigned int) arr_35 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1])))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11 + 1] [i_11 + 1] [i_11 - 1] [10ULL] [i_11 + 2] [i_11 - 2] [i_11 - 1]))))))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3714)) ? (3802852841U) : (492114455U)))) ? (((arr_34 [i_11 + 2] [i_11] [i_11] [i_11] [i_11 - 2] [i_11 - 1]) + (arr_34 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 + 1]))) : (((/* implicit */unsigned long long int) 2312188223U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
