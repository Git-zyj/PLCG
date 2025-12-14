/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20442
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
    var_20 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) 3648030877101278809LL)) - (18446744073709551611ULL))), (max((min((((/* implicit */unsigned long long int) -3648030877101278823LL)), (12290422250420115831ULL))), (((/* implicit */unsigned long long int) -6406502377917704077LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) (~(((1101068596U) << (((/* implicit */int) (_Bool)0))))));
        arr_4 [i_0 + 1] = 3457153891035428658LL;
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (_Bool)1);
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) (signed char)-84)))))) & (((((/* implicit */unsigned long long int) max((-855769829), (((/* implicit */int) (unsigned short)31932))))) | (min((((/* implicit */unsigned long long int) 16777215)), (3790573102899439098ULL)))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        arr_12 [i_2 + 1] &= max((min((max((-3457153891035428683LL), (-3457153891035428658LL))), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) (short)32))))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)65532)))));
        var_23 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (unsigned char)11)), (7469708816396243118LL)))))), ((~(((576390311306332902ULL) & (((/* implicit */unsigned long long int) -416200290))))))));
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-23879))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) / (3457153891035428668LL)))))), (((max((17870353762403218709ULL), (((/* implicit */unsigned long long int) 855769838)))) << (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
        var_25 &= ((/* implicit */unsigned short) (~(((((-2131686620428642355LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)42)) - (42)))))));
    }
}
