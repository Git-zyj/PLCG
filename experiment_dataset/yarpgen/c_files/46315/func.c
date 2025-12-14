/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46315
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
    var_15 = ((/* implicit */int) (+(var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [1LL])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))) || (((/* implicit */_Bool) max((max((arr_3 [i_0]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) arr_4 [i_0] [i_1])))))))))))));
                arr_6 [i_1] [i_1] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)4778)) >= (((/* implicit */int) arr_4 [i_0] [i_1])))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                var_17 = ((/* implicit */long long int) var_3);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [3U] [i_3 + 2] [i_0] [i_4] = ((/* implicit */_Bool) (short)32767);
                                arr_16 [i_0] [8U] [8U] [i_2 + 2] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) (+(var_4)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [(short)0] [i_0] [i_0] [i_0])) ? ((-(35150012350464ULL))) : ((+(35150012350465ULL))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((18446708923697201151ULL) % (35150012350464ULL))), (max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_1] [i_5] [i_6] [i_7] [i_5] [i_1])), (var_2)))))) ? (((/* implicit */int) (unsigned short)65524)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4130195143U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL)))))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (((var_0) >> (((var_14) - (6049166897972582955LL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_5 [i_1])))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_6]))))))));
                                var_21 = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_5] [i_6] [i_5] [4U]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */_Bool) var_14);
                                arr_33 [i_5] [8] [i_5] [3] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) * (18446708923697201151ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)15))));
                }
                var_23 &= min(((+(max((12844265691686102919ULL), (12722348377049757563ULL))))), (((/* implicit */unsigned long long int) min((((unsigned char) arr_22 [4U] [i_0] [i_0] [i_1])), (((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_13);
}
