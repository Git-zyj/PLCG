/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38704
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) + (((((/* implicit */_Bool) (unsigned char)85)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 &= ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)170))))) : (((var_17) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))))))) <= (((((var_12) >> (((((/* implicit */int) var_1)) - (65))))) - (((/* implicit */long long int) ((/* implicit */int) (short)-13139))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                arr_10 [i_2] [i_1] [i_2 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-13139)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_12))))) || (((/* implicit */_Bool) ((unsigned short) ((signed char) (short)13139))))));
                var_20 = ((/* implicit */signed char) var_18);
            }
            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(((/* implicit */int) var_13)))) > ((-(((/* implicit */int) (_Bool)1)))))))));
            arr_11 [i_0] [i_1] = ((/* implicit */_Bool) max((((4708889954281983897LL) - (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((long long int) var_6))));
        }
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)13139)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)13137))))));
    }
    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (2306450882U))))));
        var_23 = (unsigned short)16128;
        arr_16 [i_3] [i_3] = ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13132))))) != (((/* implicit */int) var_3)))) ? (((long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-13137)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)54723)) - (54695)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) ((2028467446U) >> ((((-(((/* implicit */int) arr_17 [i_4 + 2])))) + (56175)))));
                arr_23 [i_4] [(short)10] [i_4 + 2] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
