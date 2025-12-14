/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21098
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) << (((var_4) - (3464533705599761418LL)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((((var_6) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (arr_0 [i_0]) : (174425652U)))))), (((/* implicit */long long int) (+(min((arr_0 [i_0]), (((/* implicit */unsigned int) var_0)))))))));
        arr_3 [i_0] = (unsigned char)15;
        arr_4 [9LL] = ((/* implicit */long long int) var_3);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) 3LL);
        var_12 = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [5LL]))) : (var_3))) - (22270U)))))) : (((((/* implicit */_Bool) (signed char)-6)) ? (arr_7 [i_1] [i_1]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (var_6))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_13 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((var_1) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)123)) : (var_1)))))), (((((/* implicit */_Bool) ((var_9) + (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 16LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) : (17LL)))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), (((signed char) -1LL)))))) != (((max((((/* implicit */long long int) var_3)), (9223372036854775807LL))) >> (((var_6) - (5602668830823940796LL)))))));
                        var_15 = ((/* implicit */unsigned int) (-(((arr_7 [i_2 - 1] [i_2 - 1]) / (arr_7 [i_2 - 1] [i_2 - 1])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
    }
    var_17 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)26284)), (var_1))), (var_1)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)68)) / (666889533)))), (((((/* implicit */_Bool) 4120541627U)) ? (((/* implicit */unsigned long long int) var_1)) : (1459334130127192836ULL)))))));
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
