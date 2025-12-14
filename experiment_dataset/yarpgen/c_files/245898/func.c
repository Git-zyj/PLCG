/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245898
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned int) ((arr_2 [i_0] [i_1]) & (((/* implicit */long long int) arr_1 [i_0]))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34687))) <= (((((/* implicit */_Bool) -2577129392545574015LL)) ? (1145180741170981989LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_15)) ? (var_1) : (var_9))), (((/* implicit */unsigned int) var_11))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8014611956542165280LL) & (((/* implicit */long long int) 3836572140U))))) ? (((((/* implicit */_Bool) ((var_3) >> (((var_7) + (2756459359336294632LL)))))) ? (((/* implicit */long long int) arr_8 [(unsigned short)5])) : (arr_5 [i_2] [i_2]))) : (((long long int) 6632550958502944577LL))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_13 [i_2 - 4] [i_3] [i_3] [i_2 - 4] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) var_8));
                        arr_14 [i_4] [i_3] [i_3] [8LL] = var_8;
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) arr_11 [i_2] [5U] [i_4]);
                            arr_23 [i_2 - 3] [i_4] [i_2] [i_6] [i_7 - 1] = ((/* implicit */unsigned short) ((long long int) var_6));
                            arr_24 [i_2] [i_3] [i_4] [i_6] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_4]))) ? (((((/* implicit */_Bool) arr_1 [i_6])) ? (var_7) : (((/* implicit */long long int) 33553408U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17804)))));
                        }
                        arr_25 [i_2] [i_3] [i_3] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2] [i_2 - 3])) ? (arr_12 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 - 2]) : (arr_12 [i_2] [i_2] [(unsigned short)6] [i_2 - 3] [i_4] [i_4]));
                    }
                }
            } 
        } 
    } 
    var_22 = (~(((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) var_6)))));
    /* LoopNest 3 */
    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            {
                                arr_41 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [0LL] = (-(var_10));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((-(286682363530266938LL))) >= (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [(unsigned short)10] [11U] [i_12])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))))))));
                                var_24 = ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9])) ? (((((/* implicit */_Bool) arr_36 [i_8 + 1] [i_9] [i_9] [i_11] [i_12] [(unsigned short)11])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [(unsigned short)6] [i_8 - 1] [i_8 + 1] [i_8] [12U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_17 [i_8] [i_12]) : (arr_5 [i_9] [i_8]))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -3759422980398427806LL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 12; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */long long int) (-((-(var_10)))))) : ((+(var_7)))));
                                arr_49 [i_8] [i_14] [i_10] [i_13] = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) 2147352576U)), (-1145180741170981989LL)))))) ? (3848925663U) : ((+(3801540592U)))));
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8014611956542165280LL)) ? (arr_33 [i_8] [i_8] [i_10]) : (arr_33 [i_8 + 1] [i_9] [i_10]))) > (((unsigned int) arr_33 [i_8 + 1] [i_9] [4LL]))));
                }
            } 
        } 
    } 
}
