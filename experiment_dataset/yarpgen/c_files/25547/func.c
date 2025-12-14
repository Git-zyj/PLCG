/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25547
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
    var_14 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)255)), (-4750067984508051286LL))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)0)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)31)), (((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)82))) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [13U])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_12 [(signed char)13] [(signed char)13] [(signed char)13] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) > (236288525U))))) : (arr_10 [i_0] [i_0] [i_0] [(unsigned char)8])));
                        arr_13 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2])) : (arr_10 [(signed char)1] [i_2] [(unsigned char)10] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3370632918U))))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_2])) || (arr_7 [(_Bool)1] [i_0] [i_2] [5LL]))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) << (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_1] [i_3] [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) ((448299108658963573ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)123), ((signed char)23)))) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) var_12)))))));
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
}
