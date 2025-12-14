/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28591
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
    var_16 += ((/* implicit */unsigned int) var_7);
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (316956329))) < (((/* implicit */int) ((short) 316956329))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [15] [i_2] [i_1] [i_2] [i_2] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) (short)-20232))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536346624ULL)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10)))) ? ((+(6021519183415185191ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_2 + 2] [i_1]))))));
                            var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 30720)) ? (var_13) : (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) max((98655450), (arr_2 [(short)6])))) ? (((((/* implicit */_Bool) var_9)) ? (6021519183415185207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(short)16] [i_1] [i_2 + 1] [i_1] [i_1] [i_1])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_6 = 1; i_6 < 15; i_6 += 2) 
                            {
                                var_20 = (~((+(var_3))));
                                var_21 = ((/* implicit */unsigned int) var_3);
                                var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((18446744073173204969ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((arr_8 [i_4] [i_4] [i_4] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4] [6])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4] [i_5] [i_6])) ? (917504U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                                arr_17 [i_1] [i_1] [(signed char)10] [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_5] [i_5] [i_6])) != (((/* implicit */int) arr_1 [i_0]))))), (arr_2 [i_1]))));
                            }
                            arr_18 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(_Bool)1] [i_5] [i_5] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)16758))))) ? ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_5] [i_4] [i_5])))) : (((int) var_5)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) >= (((((/* implicit */_Bool) 917504U)) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) var_13))) && (((/* implicit */_Bool) var_13)))) ? (((((((/* implicit */int) var_12)) >> (((18446744073709551596ULL) - (18446744073709551583ULL))))) + (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (18446744073173204992ULL))))))));
    /* LoopSeq 4 */
    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        arr_22 [i_7] = ((/* implicit */int) ((_Bool) ((arr_20 [i_7 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        arr_23 [(signed char)12] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_15))));
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_26 [i_8] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (+(2443900556U)))), (((((/* implicit */_Bool) 18446744073173204969ULL)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24421))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_8]) <= (((/* implicit */int) (_Bool)1))))))));
        arr_27 [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_24 [i_8] [(unsigned short)18])), ((unsigned short)65533))))));
        arr_28 [i_8] = (((~(-1055431094))) ^ (((/* implicit */int) ((signed char) var_10))));
        var_24 = min((min((((/* implicit */int) var_14)), (((var_13) << (((33553408) - (33553408))))))), (((((/* implicit */_Bool) max((arr_25 [9]), (arr_25 [i_8])))) ? (1864269125) : (((((/* implicit */int) arr_24 [i_8] [i_8])) + (((/* implicit */int) var_14)))))));
    }
    for (signed char i_9 = 3; i_9 < 18; i_9 += 3) /* same iter space */
    {
        arr_31 [8ULL] &= ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) % ((~((~(((/* implicit */int) (unsigned short)16)))))));
        var_25 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((unsigned int) 18446744073709551615ULL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(502852133)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_15))))) : (((/* implicit */int) max(((short)24420), (((/* implicit */short) (_Bool)1))))))))));
        var_26 += (-(max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
    }
    for (signed char i_10 = 3; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_29 [i_10])), (arr_20 [i_10 - 3])))) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) -14)), (805386547U))))) : (3489580741U)));
        arr_35 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (signed char)-1)) : (((-1864269122) + (((/* implicit */int) (short)-26978))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (1073741824) : (((/* implicit */int) (short)26799)))) >= (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_5))))))))));
    }
}
