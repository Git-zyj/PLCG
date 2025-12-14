/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212208
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
    var_19 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) && (((/* implicit */_Bool) arr_1 [i_0])))))) + (((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) (short)21617);
        arr_3 [(signed char)1] [(signed char)1] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_21 = ((/* implicit */_Bool) 8228375671669143718LL);
    /* LoopSeq 3 */
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) 3234678809U)), (-7838142607486938956LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) + (890141595U)))) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1]))))))) : (-5799182400588663707LL));
        arr_7 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (4290830699U)));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    var_22 = arr_12 [(signed char)6] [i_3] [(signed char)6];
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_12 [i_2] [i_3] [i_4]))))) & (((var_17) << (((((/* implicit */int) (unsigned short)49945)) - (49915)))))))) : (6908242542960991953LL))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        var_24 -= ((/* implicit */signed char) var_6);
                        var_25 = ((/* implicit */unsigned char) ((((long long int) arr_14 [i_2] [i_2] [i_2 - 1] [i_2 - 1])) / (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58225)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_3] [i_4] [i_2] [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (88673943U))))))));
                        arr_18 [i_5] [i_4] [i_3] [i_3] [(unsigned char)11] [i_2] = ((/* implicit */signed char) ((((arr_12 [i_2] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_4 - 1] [i_3])) : (((/* implicit */int) arr_12 [i_4 - 1] [i_3] [i_2 - 1])))) & (2147483647)));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_3])) ? ((+(arr_11 [i_3] [i_4 - 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
                        arr_23 [i_3] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3416806657U)), (5479089505455720905ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned short)14402)) : (-97377954)))) : ((-(arr_13 [i_2 - 1] [i_2 - 1]))))), ((~(min((0ULL), (((/* implicit */unsigned long long int) 3928910967U)))))));
                    }
                    var_27 -= ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)148)))) & (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_2 - 1])))) & (((arr_10 [i_2] [i_3]) | (((/* implicit */int) arr_9 [i_2]))))));
                    arr_24 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */signed char) (((((((~(((/* implicit */int) (unsigned char)64)))) & (((/* implicit */int) (signed char)-25)))) + (2147483647))) >> ((((~(((((/* implicit */_Bool) 0)) ? (var_3) : (((/* implicit */int) (short)9047)))))) + (9068)))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) == (arr_17 [6ULL] [(unsigned char)6] [(unsigned char)6] [i_2 - 1] [10ULL])));
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) (+(var_14)));
        arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) << (((-4435524505452363189LL) + (4435524505452363219LL))))) + (((/* implicit */int) arr_26 [i_7]))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(3846174638U)))))) ? ((-(((/* implicit */int) (unsigned short)16383)))) : (((((/* implicit */int) (short)21013)) / (arr_25 [i_7])))));
    }
}
