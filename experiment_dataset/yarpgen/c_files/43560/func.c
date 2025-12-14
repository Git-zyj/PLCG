/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43560
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
    var_10 -= var_6;
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) 1858094412U)), (var_6)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (unsigned short)19);
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) 1200661176)), (8905091034900138078LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) min((((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-20450))))), (((/* implicit */int) (short)-2409))));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (0U)))) ? (((/* implicit */unsigned long long int) min((-1902523485677143566LL), (((/* implicit */long long int) 2U))))) : (max((((/* implicit */unsigned long long int) var_9)), (10241868512790010515ULL))))));
                }
            } 
        } 
    } 
}
