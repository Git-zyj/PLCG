/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33673
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
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_14))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (arr_2 [6ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [(unsigned short)2])))))) ? (((((/* implicit */_Bool) 5626469455178489999ULL)) ? (12820274618531061617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-4326098144853956527LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [(_Bool)1]))))))));
        var_18 = ((/* implicit */unsigned long long int) (signed char)-42);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_2] |= min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-9))))), (3189612089U));
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) (unsigned char)92)) ? (1909249193106084276LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) | (5626469455178489999ULL)));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_12 [i_1] [i_2] [i_3 - 1] [i_1])))))) : (((3137452162U) << (((min((((/* implicit */int) (signed char)-106)), (-778103405))) + (778103411)))))));
            }
            var_22 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)108))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2771335778U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1609))))))) : (((unsigned int) (unsigned char)195))))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) | (((long long int) 15821307850338564065ULL)))));
            var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 1120099838)) : (arr_12 [i_1] [i_1] [i_1] [9U]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)20180)) : (((/* implicit */int) var_11))))) ? (min((((/* implicit */unsigned long long int) var_11)), (arr_12 [i_1] [i_1] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110)))))));
            var_24 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 31U)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (signed char)22)))));
        }
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1856754467) : (((/* implicit */int) (unsigned char)143))));
        var_26 -= ((/* implicit */long long int) max((((/* implicit */int) ((arr_7 [i_1] [3ULL] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])))))))));
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_4])) ? (2043439395) : (((/* implicit */int) ((signed char) -1)))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) (-((+(arr_14 [i_4])))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_29 = ((/* implicit */_Bool) arr_19 [i_5]);
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_13)) : (((arr_20 [i_5]) & (arr_20 [i_5])))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), ((-(5626469455178489999ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) 14766638715040473538ULL))) != (((/* implicit */int) arr_18 [i_5])))))) : (min((arr_15 [i_5]), (arr_15 [i_5])))));
    }
}
