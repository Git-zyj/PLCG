/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204621
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) var_10);
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0] [i_4] [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) (unsigned short)255))))));
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (var_16)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (var_15)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_17 [(signed char)19] [i_1] [10ULL] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_1);
                        arr_18 [i_0] [i_2] [i_2] [14] [i_0] [14] |= ((/* implicit */int) (unsigned short)65281);
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_1] [3U] [i_2] [3U] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_15)) ? (arr_1 [i_1 - 1]) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_0]))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(arr_15 [i_0] [i_7] [0] [10U]))))));
                    var_23 = ((((/* implicit */_Bool) (+(arr_23 [i_0] [i_7] [i_1 + 1] [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_23 [(unsigned char)10] [i_7] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [i_0] [i_7] [i_1 - 1] [i_1 - 1])))));
                    var_24 ^= ((arr_3 [i_0]) ? (((((/* implicit */_Bool) arr_6 [i_7] [i_1 + 2] [i_7])) ? (((/* implicit */int) (unsigned char)159)) : (var_10))) : (((/* implicit */int) arr_6 [i_7] [i_1 - 1] [i_1 + 1])));
                    arr_24 [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)47)) : (arr_1 [i_0])))), (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)258)))))))) ? (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65280)))))) : (arr_22 [i_0] [(unsigned char)1] [i_1 + 1] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [0]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_12 [i_0] [i_8] [i_0] [i_1] [i_8] [i_8])))))) ? (6081557657345157411ULL) : (((/* implicit */unsigned long long int) (+(var_5)))))))));
                    arr_27 [i_0] [i_0] [i_1 + 2] [(unsigned char)4] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_14)), (var_5))))))));
                    arr_30 [i_0] [i_9] [5] [i_9] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))))));
                }
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (-((-(var_7)))));
    var_28 = ((/* implicit */short) var_10);
    var_29 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_10 = 3; i_10 < 22; i_10 += 2) 
    {
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_33 [i_10] [i_10])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_34 [(_Bool)1])))) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_4)))))));
        var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65283)) ? (arr_33 [i_10 - 1] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [18LL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_15)));
        var_32 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) : (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_10] [i_10])) == (4894442439058461895ULL)))))));
    }
}
