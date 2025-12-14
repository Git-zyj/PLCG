/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208445
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
    var_16 = ((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)29083)) : (((/* implicit */int) (signed char)22)))) >> (((((/* implicit */int) var_6)) - (38760))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_1))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-86))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */short) (signed char)-105)), ((short)25080)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [10ULL] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] = ((/* implicit */_Bool) ((unsigned long long int) max((var_4), (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4 - 1]))));
                                arr_16 [i_0] [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)25080))))), (((((/* implicit */_Bool) ((signed char) (signed char)105))) ? (arr_8 [i_3] [i_4 - 1] [i_3 - 2] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32645)))))));
                                var_18 = (-(((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_1] [i_3 - 2] [i_1])) ? (((var_11) ? (arr_4 [(short)2]) : (arr_13 [5] [i_3 + 1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1606612662)))))));
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), ((short)-32656)))) ? (((/* implicit */int) (short)25691)) : (var_0)))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))), (18446744073709551591ULL)))));
                                var_20 = ((/* implicit */int) max(((+(arr_12 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 2]))), ((-(var_2)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10] [i_1] [i_2] [i_2])) ? (9223354444668731392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32644)))))) ? (((/* implicit */int) ((unsigned short) var_8))) : ((+(((/* implicit */int) (signed char)-55))))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) arr_17 [i_5 + 2] [i_1] [(unsigned short)8] [i_5] [i_5 + 1] [i_5]);
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max(((!(((((/* implicit */int) (signed char)100)) != (((/* implicit */int) (unsigned char)192)))))), (((1076483687) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)25068))))))))))));
                        arr_19 [i_5] [(unsigned short)10] [i_2] [10] = ((/* implicit */short) min((((/* implicit */long long int) ((arr_11 [i_0] [i_1] [i_2] [i_0] [i_5]) < ((+(2147483647)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32644))))) : (((((/* implicit */_Bool) (short)1626)) ? (9079256848778919936LL) : (((/* implicit */long long int) -1922222963))))))));
                        var_24 = ((/* implicit */_Bool) (~(arr_8 [(unsigned short)7] [i_1] [i_1] [i_1])));
                    }
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_12))));
                        arr_22 [i_2] [i_1] [i_2] [i_6 + 1] [i_6] [(_Bool)0] = ((/* implicit */int) (~(8191U)));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_7]))));
        arr_25 [i_7] = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) var_14)))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */long long int) (~(arr_28 [i_8] [i_8])));
        arr_30 [i_8] = ((/* implicit */_Bool) (short)-26975);
        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)25689)) : (((/* implicit */int) (short)-25674))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2147483647)) : (8569277011989266860LL))))) >> ((((~((-(7046614739283859980LL))))) - (7046614739283859956LL)))));
    }
    var_28 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) var_9)) ? (3864402762792655211LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_11))))));
}
