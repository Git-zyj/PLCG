/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47539
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] |= min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((16653757235761118224ULL), (3688228512849397899ULL))))))), (max((arr_4 [i_0 - 1] [i_1 - 1]), (var_7))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= (+(((11315231800984502006ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
                    arr_12 [5ULL] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [(unsigned char)0])) >> ((((-(((/* implicit */int) var_16)))) + (31)))))) * (min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_8))))));
                    arr_13 [(unsigned char)0] [(unsigned char)6] [(unsigned char)0] &= arr_6 [(unsigned char)11] [i_2];
                }
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) (unsigned char)208)) ? (16598418223438283067ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))));
                                arr_22 [i_0] [i_5] [i_4] [i_5] = min((13745535383779809492ULL), (((/* implicit */unsigned long long int) (unsigned char)10)));
                                arr_23 [2ULL] [i_5] [i_3 + 1] [11ULL] [i_4] [4ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1 + 1])) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))))) || (((((/* implicit */_Bool) ((unsigned char) var_7))) || ((!(((/* implicit */_Bool) var_2))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) var_8);
                                var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)126))))) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) arr_3 [(unsigned char)8] [i_0 + 1] [2ULL])))), (((/* implicit */int) (unsigned char)186))));
                                var_20 = arr_1 [i_0 - 1];
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))), (((/* implicit */int) (unsigned char)108))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)47))));
                    arr_33 [i_1 + 1] [i_8 + 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (arr_8 [i_0] [i_0 - 1] [i_0] [i_0])));
                }
                var_23 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 3) 
                {
                    var_24 *= ((/* implicit */unsigned long long int) ((((arr_34 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((unsigned long long int) (unsigned char)135))));
                    arr_36 [i_0] [i_1] [i_0] = (+(12ULL));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 4; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                                var_26 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    arr_42 [5ULL] = var_11;
                }
                arr_43 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (arr_34 [5ULL] [5ULL]))), (min((arr_18 [0ULL] [i_1] [i_1] [i_0] [0ULL]), (((/* implicit */unsigned long long int) (unsigned char)208)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            {
                arr_51 [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * ((-(((((/* implicit */_Bool) var_3)) ? (3589700290559413632ULL) : (7623255115286418592ULL)))))));
                var_27 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((unsigned char) arr_50 [(unsigned char)13] [i_12]))))));
                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)107))));
            }
        } 
    } 
}
