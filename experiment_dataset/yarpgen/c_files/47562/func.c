/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47562
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
    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483392U)) ? (var_15) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((254502861U), (var_7)))) : (((unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_21 = ((/* implicit */unsigned char) max((var_4), (max((((/* implicit */long long int) (short)-18688)), (var_4)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483618)), (2147483648U)));
        arr_4 [(unsigned char)6] [(_Bool)1] &= ((/* implicit */unsigned short) (unsigned char)110);
        arr_5 [i_0] [i_0] = max((((unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10913))) : (arr_0 [i_0 + 1]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min(((short)-22391), ((short)-22864)))) : (((int) 1558595021340852749ULL))));
        arr_6 [i_0] = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_1 [9ULL] [i_0 + 1]))), (min((((/* implicit */unsigned int) var_5)), (var_11))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_23 -= ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (var_15))));
            arr_11 [i_2] = ((((/* implicit */int) (unsigned short)53723)) >> (((-9154487138200349778LL) + (9154487138200349788LL))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) && (((/* implicit */_Bool) arr_1 [i_1] [i_2]))));
            arr_13 [i_2] [1U] = ((/* implicit */unsigned long long int) ((long long int) var_7));
        }
        var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_0 [i_1]))))));
        var_25 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) / (((/* implicit */int) var_5))))), (((unsigned int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3]))));
        var_26 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_6));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-27123))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned char) arr_21 [i_4] [i_5] [i_6])))));
                    arr_23 [10LL] [(unsigned char)0] [10LL] [i_5] = ((/* implicit */_Bool) (short)22734);
                }
            } 
        } 
    }
}
