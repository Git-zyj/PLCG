/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203291
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
    var_17 = ((/* implicit */signed char) 3233573220284848509LL);
    var_18 -= ((/* implicit */_Bool) max((-3233573220284848509LL), (3233573220284848509LL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)255)), (3233573220284848509LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) (-(3233573220284848509LL)))) ? (min((((/* implicit */long long int) (signed char)-10)), (-3233573220284848518LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)8)) >> (((((/* implicit */int) (signed char)-43)) + (58))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) % (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)9))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)9))))) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) min(((signed char)12), ((signed char)9)))))) : (max(((-(((/* implicit */int) (signed char)22)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-10)))))))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        }
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_10 [(_Bool)1] [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3233573220284848507LL)) ? (((((/* implicit */_Bool) var_3)) ? (3233573220284848531LL) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (var_8) : (((/* implicit */int) (signed char)-6)))) : (((/* implicit */int) (unsigned short)34878)))))));
            arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((int) ((_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)6))))));
            arr_12 [i_2] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)4)))));
        }
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((int) ((unsigned char) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) >> (((((/* implicit */int) arr_9 [(signed char)0] [(signed char)0] [(signed char)0])) - (19250))))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) (signed char)5))))) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_2]) : (((/* implicit */int) (signed char)54)))))), (((/* implicit */int) (signed char)-123)))))));
        var_24 = ((/* implicit */long long int) ((_Bool) ((_Bool) ((var_10) == (((/* implicit */int) (signed char)-17))))));
    }
}
