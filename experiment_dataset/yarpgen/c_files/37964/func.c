/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37964
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [13ULL]))))) : (((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [(signed char)6])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
        var_21 |= arr_2 [i_0];
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) var_17);
        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) && (((/* implicit */_Bool) arr_2 [i_1 + 2]))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_1])) << (((arr_4 [i_1]) - (1079136146U))))) << (((((/* implicit */int) arr_1 [i_1] [i_1])) - (23428)))));
        var_25 = ((((/* implicit */_Bool) arr_2 [i_1 + 1])) && (((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])));
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_26 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])) << (((arr_5 [i_2] [i_2 + 2]) - (683313842)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])) << (((((arr_5 [i_2] [i_2 + 2]) + (683313842))) + (919963474))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_3])) ? (((/* implicit */int) (unsigned short)58632)) : (-494277264))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_2] [3LL])), (((((/* implicit */_Bool) var_16)) ? (arr_5 [i_2] [i_4]) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) arr_10 [8ULL] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((var_5) ? (var_1) : (arr_10 [(short)3] [i_2] [i_4 - 2] [i_4])))) : (min((arr_0 [i_3] [i_4]), (((/* implicit */unsigned long long int) var_19))))))));
                    var_28 *= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))))) ? (((((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? (arr_9 [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_4]))))) << (((arr_5 [10] [10]) - (683313811))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((max((var_3), (((/* implicit */int) arr_1 [(unsigned short)2] [(unsigned short)2])))) - (23432)))))));
                    var_29 = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58632)) ? (arr_5 [i_2] [i_4 + 1]) : (((/* implicit */int) var_5))))) ? (((((-8228124311480623128LL) + (9223372036854775807LL))) << (((arr_10 [i_2] [i_2] [i_3] [i_4 - 2]) - (1754339455988425201LL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_4 [i_2 + 1])) : (arr_7 [i_2 - 2]))))) << (((((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_2] [i_4])), (arr_4 [i_2])))) ? (arr_11 [i_2 + 2] [i_3 - 1] [i_4 - 1]) : (((((/* implicit */_Bool) arr_0 [(unsigned short)5] [i_3 + 2])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (signed char)-93)))))) + (1837156669))) - (14)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58632)) ? (arr_5 [i_2] [i_4 + 1]) : (((/* implicit */int) var_5))))) ? (((((-8228124311480623128LL) + (9223372036854775807LL))) << (((((((arr_10 [i_2] [i_2] [i_3] [i_4 - 2]) - (1754339455988425201LL))) + (977613127591719748LL))) - (38LL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_4 [i_2 + 1])) : (arr_7 [i_2 - 2]))))) << (((((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_2] [i_4])), (arr_4 [i_2])))) ? (arr_11 [i_2 + 2] [i_3 - 1] [i_4 - 1]) : (((((/* implicit */_Bool) arr_0 [(unsigned short)5] [i_3 + 2])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (signed char)-93)))))) + (1837156669))) - (14))))));
                    var_30 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) - (arr_9 [(_Bool)1] [i_2 + 2]))) - (arr_9 [13] [i_2 + 2])));
                }
            } 
        } 
        var_31 *= ((/* implicit */signed char) ((arr_6 [i_2]) ? (((((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 1])) && ((_Bool)1))) ? (arr_9 [(unsigned short)15] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2] [(_Bool)1] [(short)0]) && (((/* implicit */_Bool) arr_7 [i_2])))))))) : (arr_9 [15U] [i_2])));
    }
    var_32 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_33 = ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1])) && (((/* implicit */_Bool) var_7))))));
        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_16))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [14LL] [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_4 [i_6])))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_12 [i_6])) - (52656)))))))))));
        arr_17 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6 - 1])) ? (((((/* implicit */_Bool) arr_16 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (max((arr_10 [i_6 - 1] [i_6] [i_6] [i_6 - 1]), (((/* implicit */long long int) (unsigned short)6901))))))) ? (((((/* implicit */_Bool) ((arr_16 [i_6 - 1]) << (((((arr_7 [i_6]) + (2702033568026525844LL))) - (19LL)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -3200435604075623602LL)) : (arr_13 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_6] [i_6] [i_6 - 1]) : (((/* implicit */int) arr_2 [i_6]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) arr_6 [(unsigned short)12])) : (-2147483643))) << (((arr_7 [i_6]) + (2702033568026525853LL))))))));
    }
    var_36 = ((((/* implicit */int) var_11)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (19))) - (5))))))))));
    var_37 = ((/* implicit */long long int) 16777215ULL);
}
