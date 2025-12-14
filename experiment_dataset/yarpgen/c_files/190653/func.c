/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190653
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [6LL] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((3306262903U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-67)) : (arr_8 [i_0 - 1] [i_0] [i_0])))))))));
                    var_12 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (((((unsigned long long int) 288230341791973376LL)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_1])))))));
                }
                var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) var_3)) : (-6006139774411007352LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_7)), (8372224))))));
                var_14 = ((/* implicit */unsigned short) 6452027600287211091ULL);
                var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13388))))) < ((+(((/* implicit */int) arr_7 [i_0 - 1] [i_0])))));
                var_16 ^= ((/* implicit */unsigned long long int) ((min(((~(arr_4 [(signed char)7] [(signed char)7] [i_1]))), (((arr_4 [i_0 + 1] [i_0 + 1] [0LL]) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) >= (var_11)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_8), (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_6))))) || ((!(((/* implicit */_Bool) (+(0LL))))))));
    var_18 = ((/* implicit */unsigned short) var_9);
}
