/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49090
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
    var_14 ^= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) max((((/* implicit */long long int) max((max(((unsigned char)13), ((unsigned char)2))), (((/* implicit */unsigned char) (_Bool)0))))), (var_10)));
                        var_16 = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_1]);
                    }
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_17 += ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), (min((arr_12 [i_2] [i_4 - 1] [i_4 + 1] [i_2]), (arr_12 [i_0] [i_4 + 2] [i_4 - 1] [i_0])))));
                        arr_13 [i_4] = max(((((+(arr_0 [i_0]))) / (((/* implicit */unsigned long long int) min((-1156339140), (((/* implicit */int) arr_8 [14U] [i_0] [6] [(unsigned char)9] [i_2] [i_4]))))))), (((/* implicit */unsigned long long int) (short)-9158)));
                        var_18 = ((/* implicit */_Bool) min(((-(72022409665839104LL))), (((/* implicit */long long int) max((arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 2]), (arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_19 ^= ((/* implicit */_Bool) var_6);
                        arr_16 [i_0] [i_1] [(signed char)0] [16] = arr_5 [(_Bool)1];
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (short)-9158);
                    }
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2])) : (((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [i_0])) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) && (((/* implicit */_Bool) 17596017642955101387ULL))))))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [19ULL] [i_2] [i_2] [i_2])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (max((((/* implicit */int) (unsigned char)240)), (((((/* implicit */_Bool) ((unsigned int) (short)63))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((arr_18 [i_0] [i_0] [i_2]) >= (((/* implicit */int) var_1)))))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) arr_18 [(short)0] [i_2] [i_2]);
                        arr_22 [i_0] [17] [i_0] [i_0] [17] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4095)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (max((3201490593640763218ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1032224156)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_8)))))))));
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_2] [i_2] [i_7] [19] [i_2] [i_2] = ((max((((/* implicit */int) (_Bool)1)), (-1156339117))) / ((+(-1156339152))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_7])) && (((/* implicit */_Bool) var_5))));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] = ((/* implicit */_Bool) arr_23 [i_0] [i_8] [i_2] [i_8] [i_8] [i_1]);
                        var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) 13013901444683505618ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (var_11)))));
                        arr_32 [i_1] [i_2] [i_2] = min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((850726430754450228ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (max((2147450880), (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_20 [i_8] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (max((36028797018963960ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((((((/* implicit */_Bool) 17596017642955101387ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_34 [i_0] [4] [i_2] [i_2] [i_9] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        arr_35 [i_1] [i_9] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17596017642955101387ULL)) ? (((/* implicit */unsigned long long int) -763933355)) : (max((622756577967720337ULL), (13013901444683505626ULL)))))) ? (((/* implicit */unsigned long long int) max((((1156339121) / (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned long long int) (short)61)), (var_12))));
                        arr_36 [i_9] [i_9] [i_2] [i_1] [6ULL] [i_9] = ((/* implicit */long long int) max((17596017642955101388ULL), (((/* implicit */unsigned long long int) 1882170634))));
                    }
                    var_26 = min(((((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [0LL] [i_1] [i_1] [i_0])))) ? (((arr_3 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (unsigned short)30709)))) << (((((((/* implicit */_Bool) (unsigned char)13)) ? (3940136299U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (3940136289U)))))));
                }
            } 
        } 
    } 
}
