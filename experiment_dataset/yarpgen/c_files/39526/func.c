/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39526
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
    var_16 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_8)))));
                                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_2 - 4])) ? (arr_0 [i_2 - 4]) : (arr_0 [i_2 - 3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1])))))));
                                var_20 = ((/* implicit */int) ((unsigned int) (-(min((((/* implicit */long long int) arr_7 [i_0] [i_1])), (-4789891185574462834LL))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_1] [(short)2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4789891185574462833LL)) || (((/* implicit */_Bool) arr_9 [9U] [i_2 - 2] [i_2 - 3] [i_0])))) && (((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) || (var_0)))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) arr_0 [i_6]);
                        arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_0] [(unsigned char)3] [i_5] [i_6] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) (unsigned char)241))))) && (var_5)));
                        arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_0])), (arr_10 [i_0] [(_Bool)1] [i_5] [i_6] [i_6])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)14)))))));
                    }
                    arr_22 [i_1] [i_1] [1LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((8446109636076989108ULL) - (((/* implicit */unsigned long long int) -4789891185574462834LL))))) ? (((arr_13 [(unsigned short)7] [i_0] [(short)5] [i_5]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10131)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)14))))) : (min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)82)) >= (((/* implicit */int) (unsigned char)250)))))));
                        var_23 = ((/* implicit */_Bool) ((long long int) ((var_0) ? (arr_11 [i_0] [4LL] [i_0] [i_1] [i_1] [i_1] [i_7]) : (((/* implicit */int) ((unsigned short) -4789891185574462834LL))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_24 ^= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [(_Bool)0])))) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))), ((((+(4789891185574462833LL))) == (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                    arr_31 [i_0] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_9)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_8])))))));
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (992238774460630792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170)))))) ? (((((/* implicit */_Bool) -1862939357)) ? (((/* implicit */long long int) var_2)) : (6521230756096256697LL))) : (((/* implicit */long long int) (+(1841915582)))))) * (((/* implicit */long long int) 3429910610U))));
                    arr_34 [4ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1883276588)) ? (1059777623) : ((-2147483647 - 1))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [8ULL] [i_1])) : (((/* implicit */int) var_13))))) >= (((((/* implicit */long long int) var_2)) + (6521230756096256697LL)))));
                    var_27 = (((!(((/* implicit */_Bool) arr_18 [i_0] [9U] [4U] [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_19 [i_9] [i_9] [i_1] [i_0] [(unsigned short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))));
                }
                var_28 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((-2394287084038825896LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18229)))))), ((+(((/* implicit */int) arr_17 [i_0] [(unsigned char)8] [i_1] [3U] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                {
                    arr_42 [i_12] [(short)16] [i_10] = (-(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) (unsigned short)47383)))) : (((arr_38 [i_10]) & (((/* implicit */int) var_6)))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 3074833937U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170))))) : (((/* implicit */int) max(((unsigned char)241), ((unsigned char)34))))));
                    var_30 = ((/* implicit */unsigned int) ((((((-1841915582) - (((/* implicit */int) var_7)))) / ((-(((/* implicit */int) (signed char)-59)))))) * (((((/* implicit */int) var_11)) / (1841915582)))));
                }
            } 
        } 
    } 
}
