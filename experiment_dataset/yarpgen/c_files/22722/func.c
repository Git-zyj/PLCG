/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22722
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) max((var_12), (arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_6))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_0);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((int) arr_2 [(unsigned char)7] [i_1])))));
        var_14 -= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_0))))));
        var_15 ^= ((/* implicit */int) var_0);
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_6) >= (((/* implicit */long long int) var_4)))))) && (((/* implicit */_Bool) (+(var_4))))));
        var_17 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_9 [i_2]))) >= (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (min((((/* implicit */long long int) var_10)), (var_0)))))));
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) arr_10 [i_2])) : ((~(arr_9 [i_2])))))));
        arr_12 [i_2] &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) < (((/* implicit */int) max((var_7), (var_2))))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            var_19 &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (-(var_11)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 3]))))));
            arr_17 [i_3] [(signed char)5] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_3])) : (var_4)))) < (var_10))));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_21 [i_3] [i_5] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
            var_20 -= ((/* implicit */unsigned short) var_12);
        }
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) - (var_0)))) ? (((long long int) ((var_10) * (var_10)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_3] [i_3]))))))))));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_7))))))))))));
    var_23 = var_9;
}
