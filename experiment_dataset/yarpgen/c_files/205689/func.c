/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205689
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
    var_11 ^= ((/* implicit */_Bool) 3493289630U);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = 575897802350002176LL;
                                var_12 ^= ((/* implicit */unsigned char) (~(((((9223372036854775807LL) / (-575897802350002176LL))) / (((94766334761272087LL) + (var_5)))))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+((+(-6874622532370038071LL))))))));
                                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) -575897802350002176LL);
                                var_15 ^= ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -575897802350002176LL)));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20346))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) + (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) + (-575897802350002152LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        var_19 = ((/* implicit */short) ((575897802350002176LL) - (var_0)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (575897802350002176LL)));
    }
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), ((-(36028797018963904LL)))));
}
