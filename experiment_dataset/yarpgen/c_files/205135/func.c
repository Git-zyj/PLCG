/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205135
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
    var_20 = (-(min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 471436488)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (18285005431586494952ULL))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) var_3);
        var_23 = ((/* implicit */unsigned char) (signed char)-1);
    }
    for (long long int i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 471436476)))))));
                        var_26 = ((/* implicit */int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-10LL)))))))));
                        arr_15 [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (-471436490) : (-1477547498))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) 471436476);
        var_28 ^= ((/* implicit */int) -10LL);
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775783LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (326372680U)));
        arr_19 [i_5] [i_5] = ((/* implicit */int) var_13);
        var_30 = ((/* implicit */signed char) min((var_30), (var_9)));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 471436489)) ? (((/* implicit */int) var_2)) : (471436479)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_5)) : (17LL))))))));
    }
}
