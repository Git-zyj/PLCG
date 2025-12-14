/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236474
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) (unsigned short)65535);
                        var_16 = ((/* implicit */int) arr_2 [i_3]);
                        arr_14 [i_0] [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
                        var_17 += ((/* implicit */signed char) var_0);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_3 - 2] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32650)))))) ? (((/* implicit */int) (short)32649)) : (((/* implicit */int) arr_3 [i_0]))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [(unsigned char)5] [(unsigned char)5] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_3 - 2] [i_3] [i_2] [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min(((short)28038), (((/* implicit */short) (unsigned char)141))))) ? (var_14) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_8)))))));
                                var_20 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_4] [i_4] [i_0] [i_0] [i_0])) << (((((((/* implicit */_Bool) -1174269702)) ? (((/* implicit */unsigned long long int) var_12)) : (var_6))) - (2705462241ULL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */short) var_2);
                                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] [i_7]))) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-20))));
                                var_23 = (i_0 % 2 == zero) ? (((/* implicit */signed char) (((-(((3460323988U) ^ (((/* implicit */unsigned int) 1144433195)))))) - (((/* implicit */unsigned int) (((((~(arr_25 [i_0] [i_0]))) + (2147483647))) << (((((arr_7 [i_6 + 2] [i_1] [i_0] [i_0]) + (175734163))) - (2))))))))) : (((/* implicit */signed char) (((-(((3460323988U) ^ (((/* implicit */unsigned int) 1144433195)))))) - (((/* implicit */unsigned int) (((((~(arr_25 [i_0] [i_0]))) + (2147483647))) << (((((((arr_7 [i_6 + 2] [i_1] [i_0] [i_0]) + (175734163))) - (2))) - (1692986829)))))))));
                                arr_29 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((1217139808U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) << ((((+((-(var_9))))) + (133749188)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) 8505492475452822663LL);
                                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1] [i_0]))))))) > (((/* implicit */int) ((var_9) > (((((/* implicit */_Bool) 17198706465963651011ULL)) ? (((/* implicit */int) (short)-23087)) : (var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 11; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) var_5);
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)138))) : (var_6)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_27 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0]))) + (arr_7 [i_0] [i_10] [i_0] [i_11])));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        arr_48 [i_0] [i_10] [i_10 + 2] [i_10] [i_10] = ((/* implicit */int) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) ((1361240795U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)2516))))))))))));
                        var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((int) var_12))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8505492475452822664LL))) : (((/* implicit */long long int) max((var_10), (((/* implicit */int) (short)28038)))))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)30), (var_1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 5760679215424766791ULL))))))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)199), ((unsigned char)199)))) / (((/* implicit */int) min((arr_11 [i_0] [i_10 + 1] [i_10 - 3] [i_10 - 2] [i_0]), (arr_11 [i_0] [i_10 + 2] [i_10 - 3] [i_0] [i_0]))))));
                        arr_51 [i_0] [i_0] = (-(((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_7 [i_15] [i_0] [i_0] [i_0]))))))));
                        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-108)), (4294967280U)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 12; i_16 += 2) 
                    {
                        var_33 = (-((+(((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)18)))))));
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((unsigned int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)-4462))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_8))) & (((/* implicit */int) ((unsigned char) (unsigned char)122))))))));
                        arr_57 [i_16] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_10] [i_0] [i_16 + 1] [i_16])))));
                    }
                }
            } 
        } 
        var_34 += ((/* implicit */int) ((((/* implicit */_Bool) max((((signed char) arr_17 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */signed char) ((((/* implicit */unsigned int) arr_25 [i_0] [(short)10])) > (1217139827U))))))) && (((/* implicit */_Bool) ((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)11350)))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-19071))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_60 [i_17] [i_17] = (+(((/* implicit */int) (((+(arr_59 [i_17] [i_17]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (209187405U))) ? ((+(6283692259989367337ULL))) : (((/* implicit */unsigned long long int) arr_58 [i_17])))), (((/* implicit */unsigned long long int) var_10)))))));
        arr_61 [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_58 [i_17]) << (((18030728202385018598ULL) - (18030728202385018589ULL)))))))));
    }
    var_36 = ((/* implicit */unsigned char) ((unsigned long long int) ((((var_9) == (((/* implicit */int) (unsigned short)55284)))) && (((/* implicit */_Bool) var_10)))));
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_38 = ((/* implicit */int) ((((((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))) ? ((-(var_11))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_5))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_6)))) || (((/* implicit */_Bool) ((unsigned long long int) var_1)))))))));
}
