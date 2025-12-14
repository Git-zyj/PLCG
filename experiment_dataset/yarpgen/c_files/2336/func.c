/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2336
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned int) var_9)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_11 [(signed char)15] [(signed char)15] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
                            var_14 = ((/* implicit */unsigned long long int) ((_Bool) var_12));
                        }
                    } 
                } 
                var_15 *= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) + (((unsigned long long int) 1354869626690630280ULL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) / (((((/* implicit */_Bool) 17091874447018921325ULL)) ? (17091874447018921336ULL) : (18446744073709551596ULL)))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((17091874447018921356ULL), (17091874447018921324ULL)))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            {
                var_17 *= ((/* implicit */short) 17091874447018921325ULL);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)19521)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
}
