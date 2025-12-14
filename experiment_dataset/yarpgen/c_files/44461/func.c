/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44461
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1808815198U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_16 [i_4] [i_3 + 1] [i_3 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                            arr_17 [i_4] = ((((/* implicit */_Bool) -269259311)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_3] [i_3 + 1] [i_3 + 1]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_4 - 1])) || (((/* implicit */_Bool) -269259311))))), (arr_4 [i_1 + 1] [i_3 + 2] [i_4 - 1]))));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_4 - 1] [i_0] [i_0] [i_0] [i_0])) : (arr_2 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (arr_8 [i_0] [i_2])))) ? (-269259311) : (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2]))))))) == (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) * ((-(((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                arr_24 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 + 1]), (arr_10 [i_0] [i_0] [i_1 + 1] [i_0] [i_0])))) ? (var_12) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_5]))));
                arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1808815198U)) ^ (arr_1 [i_5] [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_14)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_5] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_1))))))), (((((((/* implicit */_Bool) 269259330)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_1 + 1] [i_5]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -269259323)) ? (((/* implicit */unsigned int) -269259319)) : (1808815198U))))))));
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])), (((((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_5])) - (((/* implicit */int) arr_12 [i_5] [i_5] [i_1 - 1] [i_0]))))));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_30 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_2 [i_0] [i_0])));
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_28 [i_6] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2486152097U))))))));
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0])))) ? (min((arr_8 [i_0] [i_0]), (arr_8 [i_6] [i_0]))) : (arr_8 [i_0] [i_6])));
            arr_33 [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_28 [i_0] [i_6]), (((/* implicit */long long int) -269259312))))) ? (((int) var_10)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))) * (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -364592008)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_38 [i_7] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_7] [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_7] [i_7] [i_7] [i_7] [i_7])) : (arr_9 [i_7] [i_0])));
            arr_39 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            arr_41 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_7] [i_7])) : (((/* implicit */int) var_4)))))));
            arr_42 [i_7] = ((/* implicit */_Bool) var_1);
        }
        arr_43 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_44 [i_0] |= ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_0] [i_0])), ((~(((((((/* implicit */int) var_1)) + (2147483647))) >> (((arr_4 [i_0] [i_0] [i_0]) - (3769238381802502753ULL)))))))));
    }
    var_17 = ((/* implicit */short) max((-269259299), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_16) : (var_16)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 18446744073701163008ULL)) ? (var_7) : (((/* implicit */int) var_8))))))));
}
