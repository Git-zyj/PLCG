/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200236
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
    var_19 = ((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)14)) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((1099511627776ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4911)) ^ (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((2356862812U) >> (((18446742974197923849ULL) - (18446742974197923840ULL))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_15);
                    var_20 = ((/* implicit */unsigned short) ((max((12205422801854246719ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)82)), (var_1)))))) <= (0ULL)));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) -1432831165)) >= (-5783792092386737430LL)))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2] [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) && (((/* implicit */_Bool) var_17)))))))))));
                }
            } 
        } 
    } 
}
