/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28841
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
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) min((var_10), (max((((/* implicit */int) arr_1 [i_0 + 2])), (((((((/* implicit */_Bool) (unsigned short)61232)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0 - 2])))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (arr_0 [i_0])))))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)123)) / (((/* implicit */int) (unsigned char)130)))), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) - (6846207217714408730LL)))) ? (-274353093) : (((/* implicit */int) (short)-11396)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) (unsigned char)255))))))));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1 + 2] [i_1 + 2] = ((/* implicit */_Bool) (-(arr_4 [(short)19])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_9 [i_1 + 2] = ((/* implicit */int) arr_3 [i_1] [i_2]);
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
        }
        var_12 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1073741823)) ? (arr_3 [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)2)))))))), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) : (arr_8 [i_1]))), (((/* implicit */long long int) ((unsigned char) arr_6 [15LL] [15LL] [15LL])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [(signed char)4] |= ((/* implicit */unsigned long long int) (-(arr_3 [i_3] [i_3])));
        arr_14 [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (arr_4 [i_3])))) ? ((~(arr_8 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)133)) / (((/* implicit */int) (unsigned char)10)))))));
        var_13 = max((((((/* implicit */int) var_5)) + (arr_0 [i_3]))), (((/* implicit */int) arr_12 [i_3])));
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_3])), (var_9)))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [15ULL] [i_3])) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)12))))) : (arr_3 [i_3] [(short)17])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_4]))));
        var_16 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_18 [i_4]))))))), (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))));
        var_17 -= ((/* implicit */unsigned short) -274353104);
    }
    var_18 = ((/* implicit */unsigned short) ((var_5) || (var_5)));
    var_19 = ((/* implicit */unsigned short) var_7);
}
