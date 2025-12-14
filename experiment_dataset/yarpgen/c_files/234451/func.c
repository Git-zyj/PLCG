/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234451
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [(unsigned short)18] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60387))));
                    arr_9 [i_2] = ((max((var_2), (var_2))) >> (((((var_0) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_1))))) - (4819228155569386871ULL))));
                    arr_10 [i_2] = ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_2))) : (((var_2) & (var_8))));
                    arr_11 [1ULL] [i_1] [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) ? ((((-(var_3))) + (var_9))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_3)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_4] [(signed char)16] [i_1] [i_0] = (+((-(var_1))));
                                arr_17 [12ULL] [12ULL] [i_2] [i_4] [i_4] = (~(((var_8) % (var_9))));
                                arr_18 [(unsigned short)1] [i_4] [i_4] [i_4] [(signed char)9] = var_7;
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    arr_22 [(unsigned short)5] [i_1] [i_5] = ((((/* implicit */_Bool) ((signed char) var_3))) ? (var_1) : (((((var_7) == (var_7))) ? ((~(var_9))) : (var_4))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_0)))));
                                arr_30 [i_0] [i_0] [(signed char)17] [i_1] [i_0] [i_5] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) - (var_2))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) ((unsigned long long int) ((var_9) == (var_5))))) ? (var_0) : ((((!(((/* implicit */_Bool) 12450500965953239967ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (var_7))) : (var_8))));
                    arr_32 [i_0] [i_5] = var_9;
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_39 [i_5] [i_1] [i_5] [i_8] [10ULL] = ((/* implicit */unsigned short) var_4);
                                arr_40 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_4))) ? ((~(var_5))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (var_2)))));
                                arr_41 [(signed char)13] [i_1] [i_5] [i_5] [i_8] [(unsigned short)12] [(unsigned short)12] = ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_2) : (var_7))))));
                                arr_42 [i_0] [i_5] [(signed char)9] [(signed char)9] [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_7)));
                            }
                        } 
                    } 
                }
                arr_43 [10ULL] [i_1] [9ULL] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60406))) <= (1152921504606846975ULL)))));
            }
        } 
    } 
    var_10 = ((/* implicit */signed char) var_9);
    var_11 = var_8;
    var_12 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((signed char) 5996243107756311648ULL))))), (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
}
