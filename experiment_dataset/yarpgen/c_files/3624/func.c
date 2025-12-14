/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3624
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(unsigned short)11])) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)0))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_0] [i_1] [i_0] [i_4])))))));
                                arr_14 [i_2] [i_1] [i_2 + 1] [11] [9U] [i_1] [11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)3] [i_1] [i_2] [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_1] [9LL]))))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (18446744073709551609ULL) : (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)174))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [(unsigned short)3] [i_0]) : (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-28086)))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 221343189U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0] [i_2 + 3] [i_1] [i_0]), (arr_9 [i_0] [i_2 + 2] [i_1] [i_0])))))));
                    arr_15 [i_0] [i_1] [i_2 + 2] [i_1] = arr_5 [i_0] [i_0] [i_0] [i_1];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6 + 1] [i_5])) : (((/* implicit */int) var_5)))));
                    var_13 = ((/* implicit */unsigned short) arr_1 [i_5]);
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) var_1);
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        for (short i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            {
                var_16 -= ((/* implicit */short) (~(18446744073709551601ULL)));
                arr_31 [i_8] = ((/* implicit */signed char) var_7);
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_28 [i_8 - 1])))) * (((((/* implicit */_Bool) arr_29 [i_9])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) arr_26 [i_8 + 1] [i_9 - 1]))))));
            }
        } 
    } 
}
