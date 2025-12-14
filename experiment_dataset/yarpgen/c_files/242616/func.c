/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242616
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
    var_13 |= ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12894)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                    var_15 = ((/* implicit */long long int) (~((~(1136964076U)))));
                    var_16 ^= ((/* implicit */short) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_1 + 2] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), ((-(var_2)))))) ? (max((((/* implicit */unsigned int) var_0)), ((~(2002428955U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                                var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (36028797018898432ULL)))));
                                var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_2] [i_3] [10U] &= var_4;
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_1))))) : (5849367203453289072LL)));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                            {
                                var_20 = ((/* implicit */int) 3813176238U);
                                var_21 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_1))))));
                                arr_22 [i_0] [i_1] [10LL] [i_6] [i_7 - 2] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)56)), (var_3)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_8))) - (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) >= (var_4)))))));
                            }
                            for (long long int i_8 = 2; i_8 < 19; i_8 += 1) 
                            {
                                var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (9223372036854775807LL) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_3)) : (-136945417017073973LL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : ((-((+(33554176U)))))));
                                arr_25 [i_0] [i_5] [(signed char)19] = ((/* implicit */unsigned short) max(((+(22))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (var_2)));
                            }
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_6))))));
                            var_25 |= ((/* implicit */_Bool) 9223372036854775789LL);
                        }
                    } 
                } 
                arr_26 [i_0] [i_0] = min((((var_5) * (var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_5), (var_12))))))));
            }
        } 
    } 
}
