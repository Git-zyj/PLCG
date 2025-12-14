/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190881
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
    var_20 = ((/* implicit */unsigned short) ((min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) ^ (var_14)));
    var_21 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27793))) : (var_7))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (var_7))))) << (((var_14) - (18162826632428927043ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-((+(3645650878574252769ULL)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) var_19);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = var_10;
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_20 [i_0] [6LL] [i_0] [i_0])))) > (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_13))))))) * (max(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_2]))))))));
                                var_24 = ((/* implicit */_Bool) arr_22 [i_0] [(_Bool)1] [i_0] [i_1 + 2] [i_1 + 1] [i_0]);
                                var_25 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 3])))));
                                arr_24 [i_0] [i_2] [i_5] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0])) >> (((arr_5 [i_0] [i_5] [i_2] [i_0]) - (8493541573212873592ULL)))))))) : (((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0])) >> (((((arr_5 [i_0] [i_5] [i_2] [i_0]) - (8493541573212873592ULL))) - (15791524718687658338ULL))))))));
                            }
                        } 
                    } 
                    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [10LL]))) % ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [19ULL] [i_1 + 3] [i_2] [i_1 + 3] [i_2] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_1 - 1] [(short)16] [i_1 - 1])) : (((/* implicit */int) arr_21 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 3])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_32 [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_19 [i_9] [(_Bool)1] [i_7])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_7])), (arr_6 [i_8 + 1])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_28 [i_7] [i_8] [i_9]))) : (((/* implicit */unsigned long long int) arr_1 [i_8 - 2])))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_9] [i_8] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) min((arr_1 [i_7]), (arr_1 [i_7])))) ? (((((/* implicit */_Bool) arr_28 [i_7] [i_8 - 2] [i_9])) ? (arr_28 [(_Bool)1] [i_8 - 2] [(_Bool)1]) : (arr_28 [i_7] [i_8 + 1] [i_8 + 1]))) : (((max((var_5), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                                arr_40 [i_7] [i_8 - 2] [i_9] [(unsigned short)10] [(signed char)7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_7] [i_8] [i_9])) ? ((-(((/* implicit */int) arr_12 [i_10] [i_8])))) : (((((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((arr_38 [i_7] [i_8 + 1] [i_9] [i_8 + 1] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) var_18))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
