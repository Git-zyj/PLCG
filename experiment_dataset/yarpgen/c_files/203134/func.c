/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203134
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) max((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1573)))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (short)-3816))));
        var_20 = ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(max((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)1)))))) : (((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_0))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_1] = ((/* implicit */int) (+(((unsigned long long int) arr_0 [i_3 - 1]))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_22 *= ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) ((unsigned long long int) (short)-3787)))), (((long long int) (-(arr_5 [i_1 + 1] [12LL] [4U]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
                        {
                            arr_16 [i_1] [i_1 - 1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                            var_23 = ((unsigned long long int) (~(((/* implicit */int) (unsigned short)7398))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (short i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_6 - 1]))))), (((((/* implicit */_Bool) max(((short)24847), (arr_7 [i_6] [(unsigned char)22] [6LL] [i_7])))) ? (((/* implicit */unsigned long long int) arr_22 [i_7] [i_8])) : (arr_4 [i_6 - 1] [i_6 - 2]))))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max(((short)19498), (arr_24 [i_8] [i_8] [i_7] [i_6])))))) && ((!(((/* implicit */_Bool) arr_24 [i_6 + 1] [i_8 + 2] [i_8] [i_8])))))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned short) ((unsigned short) ((unsigned long long int) 0LL)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_8 - 1] [i_9 + 1] [i_10])) || (((/* implicit */_Bool) var_10))))) / (arr_17 [i_8]))), (((/* implicit */int) (unsigned short)51043))));
                                var_28 = (~(((((/* implicit */_Bool) arr_30 [i_9] [i_9] [i_8 + 1] [i_6 + 1] [i_6 - 3] [i_6 - 3] [i_9])) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_7] [i_9] [i_9])) : (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (short)-19519))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_30 = ((/* implicit */int) -3615587601062296259LL);
                var_31 = min((min((((/* implicit */unsigned long long int) var_15)), (arr_34 [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_11])) <= (((/* implicit */int) arr_13 [i_11] [i_12] [i_11] [i_11] [(unsigned short)17]))))));
                arr_38 [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) max(((unsigned short)51043), (var_1)))) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) max((1004623407), (((/* implicit */int) (unsigned short)13962))))) ? (((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */int) arr_7 [14ULL] [i_11] [(unsigned short)2] [i_11])))) : (((/* implicit */int) var_10))))));
                var_32 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((_Bool) arr_15 [(unsigned short)2] [i_12] [i_11] [i_12] [(unsigned short)18] [5U]))) + (((/* implicit */int) ((unsigned char) arr_32 [19]))))));
            }
        } 
    } 
}
