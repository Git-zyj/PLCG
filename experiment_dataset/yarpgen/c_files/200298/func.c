/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200298
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1))))), (var_2)))) << (((((/* implicit */int) var_6)) - (40502)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (134217727U))), ((+(134217727U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 4])) ? (arr_7 [i_2 - 3] [i_2 - 3]) : (arr_7 [i_2 - 2] [i_2 - 4])))) ? ((-(1574758945U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 - 4] [i_2 - 2])) ? (arr_7 [i_2 - 2] [i_2 - 3]) : (arr_7 [i_2 - 4] [i_2 - 4]))))));
                                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                                var_18 = ((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)10] [i_2 - 2] [i_0] [i_0]))) : (arr_3 [i_4] [i_1]))))));
                            }
                        } 
                    } 
                    arr_15 [(short)4] [(short)4] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(signed char)14] [i_2] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -198732039691722654LL)) ? (((/* implicit */unsigned long long int) 134217727U)) : (arr_3 [(short)11] [i_1]))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)21807)), (134217704U)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [9U]))) * (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_3)) : (134217727U)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                                var_19 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_6 - 3] [i_5] [i_5]) : (arr_4 [i_6] [i_6 - 3] [i_6 + 1]))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */long long int) 134217727U);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (var_8)));
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                {
                    arr_29 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((134217704U), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (9196869832091380745LL)));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned char)87);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9196869832091380745LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
}
