/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207291
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (var_11)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (var_2)))))) ? (((/* implicit */long long int) (~(var_10)))) : (min((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_1])))));
                arr_5 [i_0] [(_Bool)1] = var_12;
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_20 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) var_19))), (((((/* implicit */int) arr_6 [i_0] [4U] [i_1] [i_2])) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                    var_21 = ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)0))))));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((_Bool) var_13));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_12 [i_0] [i_5] [i_0] [i_0] [i_5]))));
                                arr_14 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_13 [0U] [i_1] [i_3] [i_3])) & (((/* implicit */int) var_0))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((-(min((((/* implicit */unsigned long long int) var_12)), (var_3))))), (arr_2 [i_3] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) arr_11 [i_0] [i_6 - 2] [i_3] [i_6 + 3]);
                                arr_22 [i_7] [i_6] [i_3] [5ULL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6 - 2] [(unsigned short)2] [i_6 + 3] [i_6])))))) : (arr_3 [i_0])));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_18 [2] [12ULL] [i_3] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) var_6)), (arr_10 [i_0] [i_1] [i_3] [i_3])))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_1] [3] = ((/* implicit */int) arr_19 [i_0] [i_1] [i_8] [i_8 + 2] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        arr_30 [i_0] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) ((short) var_17)))))) <= (max((((/* implicit */long long int) 2842236051U)), (-6110295014822735794LL)))));
                        var_26 = ((/* implicit */long long int) max((2842236051U), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_37 [i_11] = arr_24 [i_0] [i_0] [i_8 - 1] [i_10];
                                arr_38 [i_11] [i_10] [i_11] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((6110295014822735789LL), (((/* implicit */long long int) 2946340703U))))), (var_3)));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? ((~(arr_11 [i_1] [i_10] [i_8 + 2] [i_1]))) : (arr_26 [i_8 + 1] [i_8 + 2] [i_8 + 2]))))))));
                                arr_39 [i_11] = ((/* implicit */unsigned char) min((max((max((((/* implicit */unsigned long long int) arr_35 [i_11] [i_10] [i_8] [i_1] [i_11])), (var_1))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_40 [i_8 - 1] [i_8] [i_1] = ((/* implicit */unsigned short) min(((-(442236710U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_11 [i_1] [i_1] [i_8] [i_8 + 1]), (((/* implicit */int) var_14))))) < (max((var_3), (((/* implicit */unsigned long long int) var_9)))))))));
                    arr_41 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(6110295014822735792LL)));
                }
                for (int i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((arr_11 [i_1] [i_1] [i_12] [i_1]) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) != (6110295014822735790LL))))))), (arr_9 [i_0] [i_0])));
                    arr_44 [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_12 - 1] [3] [8LL]), (arr_17 [i_12 + 1] [i_1] [i_0]))))) < (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_0))))) ? (arr_31 [i_12] [i_12] [1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    arr_45 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_16);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_51 [i_14] [i_12] = var_4;
                                arr_52 [i_0] [i_0] [i_14] [i_0] = max((arr_6 [(unsigned short)12] [(unsigned char)6] [i_13] [i_13]), (((unsigned char) (unsigned char)85)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (+(var_19)))), ((+(var_13)))))));
}
