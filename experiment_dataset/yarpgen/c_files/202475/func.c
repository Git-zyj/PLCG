/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202475
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) ((arr_10 [i_3] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (short)32767))));
                        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */_Bool) var_8)) ? (-9223372036854775798LL) : (((/* implicit */long long int) arr_5 [i_3] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 1694242360))));
                        var_19 = ((/* implicit */unsigned int) ((arr_6 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24782)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_21 -= ((/* implicit */unsigned short) ((arr_9 [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */int) arr_12 [i_0]))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-22737)) : (((/* implicit */int) (unsigned char)134)));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 431037093);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (1063140064U))))));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_16 [i_0] [i_0]))));
        var_25 = ((/* implicit */short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            {
                var_26 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) (signed char)-22))))) ? (((/* implicit */unsigned long long int) 431037093)) : (max((((/* implicit */unsigned long long int) var_9)), (arr_25 [i_9]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9])) && (((/* implicit */_Bool) var_0))))))));
                var_27 = ((/* implicit */short) arr_23 [i_8]);
            }
        } 
    } 
}
