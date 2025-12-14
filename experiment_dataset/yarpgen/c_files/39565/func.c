/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39565
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((8592984519274561436ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)28)) ? ((+(((/* implicit */int) ((unsigned short) var_7))))) : (min((((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1])), (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3]))))))));
                        arr_11 [i_3] [i_1 - 2] [i_3] [i_3] [i_3 + 1] = ((/* implicit */_Bool) (-(var_13)));
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217727ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 2] [i_0 + 1]))) : (var_5)))) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_0 - 2])) : (((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_0 - 3])) * (((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 - 2] [i_0 - 1]))))));
            var_20 |= ((/* implicit */short) ((((unsigned long long int) var_14)) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)69)))))));
            var_21 += ((/* implicit */unsigned int) (unsigned short)27663);
        }
        var_22 = ((/* implicit */long long int) var_0);
        var_23 = (+(((unsigned long long int) 9853759554434990194ULL)));
    }
    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) /* same iter space */
    {
        var_24 += ((/* implicit */_Bool) ((signed char) ((_Bool) arr_3 [i_4 - 3] [i_4 - 3] [i_4 + 1])));
        var_25 += ((/* implicit */long long int) var_1);
        var_26 -= ((/* implicit */_Bool) ((unsigned long long int) var_3));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(18446744073709551610ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (arr_13 [i_4 - 1] [i_4])))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            {
                var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)222))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_17 [i_6])), (((((/* implicit */_Bool) ((arr_17 [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) 729471363U)))))) : (4294967295U)))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_18 [(signed char)2])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (8592984519274561410ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                }
                var_31 ^= ((/* implicit */unsigned short) arr_15 [2LL]);
            }
        } 
    } 
}
