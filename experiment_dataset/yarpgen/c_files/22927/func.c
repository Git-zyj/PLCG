/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22927
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
    var_15 = ((/* implicit */unsigned char) ((signed char) var_9));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (signed char)-14))))))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 11095967382933154162ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_0])) * (((/* implicit */int) var_8))))) : (var_14))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_14))) << (((((((/* implicit */_Bool) 6007406249703178533ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_3])))) - (12638))))))));
                            arr_14 [i_4] [i_1] [(short)9] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
                            arr_15 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 12439337824006373061ULL)) ? (6007406249703178515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_18 |= ((/* implicit */short) var_11);
                            var_19 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                            var_20 = ((/* implicit */unsigned char) (~(((arr_1 [i_3]) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_0 [(signed char)14]))))));
                        }
                        var_21 = (~(6007406249703178537ULL));
                        arr_18 [i_0] [i_1] [i_0] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)3] [i_2 - 1])) ? (((var_3) - (var_14))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_3])) + (2147483647))) << (((((((/* implicit */unsigned long long int) -7895590321725600745LL)) & (6436112443487123014ULL))) - (1171263739454817286ULL)))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_6]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_3 [i_1]))))))));
                        }
                        var_24 = (-(((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_1] [i_2] [i_2 + 1])));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] [i_7] [i_7])))), ((~(((/* implicit */int) arr_11 [8U] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((3008657617812441560ULL) % ((~(6007406249703178537ULL)))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((arr_22 [i_2 + 1] [(signed char)1] [i_2 - 1] [i_2 + 1]) - (arr_22 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_22 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) max((arr_17 [i_2 - 1] [i_1] [i_2] [(_Bool)1] [i_0]), (((/* implicit */short) var_2))))) ^ (((((((/* implicit */int) arr_17 [i_7] [i_7] [i_2] [i_1] [i_0])) + (2147483647))) >> (((arr_10 [i_1] [i_0] [i_2 - 1] [i_7] [i_1] [i_1]) - (3945403453U))))))))));
                        var_28 = ((/* implicit */_Bool) max((-6449093489383823307LL), (((/* implicit */long long int) (signed char)-114))));
                    }
                    for (short i_8 = 4; i_8 < 15; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1])) || (((/* implicit */_Bool) var_6))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 12439337824006373055ULL))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2646779911U)) ? (6007406249703178559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11849))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0])))));
                            var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((2646779915U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6449093489383823286LL)) ? (((/* implicit */int) (unsigned char)191)) : (913277173))))))), (((((/* implicit */_Bool) 4093681151U)) ? (4110477535U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6007406249703178578ULL)) ? (((/* implicit */int) (unsigned short)24899)) : (((/* implicit */int) (unsigned char)116)))))))));
                            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_10))))))));
                            var_32 = ((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_1]))))) / (((((/* implicit */_Bool) arr_26 [i_8 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 |= ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4597))) > (((271942572599676612ULL) >> (((((/* implicit */int) (signed char)-63)) + (89)))))))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((12439337824006373067ULL) == (((/* implicit */unsigned long long int) 1226730470))))) & (((/* implicit */int) ((signed char) arr_0 [i_8])))))) ? (((((var_9) - (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_8] [i_1] [i_10])))) << (((((/* implicit */int) arr_20 [i_2] [i_1] [i_2 - 1] [i_8 - 4])) - (1))))) : (((/* implicit */int) var_7))));
                        }
                    }
                    var_35 = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    } 
}
