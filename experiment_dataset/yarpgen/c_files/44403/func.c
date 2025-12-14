/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44403
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((long long int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) var_11)))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_0 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((long long int) (signed char)-42))))))));
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) ((signed char) (unsigned char)49)))))) ? ((~(((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52658)) > (((/* implicit */int) (short)4095)))))));
                arr_9 [i_0] = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) 18446744073709551615ULL))) - (var_0)));
    /* LoopSeq 4 */
    for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
    {
        var_18 -= arr_10 [i_2];
        arr_12 [i_2] = ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144)))));
    }
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) ((arr_13 [2ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((var_6), (((/* implicit */unsigned int) var_11))))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)52671))) : (((/* implicit */int) ((short) ((arr_2 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1531))))))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned char) ((arr_18 [i_4]) & (arr_18 [i_4])));
        arr_20 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) (short)-4643)) <= (((/* implicit */int) var_11))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (arr_17 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) (short)1530);
        arr_25 [i_5] [i_5] = ((/* implicit */long long int) ((((min((((/* implicit */int) var_11)), (((((/* implicit */int) (short)-1530)) * (((/* implicit */int) (unsigned char)70)))))) + (2147483647))) >> (((((/* implicit */_Bool) -331280336)) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_22 [i_5]))))));
    }
}
