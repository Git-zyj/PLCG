/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47461
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
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174)))))))) ? (((/* implicit */int) ((_Bool) (-(-1276742415658937638LL))))) : (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_5)))));
    var_15 = ((/* implicit */signed char) 4609434218613702656LL);
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(119517968)))) ? (((4609434218613702639LL) & (((/* implicit */long long int) var_9)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) - (2638341151249642706LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (119517952)))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 4292870144ULL))) ? (((/* implicit */unsigned long long int) -4609434218613702647LL)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((2638341151249642706LL), (((/* implicit */long long int) var_0))))))))) : (min((arr_0 [i_0] [10]), (arr_0 [i_0] [i_0])))));
        arr_5 [(unsigned short)10] = ((/* implicit */_Bool) ((unsigned int) (signed char)63));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (((((~(max((((/* implicit */int) arr_6 [i_1] [i_1])), (arr_7 [i_1]))))) + (2147483647))) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_6)) < (-937062102))) || (((var_4) >= (((/* implicit */unsigned long long int) -4609434218613702658LL)))))))) == (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1]))))), (max((13812936360855867110ULL), (((/* implicit */unsigned long long int) -4609434218613702679LL))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_0))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [2])) ? (((/* implicit */int) ((_Bool) ((unsigned short) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) arr_0 [i_3] [i_4]))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2]))), (((/* implicit */long long int) ((_Bool) 4609434218613702632LL)))));
        var_23 = ((/* implicit */signed char) (-((-(((unsigned long long int) arr_8 [i_2]))))));
        var_24 = ((/* implicit */signed char) (unsigned short)33888);
    }
}
