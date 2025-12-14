/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33872
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
    var_14 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 2])) + (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 2]))))), (arr_2 [i_0 + 1]))))));
                    arr_8 [i_0] [i_2] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)117);
                    arr_9 [i_0] [i_0] [i_2] [i_0 - 2] = ((/* implicit */int) ((min((arr_7 [i_0] [(unsigned short)20] [i_2 + 2] [i_0 - 2]), (((/* implicit */long long int) arr_0 [i_2] [i_2 - 1])))) | (((/* implicit */long long int) arr_0 [i_0 - 3] [7]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [i_3] [i_4] [i_3] [i_6] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((int) arr_15 [i_3] [i_4]))) / (arr_13 [i_4])))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) max((max((max((arr_20 [i_3] [i_4] [i_3] [i_3]), (var_2))), (arr_10 [i_7]))), (((unsigned long long int) min(((unsigned char)141), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) / (11848113955727196302ULL)))));
                var_18 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_3]))));
                arr_24 [i_4] [i_4] = ((/* implicit */long long int) ((short) ((_Bool) ((long long int) 8787357022588229173LL))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_19 += ((/* implicit */int) (-(min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) -33LL))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            {
                                arr_34 [i_3] [i_4] [i_4] [i_3] [i_10] [i_9] [i_10] = ((/* implicit */long long int) ((int) ((arr_31 [i_3] [i_3] [i_8] [i_9] [i_10] [i_3] [i_8]) / (arr_31 [i_3] [i_3] [i_8] [i_9] [i_10] [i_9] [i_9]))));
                                var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_3] [i_4] [i_10])), (arr_26 [i_3] [i_3] [i_4] [i_9]))))) + (((4ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57153))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3] [i_4] [i_8] [i_11] [12LL] [i_4])) ? (max((arr_14 [i_4] [i_11] [i_12]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_11]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (min((((/* implicit */unsigned long long int) ((_Bool) 4523539514054273811LL))), (max((18446744073709551605ULL), (624315402481039038ULL)))))));
                                arr_39 [i_3] [i_4] [i_3] [i_11] [i_12] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)8367)), (10ULL)))))) ? (3454646835774655414LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1627)) + (923461606))))));
                                var_22 = arr_31 [i_3] [i_3] [i_4] [i_4] [i_8] [i_11] [(unsigned char)13];
                            }
                        } 
                    } 
                    arr_40 [i_8] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_32 [i_4]);
                    arr_41 [i_4] [i_4] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_25 [i_8] [i_4] [i_3])), (20ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) + (arr_4 [i_8])));
                }
            }
        } 
    } 
}
