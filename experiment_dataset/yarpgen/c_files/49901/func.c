/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49901
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
    var_13 = max((((((/* implicit */_Bool) ((-61833797) / (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1799770543U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)15697))))) ? (var_9) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) arr_1 [3]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) 1799770543U);
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3290607295824611459ULL)) ? (-1LL) : (((/* implicit */long long int) 1556056371)))))));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1556056359)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 2] [i_2 + 2]))) : (var_2))) + (min((min((((/* implicit */unsigned long long int) -870074098)), (var_9))), (((/* implicit */unsigned long long int) (-(var_1))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned char)0))))) == (11105627231415917864ULL))))));
                            arr_15 [i_4 + 1] [i_3] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((var_2) <= (((/* implicit */unsigned long long int) 238507313))));
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */int) arr_8 [i_0] [19U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((arr_3 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_0))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)24))))) ? (min((12LL), (((/* implicit */long long int) ((16280311536269255499ULL) != (((/* implicit */unsigned long long int) 2147483647))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)508)) > (((/* implicit */int) var_10))))))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] &= ((/* implicit */unsigned short) var_2);
        var_21 = ((/* implicit */unsigned short) (+(((1799770543U) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) (signed char)127)), (2495196752U)))))), (((min((((/* implicit */unsigned long long int) var_11)), (16280311536269255508ULL))) / (((/* implicit */unsigned long long int) var_7)))))))));
        var_23 &= ((/* implicit */int) (~(var_9)));
    }
}
