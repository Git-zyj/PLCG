/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195258
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */unsigned long long int) 2020317677U)) : (18446744073709551611ULL)))))));
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned short)65473)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 6; i_3 += 4) 
                {
                    {
                        var_13 = 3171832729017833165ULL;
                        arr_10 [i_1] [i_1] |= ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(min((2274649618U), (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = max((((/* implicit */unsigned int) min((max((16646144), (((/* implicit */int) (unsigned short)30577)))), (((((/* implicit */int) (unsigned short)65535)) << (((134217472U) - (134217462U)))))))), (max((max((2020317677U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((4639028173778709629ULL) >= (((/* implicit */unsigned long long int) 238599837))))))));
        var_14 = (unsigned char)7;
    }
}
