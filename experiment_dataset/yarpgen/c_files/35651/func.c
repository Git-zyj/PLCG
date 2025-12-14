/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35651
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) var_12);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 2547285526U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_5)));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -252027478)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))) ? (((unsigned long long int) (unsigned char)12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)30)) : (arr_3 [i_1])))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 0U)) ? (17334237202837081490ULL) : (((/* implicit */unsigned long long int) 97000953U)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) (~(var_8)));
                        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) 455594983)) | (2061981379U)));
                    }
                } 
            } 
        } 
    }
}
