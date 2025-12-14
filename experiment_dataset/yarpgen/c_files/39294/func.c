/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39294
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-16898)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)16898)))), (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)(-32767 - 1))))))))));
    var_12 = ((/* implicit */_Bool) max(((unsigned short)46874), (((/* implicit */unsigned short) (_Bool)1))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)15360))) ^ (var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) (unsigned short)38135)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) (unsigned short)1833)))))) : (min((((/* implicit */unsigned long long int) (unsigned char)192)), (18092720071760642134ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (max((((/* implicit */unsigned long long int) min(((unsigned char)3), (((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_1]))))), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1833))) : (354024001948909486ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */short) var_4)), ((short)16912)));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((var_6), (((/* implicit */unsigned long long int) var_8)))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 14025605552917874344ULL);
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0 - 1] [i_1] [i_3] = ((/* implicit */unsigned int) (_Bool)0);
                    var_16 = ((/* implicit */unsigned short) var_3);
                    arr_13 [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (14025605552917874344ULL))), (((/* implicit */unsigned long long int) (~(arr_3 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (var_1)));
                }
                for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)205))))), ((+(var_6)))))) ? (((((arr_5 [i_0] [i_0] [7LL] [i_0]) && (((/* implicit */_Bool) arr_9 [11ULL] [i_1] [i_4] [i_5 - 3])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-16913)) : (2113929216))) : (((arr_15 [i_0] [i_0 + 1]) % (((/* implicit */int) var_2)))))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-16938)))))));
                        var_18 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)221));
                        arr_19 [5] [5] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)16352)) ? (((/* implicit */int) (short)-11597)) : (var_3))) + (2147483647))) << (((((arr_5 [i_0] [i_1] [i_1] [20LL]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))) - (185)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036821221376ULL)) ? (arr_18 [i_0 + 1] [i_1] [i_4] [(_Bool)1]) : (((/* implicit */int) (_Bool)0))))) | (var_1)))));
                        var_19 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_16 [i_0])) ? (var_6) : (14025605552917874346ULL))) | (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned short)22]))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_22 [i_6] [(unsigned short)17] [i_6] [9] [i_0 - 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 3] [i_5 - 3] [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_5 + 3] [(unsigned char)9] [i_0 + 1])) : (((int) 354024001948909482ULL))))), (var_1)));
                            arr_23 [i_0] [i_4] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((4421138520791677296ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 14025605552917874329ULL))))))) ? (((/* implicit */long long int) min((arr_15 [i_0 - 1] [i_1]), (arr_15 [i_0 + 1] [i_1])))) : (((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_5 + 1])) ? (-8520298414517246912LL) : (((/* implicit */long long int) arr_18 [i_0 + 1] [i_0 + 1] [19LL] [i_5 - 2]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_27 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) 580988233);
                            arr_28 [i_0] [i_1] [i_1] [i_4] [i_5 - 2] [i_5 - 3] [i_1] = ((/* implicit */short) var_0);
                            var_20 = ((/* implicit */_Bool) (unsigned char)201);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) ((unsigned short) (short)-16930))) : (((/* implicit */int) (unsigned short)46898))));
                            var_22 = ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1] [24LL] [i_0])) && (((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1] [21ULL] [i_5])));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 3) 
                        {
                            arr_31 [i_0] = (((_Bool)1) || (((/* implicit */_Bool) 4421138520791677269ULL)));
                            arr_32 [i_5 - 2] [i_5 - 2] [i_4] [i_1] = arr_21 [i_0] [i_1] [i_4] [i_5] [i_8];
                            var_23 = ((((/* implicit */_Bool) (-(arr_14 [(_Bool)1] [22ULL] [i_4])))) ? (((arr_5 [i_0] [i_1] [i_1] [i_5 + 1]) ? (4421138520791677279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16368))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))));
                            var_24 = ((/* implicit */unsigned int) ((arr_15 [i_0 + 1] [i_8 + 1]) == (arr_15 [i_0 + 1] [i_8 + 1])));
                        }
                    }
                    var_25 = ((/* implicit */unsigned int) arr_29 [i_0 - 1]);
                    var_26 = ((/* implicit */_Bool) (short)-11597);
                }
            }
        } 
    } 
}
