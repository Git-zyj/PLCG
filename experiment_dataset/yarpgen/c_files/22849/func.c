/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22849
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
    var_20 &= ((/* implicit */unsigned long long int) var_3);
    var_21 = var_10;
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)50548)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))) : (2ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((var_9) != (var_17))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_0 + 3])) != (((/* implicit */int) ((unsigned char) (unsigned short)24324)))))), (arr_0 [i_0 + 3])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((min((1655942550242538655ULL), (((/* implicit */unsigned long long int) (unsigned char)104)))), ((+(var_11))))))));
    }
    for (int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_3 + 4] [i_3 + 1] [(_Bool)1] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (short)20987))))))) : ((((!(((/* implicit */_Bool) 18446744073709551607ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_15))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                {
                    var_25 = arr_8 [i_3 + 3] [i_4];
                    var_26 ^= ((/* implicit */unsigned char) 4294967275U);
                    var_27 = ((/* implicit */unsigned short) var_19);
                    var_28 *= var_0;
                }
            } 
        } 
    }
    var_29 = ((/* implicit */int) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18)))))));
}
