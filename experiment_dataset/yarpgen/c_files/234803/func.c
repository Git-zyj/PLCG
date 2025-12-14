/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234803
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 920727951U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (920727955U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) : (((unsigned long long int) var_3)))))));
                    var_11 = ((/* implicit */unsigned char) 3374239344U);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56160)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) + (17471115141329141859ULL)))));
                }
                var_13 = ((/* implicit */long long int) arr_5 [(unsigned short)13] [(unsigned short)13] [(unsigned short)18]);
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned short) ((var_8) != (min((min((18446744073709551615ULL), (var_1))), (max((var_7), (((/* implicit */unsigned long long int) var_5))))))));
}
