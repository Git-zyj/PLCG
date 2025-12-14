/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236979
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
    var_10 = (unsigned char)123;
    var_11 = ((/* implicit */signed char) max((max((min((var_8), (var_7))), (((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_3)))))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) << (((((/* implicit */int) (unsigned char)133)) - (133))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (unsigned char)185);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_13 = (~(((/* implicit */int) var_6)));
            arr_5 [i_0] = ((/* implicit */signed char) var_9);
            arr_6 [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned char)133)) && (((/* implicit */_Bool) arr_2 [i_0]))))));
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-82)) ? (arr_7 [i_2]) : (((/* implicit */int) var_9))));
            var_15 = ((/* implicit */_Bool) ((3437351239063740884ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2])))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) arr_0 [i_3]);
        arr_13 [i_3] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) (short)3225)))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)96)) : (var_3))))) ? (max((var_4), (max((((/* implicit */unsigned long long int) (short)19539)), (2101846825337772713ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12050)) ? (((/* implicit */int) (short)-4546)) : (((/* implicit */int) (signed char)-24))))), (var_7))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) var_5))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
}
