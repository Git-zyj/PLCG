/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23798
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
    var_20 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((long long int) var_4))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_17);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_10 [i_0] [i_1 - 2] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_9 [i_1 + 1] [i_1 - 2] [i_1 - 3]));
                arr_11 [i_0] = ((/* implicit */_Bool) arr_0 [i_1]);
            }
        }
        for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_0] [i_3 - 3] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_17)))) || (((/* implicit */_Bool) arr_6 [i_0]))));
                arr_17 [i_3 - 3] [i_3] [i_4] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0]))) ? (arr_13 [i_4] [i_0]) : (((/* implicit */long long int) max((729284290U), (((/* implicit */unsigned int) (_Bool)1)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_21 [i_5] [i_3] [i_3] [i_3 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_3 - 3] [i_0]), ((unsigned short)1987))))) - (((((/* implicit */_Bool) var_17)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_3 - 4])), (var_14))))));
                var_21 = ((arr_19 [i_0] [i_3] [i_5] [i_5]) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_3 - 3])) / (arr_14 [i_3] [i_3 + 1] [i_3 - 4] [i_3])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_6 = 4; i_6 < 10; i_6 += 1) 
                {
                    arr_26 [i_0] [i_3] [i_5] [i_5] [i_6] &= ((/* implicit */unsigned char) ((arr_20 [i_6 - 3] [i_5] [i_3 - 1] [i_6]) < (arr_20 [i_6 + 1] [i_5] [i_3 - 1] [i_6])));
                    arr_27 [i_0] [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 - 4] [i_5] [i_6 - 4] [i_6 - 4])) || (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_0] [i_6 - 1]))));
                    var_22 |= ((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [i_6 - 3] [i_6] [i_6 + 2]);
                    var_23 = ((/* implicit */_Bool) arr_20 [i_0] [i_3] [i_5] [i_6]);
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_30 [i_5] [i_5] [i_3] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3 - 2] [i_3] [i_3 + 1])) ? (arr_19 [i_3] [i_3 - 4] [i_3 - 4] [i_3 - 4]) : (((/* implicit */unsigned long long int) 1985798805U))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (min((((((/* implicit */_Bool) (unsigned short)61050)) ? (((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_0])))))) : (arr_19 [i_0] [i_3 - 3] [i_5] [i_7]))), (((/* implicit */unsigned long long int) 6042471286641404043LL))))));
                }
                for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
                {
                    arr_33 [i_0] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_23 [i_8] [i_8 - 2] [i_8 - 4] [i_8] [i_8 + 1] [i_8 + 1])))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned short)61050)), (var_2))))))));
                    var_25 = ((/* implicit */unsigned int) ((arr_32 [i_3 - 2]) && (((/* implicit */_Bool) min((6042471286641404043LL), (((/* implicit */long long int) (_Bool)0)))))));
                    var_26 *= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_8 [i_3 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 3]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (-(arr_24 [i_3 - 3] [i_5] [i_5] [i_9] [i_0])));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned char)133))));
                    var_29 |= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_3 - 3] [i_3] [i_5])) : ((~(((/* implicit */int) (unsigned char)122))))));
                    arr_38 [i_5] [i_3 - 4] [i_3] = ((/* implicit */long long int) var_4);
                }
                arr_39 [i_5] = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0])));
                arr_40 [i_0] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_15)))) >> (((((unsigned long long int) 2193087716U)) - (2193087714ULL)))))), (var_18)));
            }
            arr_41 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) var_19);
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((unsigned int) 4850643678894881281LL))) * (7414420590692839575ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_46 [i_10] [i_10] [i_10] = (-(((int) ((((/* implicit */_Bool) (short)13330)) ? (((/* implicit */int) (short)13330)) : (((/* implicit */int) (unsigned char)127))))));
            arr_47 [i_10] = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_24 [i_0] [i_0] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) arr_12 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 4; i_11 < 8; i_11 += 1) 
            {
                arr_52 [i_10] [i_10] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned int) var_19)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_16))))), ((-(var_7)))))));
                arr_53 [i_10] = (!(((/* implicit */_Bool) arr_25 [i_0] [i_11])));
            }
        }
        for (unsigned int i_12 = 2; i_12 < 10; i_12 += 4) 
        {
            arr_56 [i_0] [i_0] = ((/* implicit */_Bool) (((+(((arr_19 [i_12] [i_12] [i_0] [i_0]) - (((/* implicit */unsigned long long int) 885530726)))))) >> (((775201632U) - (775201589U)))));
            var_30 = ((/* implicit */int) (unsigned char)149);
            arr_57 [i_12] &= ((/* implicit */int) max((((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_12 [i_0])), (arr_55 [i_12]))) >> (((arr_2 [i_12 + 2]) - (3638930132U)))))), ((~(arr_0 [i_12 - 1])))));
            var_31 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_10)))) > ((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_50 [i_0] [i_12] [i_12])))))))));
        }
    }
    var_32 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)20))))) ? (0ULL) : (((/* implicit */unsigned long long int) 4294967294U))))));
}
