/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23096
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (short)20538)) + (((/* implicit */int) var_0)))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_4);
        var_20 *= ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) | (var_7))), (max((((/* implicit */unsigned long long int) var_0)), (9616459533587734796ULL))))) & (((/* implicit */unsigned long long int) ((((var_16) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1])))) * (((/* implicit */int) ((short) arr_3 [19ULL]))))))));
        arr_5 [i_1] [(short)11] = ((/* implicit */unsigned char) ((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_7) == (((/* implicit */unsigned long long int) var_4))))))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (((~(2221693190207561370ULL))) + (arr_4 [8U] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_9)) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 451612803U)) ? (var_1) : (((/* implicit */unsigned int) var_10))))))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_4 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_9 [2] [i_2] = ((/* implicit */unsigned long long int) min(((+(((var_12) + (((/* implicit */int) arr_8 [i_2])))))), ((-(((-1570961984) / (((/* implicit */int) arr_8 [i_2]))))))));
        arr_10 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) 1570961983)) <= (3843354492U)))) >> (((((/* implicit */int) arr_8 [i_2])) - (38)))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? (((var_12) % (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_7 [i_2 - 1])))) : ((~(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) 1570961983)) <= (3843354492U)))) >> (((((((/* implicit */int) arr_8 [i_2])) - (38))) - (47)))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? (((var_12) % (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_7 [i_2 - 1])))) : ((~(((/* implicit */int) var_9)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_15 [i_3] |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) 3843354492U)) + (arr_13 [(unsigned char)13] [i_3]))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_3])))))));
        var_21 -= ((/* implicit */unsigned char) min((((min((var_12), (1570961984))) < (((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)82)))))), ((!(((/* implicit */_Bool) min((1570961990), (((/* implicit */int) (short)3538)))))))));
        arr_16 [i_3] = ((/* implicit */unsigned char) arr_12 [(unsigned char)20]);
    }
    var_22 = ((unsigned char) var_16);
    var_23 = ((/* implicit */unsigned char) ((_Bool) ((((var_7) / (((/* implicit */unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_1)))));
}
