/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190250
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((unsigned int) arr_5 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */signed char) (-(4095U)));
                        var_11 = ((/* implicit */unsigned int) 2113929216);
                        var_12 = ((/* implicit */unsigned long long int) ((14U) - (arr_5 [i_3 + 1] [i_1] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) (unsigned short)63400)))) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_2] [i_4])))) : (arr_10 [i_4 - 2])));
                        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
                        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(signed char)14] [i_4 + 2] [i_4 + 2] [i_4 - 2])) ? (arr_13 [i_4] [5ULL] [i_4] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1])))));
                        arr_16 [i_0] [(unsigned char)3] [i_1] [i_4 - 2] = (~(arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]));
                        arr_17 [i_0] [(unsigned char)14] = ((arr_10 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 2])) > (((/* implicit */int) arr_18 [7U] [i_5 - 2] [i_5 - 2] [i_5 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */int) arr_2 [i_5 + 1])) : (((/* implicit */int) arr_12 [i_5 - 2]))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2136)) && (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5 - 2] [i_6 - 1]))));
                            arr_22 [10LL] [20ULL] [20ULL] [20ULL] [i_6] [(unsigned char)16] = ((unsigned char) (unsigned short)63400);
                        }
                    }
                    var_18 = (((((+(arr_10 [13U]))) / (((/* implicit */unsigned long long int) 1809143831)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (arr_10 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_12 [i_8 + 2]), (arr_12 [i_8 + 2])))) < (((((/* implicit */int) arr_12 [i_8 - 1])) >> (((((/* implicit */int) arr_12 [i_8 - 2])) - (200)))))));
                                var_20 = max((((/* implicit */int) ((11427781687564889040ULL) != (((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_8] [i_7 - 2]))))), ((-(arr_25 [i_0] [i_0] [11] [i_7 - 1] [i_8] [(unsigned short)13]))));
                                arr_28 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(var_9)));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) min((arr_24 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [(unsigned short)13] [(unsigned char)9] [i_8 - 1]), (((/* implicit */unsigned short) arr_26 [i_2] [i_2] [15U] [i_7] [12] [i_8 - 1] [i_8 - 1]))))) - (min((arr_25 [i_0] [i_7] [i_8] [i_8] [i_8 - 2] [i_8 + 1]), (arr_25 [i_2] [i_2] [i_7] [i_7] [(unsigned short)17] [i_8 - 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((((/* implicit */int) var_1)) | (((/* implicit */int) (!(((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)251))))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_3))));
    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63395)) - (((/* implicit */int) (unsigned char)5))))) : (((unsigned int) (-(var_7))))));
}
