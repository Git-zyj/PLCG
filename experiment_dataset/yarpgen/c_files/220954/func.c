/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220954
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 11595452559269483229ULL)))) <= (var_5)))), ((unsigned char)201)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(var_6)));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0 - 1] [18])), (arr_0 [i_1 - 2])))) >= (((((/* implicit */int) (unsigned short)32386)) * (((/* implicit */int) arr_0 [i_1 + 1])))))))));
                }
                arr_8 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)217))))));
                arr_9 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_1])), (min((((/* implicit */unsigned long long int) (unsigned char)47)), (3179265082464359018ULL)))));
            }
        } 
    } 
    var_16 = var_0;
}
