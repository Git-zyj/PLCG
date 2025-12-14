/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30312
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
    var_15 = ((/* implicit */short) ((unsigned short) -481099427));
    var_16 &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (-(var_6))))) - ((-(-481099427)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned short) var_2);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)930))) ^ (-2799780733880831078LL))))));
                    arr_10 [i_0] [i_1 + 1] [i_1 + 1] = max(((+(18446744073709551611ULL))), (((/* implicit */unsigned long long int) 481099427)));
                    arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)912))) % (17868029460646137923ULL)));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 2] [i_1 - 2])) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-16249)) : (((/* implicit */int) var_2)))) + (16259)))));
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_5 - 1])) ? (arr_2 [i_1 - 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                                arr_23 [i_5] [i_4] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) arr_12 [(signed char)9] [i_3] [i_5])) | ((+(18173514990157696716ULL)))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */_Bool) (((((-(2799780733880831069LL))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) 4677438674615445700ULL)) ? (arr_7 [i_0] [i_0] [i_1] [i_3]) : (((/* implicit */int) (unsigned short)64606)))) + (1595598545))) - (53)))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        arr_33 [i_0] [(signed char)6] [(signed char)6] [i_1 - 1] [i_6] [2ULL] = min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64606)) ? (2799780733880831050LL) : (-2799780733880831070LL)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30434))) | (7018000344713991282ULL))))), (arr_1 [i_0]));
                        arr_34 [12ULL] [5ULL] [5ULL] [i_7] = ((/* implicit */unsigned int) var_5);
                        arr_35 [i_1] = ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((18446744073709551600ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    }
                    arr_36 [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (arr_12 [i_6] [i_6] [i_6])))));
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_43 [(unsigned char)2] [4] [(unsigned char)2] [i_9] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((2120811482U), (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_8])))), (((/* implicit */unsigned int) max((var_2), (arr_21 [i_1] [i_1 - 1] [i_1 - 1] [i_8] [2] [i_9]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)64624), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_8]))))))))) : (max((((/* implicit */long long int) ((signed char) var_1))), ((-(2799780733880831078LL)))))));
                            arr_44 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */_Bool) min(((((+(((/* implicit */int) var_13)))) + (((/* implicit */int) max((((/* implicit */short) arr_32 [i_0] [i_1 - 2] [i_1] [i_8] [i_9])), (var_11)))))), (((((/* implicit */_Bool) (unsigned short)930)) ? (((/* implicit */int) (unsigned short)30427)) : (((/* implicit */int) (_Bool)1))))));
                            arr_45 [(_Bool)1] [i_9] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(short)5] [i_1] [(unsigned short)3] [i_1] [i_1 - 2]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned short)5] [(signed char)10] [i_1] [(signed char)2]))) ^ (var_10)))))));
                        }
                    } 
                } 
                arr_46 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((18173514990157696714ULL) << (((((/* implicit */int) (unsigned short)30427)) - (30367))))), (((/* implicit */unsigned long long int) arr_39 [i_1 - 1] [i_1 + 2]))))) ? (((((/* implicit */_Bool) (unsigned short)30432)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2120811482U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_47 [i_0] [i_1 + 2] = ((((((/* implicit */_Bool) (unsigned short)64606)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_1 - 2] [i_1 - 2])))) & (((arr_39 [i_1 - 2] [5]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_17 = max(((~(((var_10) ^ (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_7)));
}
