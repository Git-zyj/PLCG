/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54283
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : ((-(arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_0);
                            var_13 = ((/* implicit */_Bool) (-(arr_0 [i_2 + 2])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    var_14 ^= ((/* implicit */long long int) (+((~(1783840237)))));
                    var_15 = (unsigned char)85;
                }
                for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    var_16 = ((/* implicit */short) var_3);
                    var_17 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (signed char)111)))), (((/* implicit */int) var_10))));
                }
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (int i_10 = 4; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((549755813887LL), (((/* implicit */long long int) max(((unsigned short)31341), (((/* implicit */unsigned short) (unsigned char)63))))))))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_4 - 1] [i_5 + 1] [i_10 - 3]))))), (((((/* implicit */_Bool) arr_26 [i_4 - 1] [i_5 + 2] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4 - 1] [i_5 + 1] [i_10 - 3]))) : (var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
