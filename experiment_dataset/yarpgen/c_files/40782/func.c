/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40782
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((int) arr_0 [i_0]);
        var_10 ^= ((/* implicit */_Bool) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1617075785294194345ULL)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((int) arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15852)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1] [i_1])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)-15854)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))))) : (((unsigned int) arr_0 [i_1]))));
        var_13 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((unsigned short)40005), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-78)), ((short)-19520))))))), (833570008U)));
        var_14 = ((/* implicit */signed char) (+(min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1]))), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((var_8) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [(short)9]))))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)127))), (min((((/* implicit */unsigned long long int) (signed char)91)), (var_1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)40005)) <= (722615560))))) <= (min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_2] [i_2])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_15 [i_4] [i_3 - 2])) ? (arr_15 [i_4] [i_3 + 1]) : (arr_15 [i_4] [i_3 - 1])))));
                        var_18 = ((/* implicit */unsigned short) (((-(arr_4 [i_3] [i_5]))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-87)))))));
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1])) ? (((unsigned long long int) arr_4 [i_3 - 1] [i_3 - 1])) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_3 - 2] [i_3 - 2] [i_4 - 1] [i_4 - 1])), (arr_4 [i_3 - 2] [i_3 - 2]))))));
                    }
                } 
            } 
        } 
        var_19 += ((/* implicit */short) ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [1U])))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((unsigned short)25531), (((/* implicit */unsigned short) (short)32760))))) : (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (short)-29742)) : (((/* implicit */int) (signed char)-74))))))))))));
    var_21 = ((/* implicit */unsigned char) ((short) ((unsigned int) var_7)));
}
