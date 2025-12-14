/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200740
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_16))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_17);
                                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_3 [i_2 - 1] [i_2 - 1]))) | (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_7] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23061))) : (4294967293U))) != (((/* implicit */unsigned int) var_12))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (var_15) : (var_15)))) ? (((2110378784) % (var_19))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5])) || (((/* implicit */_Bool) var_0)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */long long int) ((1099511627775ULL) <= (((var_16) % (((/* implicit */unsigned long long int) arr_27 [i_5] [i_9])))))))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_17), (((/* implicit */int) var_14)))) & (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : ((~(var_17))))) : ((-(var_12)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_4)) < (var_13)))), (min((var_15), (((/* implicit */int) arr_10 [i_5] [i_6] [i_5] [10U] [i_5] [i_5]))))));
            }
        } 
    } 
}
