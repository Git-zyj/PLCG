/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39640
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13488))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)3227))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((-8686802379454643793LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57618)))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) var_13)) : ((((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((arr_2 [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -213474258)) ? (((/* implicit */int) (unsigned short)0)) : ((-2147483647 - 1))))))))));
                var_18 = ((/* implicit */_Bool) (short)-2);
            }
        } 
    } 
}
