/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190631
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_12)) | (((/* implicit */int) var_13)))) == (((/* implicit */int) ((unsigned short) arr_0 [i_0]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned short)0)))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))) >> (((((/* implicit */int) ((unsigned short) arr_3 [(unsigned short)2] [i_1]))) - (19309)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) != (arr_5 [i_1] [(unsigned short)7] [4ULL])))), (min((var_1), (arr_0 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_5 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_7))))) : (((unsigned int) arr_5 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(signed char)14])) : (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((max((var_9), (((/* implicit */long long int) var_2)))) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_0)))) - (((/* implicit */int) ((unsigned short) var_8)))))));
    /* LoopSeq 4 */
    for (unsigned int i_2 = 1; i_2 < 6; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_2] [i_2] [i_2])))))) ? (arr_5 [i_2] [(unsigned short)11] [11LL]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) : (6012922525094844188ULL)))))));
        var_20 *= ((unsigned char) min((((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) var_5))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            arr_15 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65523)) < (((/* implicit */int) (unsigned short)65523))))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4321))) : (10283587197357210177ULL))));
            arr_16 [i_3] [i_4] = var_8;
            arr_17 [i_4] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3])))));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) var_9);
            arr_21 [i_3] [10ULL] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (arr_18 [i_5] [i_5] [i_5]))))) - (((((/* implicit */_Bool) arr_18 [i_5] [22LL] [2U])) ? (arr_14 [12ULL] [(unsigned short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
        }
        arr_22 [i_3] [(unsigned char)22] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_10 [i_3])) + (((/* implicit */int) var_10)))));
    }
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) var_15);
        var_23 = ((unsigned short) 6491108839851634711ULL);
        arr_26 [i_6] = ((((((/* implicit */_Bool) max((arr_18 [(signed char)18] [(unsigned short)9] [(unsigned short)9]), (((/* implicit */unsigned int) arr_4 [i_6] [6ULL] [i_6]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), (arr_3 [i_6] [i_6])))) : (min((((/* implicit */unsigned long long int) arr_13 [i_6] [(unsigned short)6] [i_6])), (arr_11 [i_6]))))) | (((((/* implicit */_Bool) ((unsigned short) arr_4 [i_6] [i_6] [i_6]))) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_11 [(unsigned char)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_2 [8LL]))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_18 [i_7] [(signed char)23] [i_7]) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_10)))))) : (((((/* implicit */_Bool) (unsigned short)47868)) ? (549755809792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 6571879132892830001LL)) ? (-549755809787LL) : (9223372036854775807LL))) == (549755809792LL))))));
        arr_32 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (-549755809818LL) : (-8187223142158803238LL)))) ? (8187223142158803237LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65517), ((unsigned short)39412))))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))));
    }
    var_24 = ((/* implicit */unsigned short) ((8187223142158803238LL) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
