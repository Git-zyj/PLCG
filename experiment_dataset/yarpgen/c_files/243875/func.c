/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243875
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
    var_11 &= ((/* implicit */int) ((((((/* implicit */_Bool) 2307654337U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (5999899938590861317LL))) > (8774791534945093635LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5999899938590861301LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_3] [i_1]))) : (arr_1 [i_0])))))) == (max((13881953735880628779ULL), (((/* implicit */unsigned long long int) min((3604223507424504413LL), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_13 = ((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_2] [i_2] [i_1] [6LL]);
                                var_14 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])), (13881953735880628782ULL))) >> (((((((/* implicit */_Bool) (unsigned short)39016)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_4]))))) - (18929120U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4]))) : (min((((/* implicit */unsigned int) (signed char)-97)), (arr_1 [i_3]))))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((4503530907893760ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0]))))) && (((/* implicit */_Bool) var_4)))))) - (((((/* implicit */_Bool) max(((short)-5476), (((/* implicit */short) (_Bool)0))))) ? (((6242968099243824650LL) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))))) : (min((-3604223507424504421LL), (((/* implicit */long long int) arr_4 [i_3] [i_2] [i_0]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) ((((-3604223507424504414LL) + (9223372036854775807LL))) >> (((((((/* implicit */unsigned long long int) ((1033580421791557628LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))) & (max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_0] [i_0])), (18442240542801657856ULL))))) - (1031324314667843574ULL)))));
                    var_17 = ((/* implicit */long long int) max((((((/* implicit */int) var_6)) - (arr_10 [i_2] [i_1] [i_0]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2])) % (arr_0 [i_2] [i_0])))) == (((((/* implicit */_Bool) 16760832U)) ? (2797505497U) : (((/* implicit */unsigned int) arr_10 [10ULL] [i_1] [i_2])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33687)) | (((((/* implicit */_Bool) (unsigned short)31848)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (arr_0 [i_0] [(signed char)10])))));
                }
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (min((min((10196415535835892624ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [1ULL])))), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0]) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_1])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_21 &= ((/* implicit */long long int) var_2);
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7]))) != (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) : (arr_9 [i_6])))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [(unsigned short)5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_6] [i_1] [i_0]))) : (4503530907893786ULL))) : (18442240542801657856ULL)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_6 [i_8] [i_6] [i_1] [i_0]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_1 [i_0]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */short) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0])) * (((((/* implicit */int) arr_7 [i_9] [i_9] [i_6] [i_6] [i_1] [i_0])) / (((/* implicit */int) arr_11 [(_Bool)1] [i_6] [i_1] [i_0]))))));
                    }
                    for (short i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_14 [i_1]))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (signed char)-87))));
                    }
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-102)))) ^ (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_16 [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 4; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) min((var_32), (arr_2 [i_6])));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5319319710208150395ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_25 [i_12] [i_11] [i_6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4564790337828922844ULL))) : (((/* implicit */unsigned long long int) arr_30 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 1]))));
                                var_34 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_12] [i_12 - 3] [i_11] [i_1]))) ^ (arr_1 [i_12 + 1])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 1) 
                    {
                        var_35 += ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49597))) : (arr_20 [i_0] [i_0] [i_0] [i_0]))) : (arr_22 [i_0] [i_0] [i_14])));
                            var_37 = ((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) + (2147483647))) >> (((arr_0 [i_0] [i_0]) + (417852485)))));
                        }
                        var_38 = ((/* implicit */short) arr_26 [i_0] [i_1] [i_13] [i_14 + 1]);
                        var_39 = ((/* implicit */short) (unsigned char)163);
                    }
                    var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7970538004770020505LL))) & (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_3 [i_13] [i_0])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 17; i_16 += 1) 
    {
        var_41 = ((/* implicit */long long int) arr_40 [i_16]);
        var_42 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_41 [i_16] [i_16 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_39 [i_16])))) > (-1405616258)));
    }
}
