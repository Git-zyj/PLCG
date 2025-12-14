/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212516
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_14))));
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (+(((min((var_8), (arr_1 [2]))) >> (((arr_3 [(unsigned char)2] [i_1 + 1]) + (2058509248)))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [0LL])) || (((/* implicit */_Bool) var_14)))) ? (min((arr_1 [2U]), (arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned char)139)), (var_7)))))) ? (min((240591524), (2147483647))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) -1222067965)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 4611686018426863616LL)))))))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1 + 4] [i_1 + 1])), (arr_2 [i_1 + 3] [i_1 + 3]))))));
                var_23 = ((/* implicit */unsigned char) ((max((max((-7233912730335027307LL), (((/* implicit */long long int) 240591524)))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)138)), (arr_0 [i_0] [i_1])))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53773)) ? (((((/* implicit */_Bool) 18446744073709551584ULL)) ? (((/* implicit */int) (short)-2302)) : (-2147483635))) : (((((/* implicit */_Bool) (unsigned char)250)) ? (2147483615) : (var_2))))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (-7233912730335027307LL)))), (((unsigned long long int) var_13))))) ? (((((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) % (((/* implicit */int) var_10))))) + (arr_2 [i_1] [i_1 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(2147483615))) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
}
