/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226137
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
    var_14 |= ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [(unsigned char)13]);
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [2ULL]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (12519020884801416125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) arr_3 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_1] [(_Bool)1]))))))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)255)))));
        arr_6 [i_1] = min((((unsigned long long int) 5927723188908135491ULL)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_3])) | (18014398509481983ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (5927723188908135493ULL)))) : (((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2])))))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] [i_5] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)57))))), (arr_18 [i_2] [i_2] [i_4] [i_5] [i_6]));
                                var_19 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_4])), (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_18 [i_3] [i_2] [i_4] [i_5] [i_3]))))), (((10926016012314482117ULL) | (max((((/* implicit */unsigned long long int) var_0)), (144106391982833664ULL)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_6] [i_2] [i_6] [i_3] [(unsigned char)14])) ? (((/* implicit */int) arr_12 [i_2] [i_5])) : (((/* implicit */int) arr_17 [14LL] [i_3] [i_4] [i_5] [i_6] [i_2] [i_4])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_3] [i_5]))))));
                                arr_20 [(unsigned char)14] [i_5] [i_2] [4U] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = var_6;
}
