/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226300
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
    var_20 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)11] [(short)0] [i_1] [i_1] = ((/* implicit */signed char) max((7580490684958993809LL), (7580490684958993809LL)));
                    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) != (min((((/* implicit */unsigned int) var_12)), (4207568316U)))))), (((unsigned long long int) ((87398966U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [8ULL] [i_1 - 1] [8ULL]))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1 - 1])), (87398966U)))) && (((/* implicit */_Bool) max((-1), (arr_1 [i_1 - 2] [i_1 - 1]))))));
                    var_22 = ((/* implicit */short) (+(87398966U)));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */short) (((~(((-7580490684958993809LL) % (((/* implicit */long long int) ((/* implicit */int) var_1))))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_14))))))));
    var_24 &= (~(max((((/* implicit */unsigned long long int) 430417103U)), (18446744073709551590ULL))));
}
