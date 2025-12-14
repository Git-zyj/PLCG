/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39236
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = min((min((((/* implicit */unsigned long long int) 1350426658)), (14245868532649027564ULL))), (4882843858275776810ULL));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)8391))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_5)))))));
                        var_16 ^= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)))), (var_5)))));
                        var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)187)), (min((((/* implicit */int) var_11)), (1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -635284619)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-24))))) ? (3071895257U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_7 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) ? (-1710070140657398240LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((3930271879U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)17))))) ? (min((((/* implicit */unsigned int) var_1)), (arr_7 [i_1] [i_2] [i_2 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((max((((long long int) (short)-10722)), (((/* implicit */long long int) min(((unsigned char)208), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */long long int) var_6))));
    var_22 &= ((/* implicit */int) (((((~(var_2))) >= ((+(((/* implicit */int) (short)-19233)))))) ? (min((((/* implicit */long long int) (short)18357)), (((var_9) ? (((/* implicit */long long int) 660136103U)) : (-10LL))))) : (((/* implicit */long long int) ((18555713U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3104290841U)) ? (var_10) : (((/* implicit */int) var_0))))))))));
}
