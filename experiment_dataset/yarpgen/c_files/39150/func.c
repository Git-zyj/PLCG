/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39150
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
    var_15 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */int) (short)496)) ^ (((/* implicit */int) (unsigned char)151)))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)102)) > ((-(((/* implicit */int) (unsigned char)131))))));
                var_17 = var_6;
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21909)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)131))));
                    arr_9 [i_0 + 2] [i_0] [i_2] = ((/* implicit */unsigned short) (((+(arr_8 [i_0 + 3] [i_0] [i_0 - 1] [i_0 - 1]))) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (17293706388596258862ULL)))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((+(min((((/* implicit */unsigned long long int) var_4)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)25601)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) > (var_12)))))))));
}
