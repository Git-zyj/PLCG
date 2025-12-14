/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204538
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_12 *= ((/* implicit */unsigned long long int) arr_5 [10LL] [i_2]);
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                    var_13 = ((/* implicit */long long int) ((signed char) arr_5 [i_0] [i_0]));
                    arr_9 [i_0] [i_0] [3LL] = ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)8] [i_0]);
                }
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_3] [i_3])) ? (arr_10 [i_1] [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((15551421012177226726ULL), (var_2)))))) ? (((/* implicit */int) ((unsigned short) (-(var_6))))) : (((/* implicit */int) arr_1 [(unsigned short)5] [(signed char)0]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_5 [i_0 - 1] [(signed char)11]))))));
                                arr_20 [i_0] [i_5] [(signed char)5] [6LL] [15ULL] [i_5] = arr_7 [i_0 - 4] [i_1] [11LL] [i_4];
                                var_16 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_11 [i_0] [i_1] [i_3] [i_5 + 2])));
                            }
                        } 
                    } 
                }
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_4))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((unsigned long long int) arr_22 [i_8]))))));
                    var_19 = ((/* implicit */long long int) arr_28 [i_7 + 2] [i_7 + 1] [i_7 - 1]);
                    arr_29 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */signed char) arr_26 [i_8]);
                    var_20 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6])) ? (var_3) : (15551421012177226728ULL)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_21 = ((signed char) (-(arr_31 [i_6] [i_6])));
                    arr_34 [i_6] [i_6] = ((((/* implicit */_Bool) arr_31 [i_6] [i_7 + 2])) ? (arr_33 [i_6] [i_7 + 2] [i_7 - 1] [i_9]) : (arr_26 [(unsigned short)8]));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)67))));
                    arr_35 [i_9] [i_7] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) / (2895323061532324890ULL)))));
                }
                var_23 ^= (unsigned short)47547;
            }
        } 
    } 
}
