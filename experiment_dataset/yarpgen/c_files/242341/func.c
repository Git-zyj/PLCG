/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242341
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) var_2);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)73))));
                                arr_12 [i_2] [i_1] [i_3] = ((/* implicit */int) (unsigned char)64);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                var_18 = (unsigned char)74;
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (0ULL)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 8; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) (signed char)-117);
                                arr_25 [i_9 + 1] [i_8] [i_8] [(_Bool)1] = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_6)) ? (var_13) : (18446744073709551589ULL))) : (((/* implicit */unsigned long long int) 5916599585703663685LL))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)86))))) ? (var_7) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (-8088335824728929951LL)))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1676436943U)) ? (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7458)))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 1370844090U)) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
