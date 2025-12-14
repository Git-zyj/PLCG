/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211438
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_0 [i_0 - 3]))));
        var_15 -= ((/* implicit */unsigned char) ((_Bool) (~(-3411667470852743707LL))));
        arr_3 [i_0 - 3] = ((/* implicit */long long int) var_10);
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)12633)) ? (max(((~(var_8))), (min((((/* implicit */unsigned long long int) -3411667470852743707LL)), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (-3411667470852743689LL)))) ? (arr_12 [i_1 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
                    var_17 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) min((arr_5 [i_3]), (((/* implicit */unsigned char) arr_7 [i_3]))))), (-3411667470852743707LL))), ((~(-4122743694300011070LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] |= (((-((+(((/* implicit */int) (unsigned short)24081)))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_10 [i_5] [i_2] [(signed char)2] [i_4])))) < (min((var_8), (((/* implicit */unsigned long long int) var_7))))))));
                                var_18 = ((/* implicit */unsigned char) (~(((long long int) arr_12 [i_4 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5231888366089221522ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : ((~(((long long int) var_8))))));
        var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_13 [i_1 + 3] [i_1] [i_1 - 1] [12LL] [i_1 - 1])) ? (((/* implicit */int) arr_18 [i_1] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) 13214855707620330092ULL)) || (var_13))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_1] [i_1] [i_1] [12U] [i_1]), (min((var_9), (arr_13 [(_Bool)0] [(_Bool)0] [(short)8] [(_Bool)0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_11 [6] [6] [i_1 + 1] [i_1])))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned char) ((unsigned int) arr_16 [i_6] [i_6] [i_6] [i_6]));
        var_22 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6 - 1] [i_6] [i_6 - 1])) ? (arr_8 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 - 1] [i_6])))))), (var_9)))));
        var_23 |= max((-3620784467881212114LL), (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [4ULL]))) : (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9223372036854775806LL))))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_5))))) : (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24081))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_6]))))))));
    }
    var_24 = ((/* implicit */unsigned short) var_3);
}
