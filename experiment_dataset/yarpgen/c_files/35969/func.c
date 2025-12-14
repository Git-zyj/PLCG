/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35969
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
    var_20 += ((/* implicit */int) max((var_18), (var_18)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (((((/* implicit */_Bool) (unsigned short)37002)) ? (4088857285480077870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2])))))));
                    arr_10 [i_0] [(unsigned short)6] [i_0] [i_1] = ((/* implicit */int) arr_3 [i_0]);
                    var_22 = ((/* implicit */unsigned long long int) var_14);
                    var_23 = ((/* implicit */unsigned char) var_19);
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_24 = min((-1716090150), (((/* implicit */int) (unsigned short)28534)));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)20647), (((/* implicit */unsigned short) (unsigned char)188))))) > (((/* implicit */int) ((var_10) <= (((/* implicit */int) var_16))))))))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    arr_15 [i_4] [i_0] [i_0] [i_0 + 1] = (unsigned char)188;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) arr_8 [5] [i_1] [i_5]);
                                arr_21 [i_0 - 1] [(unsigned char)9] [(unsigned char)9] [i_0] [11] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967283U)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned int) -1563062691)), (2792392703U))));
                    arr_22 [i_0] [i_1] [i_4 + 2] [i_4] = ((/* implicit */unsigned char) (-(min((max((((/* implicit */int) var_11)), (var_4))), (((int) arr_4 [i_0] [i_1] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_7 + 3])) / (var_15)))) / (((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_4 + 3])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_8 [3] [i_0 + 2] [i_4 + 1])))));
                                var_29 *= ((/* implicit */unsigned char) (-(arr_17 [i_8 - 2] [i_0 - 1] [i_4 + 3] [i_7 + 2])));
                                var_30 ^= ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) var_16)), (var_19))) << (((((unsigned int) arr_18 [i_0 - 2] [4])) - (3305836167U))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_17 [i_0] [i_0] [i_0] [i_0 - 2]) : (((/* implicit */long long int) arr_7 [i_0]))))) ? (((var_10) + (var_3))) : (((/* implicit */int) arr_13 [8ULL])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
                {
                    var_31 = max((((unsigned int) arr_16 [i_0 + 2])), (((/* implicit */unsigned int) arr_13 [i_0])));
                    var_32 = ((/* implicit */int) var_5);
                    var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_9 + 1] [i_9 + 3] [i_9 + 1])) || (((/* implicit */_Bool) arr_4 [i_9 + 1] [3ULL] [i_9 + 2]))))) << (((((1907606195) - (1477445798))) - (430160397)))));
                }
                arr_31 [i_0] [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 + 2]) : (((/* implicit */unsigned int) var_15)))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_34 = ((/* implicit */int) ((unsigned char) (unsigned char)251));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 9; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4356318647596257631LL)) ? (((/* implicit */int) (unsigned short)65527)) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 409458731U)), (458752LL)))) ? (((((/* implicit */_Bool) (unsigned char)196)) ? (var_1) : (var_1))) : (((/* implicit */int) (unsigned short)54733)))))))));
                                arr_39 [i_0] [i_10] [(unsigned char)10] [i_12] = ((((/* implicit */_Bool) min((arr_35 [i_11 + 1] [(unsigned char)1] [i_0] [i_11 + 3]), (arr_35 [i_11 + 2] [i_11] [i_0] [i_11 - 1])))) ? (max((var_7), (arr_35 [i_11 - 2] [i_11] [i_0] [i_11 + 3]))) : (((/* implicit */int) ((unsigned short) 16867008827447022753ULL))));
                                var_36 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (31LL) : (((/* implicit */long long int) 0U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 8; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 8; i_14 += 4) 
                        {
                            {
                                var_37 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (unsigned char)182))) < (max((((unsigned int) 4640092531929101444ULL)), (((/* implicit */unsigned int) (unsigned char)18))))));
                                var_38 = ((/* implicit */int) min((var_38), (min((((/* implicit */int) arr_2 [(unsigned char)1])), (var_0)))));
                            }
                        } 
                    } 
                    arr_47 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) (unsigned short)37018));
                }
                var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_43 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [(unsigned short)2] [i_0 - 1])) : (((/* implicit */int) arr_43 [i_0 + 1] [i_0] [3] [i_0] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) min((arr_43 [i_0 - 1] [1LL] [1LL] [1LL] [i_0] [i_0 + 2]), (arr_43 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 2])))) : (((/* implicit */int) max((arr_43 [i_0 - 1] [(unsigned short)11] [(unsigned short)11] [i_0] [i_0] [i_0 - 1]), (arr_43 [i_0 - 1] [4] [4] [i_0 + 2] [3] [i_0 - 1]))))))));
            }
        } 
    } 
}
