/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198452
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
    var_13 = ((/* implicit */unsigned short) min(((-(var_6))), ((-(((var_2) / (var_6)))))));
    var_14 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) -949406128)) ? (-7202161250801140145LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37210))))), (min((-9035911524020446093LL), (((/* implicit */long long int) (unsigned short)0)))))) == ((~(-6860440266892074638LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_2] [6LL] [i_2] [i_3] = (~(((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_2] [i_2] [i_3] [(unsigned short)1] [i_3]))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((504457500) / (-214774498))))))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((unsigned short) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))));
                        arr_17 [i_0 + 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) 504457500);
                        arr_18 [5] [8] [i_2 - 2] [5] [i_2] = ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) (+(1579847466)))));
                        arr_19 [(unsigned short)10] = ((/* implicit */unsigned short) ((arr_7 [i_0 + 1] [i_1] [1LL] [i_4]) ^ (arr_7 [(unsigned short)0] [(unsigned short)4] [10LL] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            arr_25 [11LL] [11LL] [i_2] [3] [i_5] [i_6] = ((/* implicit */int) (-(arr_24 [i_2 - 1] [i_1] [(unsigned short)6] [i_0 - 1] [4LL])));
                            arr_26 [(unsigned short)7] [(unsigned short)4] [(unsigned short)7] [i_2] [4] [i_5] [0] = ((((231637174) | (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_6])))) << (((/* implicit */int) (!(((/* implicit */_Bool) 866366150))))));
                        }
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 504457497))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_7] [i_7] [i_2]);
                        var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 - 1]))));
                        var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_2 - 3]))));
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) -399260269)) ? (arr_1 [i_1]) : (((/* implicit */long long int) 1974103375)))) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 2])))));
                        arr_30 [9LL] = ((/* implicit */long long int) ((-1579847465) & (((/* implicit */int) (unsigned short)7780))));
                    }
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [(unsigned short)0] [(unsigned short)10] [i_2 - 3] [i_2]))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 12LL)) ? (((/* implicit */long long int) 437226377)) : (-8599871432182220353LL)))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [11LL])) && (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_2 - 2]))));
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (1855343869) : (-221078699))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)10256)) <= (193054182))))));
                        var_25 = ((/* implicit */unsigned short) (+(arr_24 [i_0] [i_2 - 3] [i_0 - 1] [i_0] [i_1])));
                    }
                }
            } 
        } 
        arr_33 [i_0] = ((-1) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))));
        var_26 = (+(((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)65530)))));
    }
    var_27 = ((/* implicit */long long int) var_2);
}
