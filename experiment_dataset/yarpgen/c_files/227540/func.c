/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227540
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7865154935947586250LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : ((+(var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-55)) / (((/* implicit */int) (_Bool)1))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))))) : (11123311544680001064ULL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9063360122409561073ULL))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */unsigned char) var_3);
            arr_6 [i_1] = ((/* implicit */unsigned int) ((var_3) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_4))))));
        }
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)67)) | (((/* implicit */int) (unsigned short)0)))))));
        var_17 ^= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (short)21137)))))) - (var_2))), (((/* implicit */unsigned long long int) var_3))));
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_2))) : (((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15533864853511563053ULL)))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-3)) > (((/* implicit */int) var_9)))))));
    }
    for (long long int i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned short)50925)) * (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (_Bool)0))))) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) == (((((((/* implicit */int) (_Bool)1)) | (-855231926))) & (((((/* implicit */_Bool) var_12)) ? (2142237163) : (((/* implicit */int) var_0))))))));
        var_21 = ((/* implicit */unsigned long long int) var_4);
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11406)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54121))) : (2595025703733060464ULL)));
                    arr_21 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) 18446744073709551615ULL);
        arr_22 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) 562786121)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 7)) : (2161688191U))))))));
    }
    var_24 = ((/* implicit */unsigned short) ((15851718369976491151ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21120)))));
}
