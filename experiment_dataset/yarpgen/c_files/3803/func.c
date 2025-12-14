/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3803
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [7ULL] &= ((/* implicit */signed char) var_6);
        arr_5 [i_0 - 2] = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)-1)) != (((/* implicit */int) (short)31)))), ((!(((/* implicit */_Bool) 4294967295U))))));
        var_10 &= ((/* implicit */_Bool) max((min((-7125357409894630049LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_9))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_2]);
            arr_11 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 7125357409894630060LL)) ? (2251795518717952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            var_11 *= ((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_6)))));
            var_12 += ((/* implicit */unsigned long long int) ((unsigned int) 5U));
            arr_12 [i_1] [3ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3086))) : (4095U)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((4294967295U), (var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((unsigned long long int) -5252315077410980095LL)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1037)) && (((/* implicit */_Bool) (unsigned char)204)))))) : (((((/* implicit */_Bool) 6663050206814241630LL)) ? (((/* implicit */unsigned long long int) 4294963201U)) : (5970240847596024342ULL))))));
                            var_13 = ((/* implicit */long long int) 66977792ULL);
                        }
                    } 
                } 
            } 
            var_14 ^= ((/* implicit */unsigned int) var_7);
            var_15 = ((/* implicit */short) ((((/* implicit */int) var_4)) > ((~(-1221339417)))));
        }
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_7))));
    }
    var_17 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 19; i_7 += 1) 
    {
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 1451370832651039910LL)) ? (36028796951855104LL) : (((/* implicit */long long int) 951132251U)))))) ? (18446744073709551589ULL) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)32))))), (((((/* implicit */_Bool) 142395378439168986LL)) ? (562949953421311ULL) : (0ULL))))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(70368744177663ULL)))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17041)))) : (((/* implicit */int) (signed char)-85))))));
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9176713797440813975ULL)) ? (max((((/* implicit */unsigned int) (signed char)32)), (4294967291U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)93)))))))) == ((((!(((/* implicit */_Bool) arr_32 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (((((/* implicit */_Bool) arr_30 [i_8] [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))))));
            }
        } 
    } 
}
