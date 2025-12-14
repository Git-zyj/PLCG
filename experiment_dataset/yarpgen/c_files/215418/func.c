/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215418
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
    var_14 = ((/* implicit */int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967272U)) ? (var_11) : (var_4)))) | (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) != (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned char)0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) + (5632758370980424197LL)));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)0))))));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) 1580744384))));
        var_17 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) != (3945375482U)));
        arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    for (int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((unsigned int) ((((/* implicit */int) (unsigned char)28)) > (((/* implicit */int) var_7))))))))));
        arr_13 [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)-13076)) : (((/* implicit */int) (short)-32000)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) (unsigned char)8))))) : (((/* implicit */int) (unsigned char)229))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(3945375471U)))) / (3LL))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)242)) / (((/* implicit */int) (unsigned short)5)))), (((((/* implicit */_Bool) -518426270)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19)) / (((/* implicit */int) var_13))))) : (((var_4) | (var_4)))))) : ((-(-1LL)))));
        arr_16 [i_3] [i_3] = ((/* implicit */_Bool) ((((((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */long long int) var_6)) : (-1LL))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_13)))) + (16502))))) & (((/* implicit */long long int) min((((/* implicit */int) ((2016425557U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (1550093536))))));
        var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (~(3881460732U))))))), ((~(742385375U)))));
    }
}
