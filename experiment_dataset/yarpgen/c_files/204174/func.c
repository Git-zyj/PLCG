/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204174
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
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((-364965373041198443LL) > (((/* implicit */long long int) 3986878109U)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_1 [i_0])) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (-364965373041198443LL) : (((/* implicit */long long int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) : (var_8)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 478263666U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0]))) : (-364965373041198443LL))))));
            arr_5 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_2 [i_0 + 1]) > (arr_2 [i_0 - 1])));
            var_15 = ((/* implicit */int) (~(arr_1 [i_0 + 3])));
        }
        arr_6 [i_0] = ((/* implicit */unsigned int) (-(max((arr_2 [i_0 - 1]), (((/* implicit */long long int) ((-364965373041198457LL) >= (((/* implicit */long long int) arr_4 [i_0] [7] [i_0])))))))));
    }
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */long long int) arr_0 [i_2 + 1])) : (arr_8 [2U])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1])))))))) : (((unsigned int) ((arr_2 [i_2]) >= (((/* implicit */long long int) var_6)))))));
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_2) : (13182155U)))))), (max((((((/* implicit */_Bool) var_0)) ? (arr_8 [i_2]) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_2))))))));
    }
    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) (unsigned short)2637);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62898)) ? (((/* implicit */int) (unsigned short)2637)) : (((/* implicit */int) (_Bool)0))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1154139503)) >= (3975263777U))))));
        arr_12 [i_3 - 1] = (-(((/* implicit */int) (unsigned short)42618)));
        arr_13 [i_3] [i_3 + 2] = arr_1 [i_3];
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */short) ((unsigned short) var_2));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1954074225U)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (signed char)34))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_9)))) : (arr_8 [i_4])));
        arr_17 [i_4] = ((/* implicit */signed char) (-(arr_0 [i_4 - 1])));
        var_21 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (arr_2 [i_4 - 1]))))) >= (arr_1 [i_4])));
        var_22 = ((/* implicit */unsigned int) (~(arr_3 [i_4 - 2] [i_4 - 3])));
    }
}
