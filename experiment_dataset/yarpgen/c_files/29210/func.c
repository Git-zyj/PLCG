/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29210
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
    var_10 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_6)), (var_1))), (((/* implicit */long long int) 4294950912U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */int) (signed char)7)) >> (((arr_2 [i_1 - 2] [i_1 + 4] [i_0]) - (1274961577)))));
                var_11 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 4294950912U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 4294950912U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (short)0)) : (0))) >= (((/* implicit */int) arr_1 [i_0 + 3])))))));
                var_12 = min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (4210475903692304325ULL) : (((/* implicit */unsigned long long int) 5))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((-11LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440)))))) | (((((/* implicit */int) (signed char)1)) | (arr_2 [i_0] [i_0 - 3] [i_0])))))));
                var_13 ^= ((/* implicit */unsigned long long int) (+(2363884562U)));
            }
        } 
    } 
}
