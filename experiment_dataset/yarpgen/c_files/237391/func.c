/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237391
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
    var_15 &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (14648245895061171751ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-55)))));
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8651))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)8346))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) -8929742532279178008LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (4160663741U) : (134303554U))), (((/* implicit */unsigned int) max(((unsigned char)173), (((/* implicit */unsigned char) arr_2 [i_1] [i_1])))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51110))))), (max((var_3), (-1470398507563161507LL)))))));
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) max(((unsigned short)8651), (((/* implicit */unsigned short) (signed char)112))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((unsigned int) (-(arr_4 [(signed char)4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19312))) != (15509120756477472791ULL)))) << ((((-(((/* implicit */int) arr_5 [i_0] [(signed char)20] [(signed char)20])))) + (31390)))))) : (((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) * (((/* implicit */int) var_11)))))))));
            var_20 *= ((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (short)15485))));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((554814770), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_3 [(unsigned short)4])))) ? (((/* implicit */unsigned int) (+(1782915615)))) : (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)56))))) : (848118885U)))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 15509120756477472791ULL)) ? (2356311171U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4160663741U)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)59977)))))))) ? (((((/* implicit */_Bool) (~(-1470398507563161507LL)))) ? (min((((/* implicit */long long int) (unsigned short)0)), (36650969088519006LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-1723025303172362073LL) >= (1723025303172362061LL))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)126)))) <= (((/* implicit */int) var_13)))))) : (((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
        }
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) 4160663741U)) ? (((((/* implicit */_Bool) 1470398507563161487LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (15509120756477472803ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3789)))));
        var_23 = ((/* implicit */unsigned int) ((signed char) (-(2531033879U))));
    }
}
