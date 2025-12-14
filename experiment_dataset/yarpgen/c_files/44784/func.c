/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44784
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((21ULL) + (((/* implicit */unsigned long long int) 4130873112U)))) - (((/* implicit */unsigned long long int) 7260504922434132492LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) : (-3187983745190409929LL))))));
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0 - 3]), (((/* implicit */unsigned long long int) (signed char)115))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((short) (_Bool)1)))));
                            arr_11 [i_3] [i_3] [i_0] [i_1] [i_0 - 1] = ((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_0 + 3])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_16 *= ((/* implicit */_Bool) (((_Bool)1) ? (1206786223914521231LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_17 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) var_12)))) ? ((-(7864061408757999177LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (signed char)84)))))));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0 + 2] [i_0 + 2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_6]))) : (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29986))) : (542416519U))))), (((/* implicit */unsigned int) (signed char)-84))));
                            var_18 = ((/* implicit */_Bool) 3752550791U);
                            arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned char) 5485735448223993256LL);
                        }
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_14 [i_0] [i_0] [i_4] [i_5] [i_1]), (((/* implicit */signed char) (_Bool)1)))), (arr_15 [i_0])))) ? (((((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_4 - 1] [i_5])))) % (((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_7 [i_5] [i_4] [i_1] [i_0])))))))));
                        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (((-(3456534465U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-8695)))))) : (((arr_3 [i_4] [i_5]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-84))))) : (((unsigned long long int) arr_13 [i_1]))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_4] [i_5] [i_4]))));
                    }
                    var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (838432827U)))) ? (arr_12 [i_0] [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_4 + 2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_15 [i_0])))))));
                    var_23 = ((/* implicit */unsigned char) var_8);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((min((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7])))))));
                        var_25 = (unsigned char)218;
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_26 += ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_15 [i_1]))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_8] [i_4 + 1])) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) (_Bool)1))))));
                        arr_26 [i_0] [i_0] [i_4] [i_8] = ((/* implicit */long long int) ((155538873211054922LL) != (arr_13 [i_0 + 3])));
                        var_27 += ((/* implicit */unsigned char) (((_Bool)1) ? (67108863LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) (_Bool)0);
                            arr_29 [i_0] [i_8] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [(_Bool)1] [i_0] [i_8] [i_0]))) > (3456534465U))))) : (((((/* implicit */int) max((arr_28 [i_0 + 2] [i_0] [i_4] [(unsigned char)15] [i_0 + 2] [i_9] [i_9]), (var_8)))) / (((/* implicit */int) ((542416519U) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                        }
                    }
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_0] [i_0 + 3]), (arr_10 [i_0] [i_0 + 3]))))) * (3228241888093518336ULL))))));
                    var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1])) * (((/* implicit */int) arr_15 [i_1]))))) ? (((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_15 [i_1]))));
                }
            }
        } 
    } 
}
