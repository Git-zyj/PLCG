/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208544
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_5))))) : (((long long int) -1882698821))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)22918))))))));
    var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (2581212636U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) var_3)) ? (9725206763068118617ULL) : (((/* implicit */unsigned long long int) 3202144005U)))) - (9725206763068118610ULL))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_0));
        var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_2)) - (23818))))) : (((/* implicit */int) ((unsigned char) var_6))))), (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned int) ((var_10) | (((/* implicit */unsigned long long int) (~(895353688U))))));
        var_17 += ((/* implicit */unsigned short) (unsigned char)254);
        arr_7 [i_1] = ((/* implicit */_Bool) var_0);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 454525534348505280ULL)) ? (((/* implicit */int) (short)-2218)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)30038))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (unsigned char)28);
                                arr_19 [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26343)) ? (((/* implicit */long long int) 2591758887U)) : (-6LL)));
                                var_22 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((unsigned short) min((1703208405U), (((/* implicit */unsigned int) var_8)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned char) (-(var_8)));
        var_24 = ((/* implicit */short) min((var_24), ((short)-30048)));
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */unsigned long long int) 3202144014U)) : (var_10))) > (((/* implicit */unsigned long long int) var_4))));
    }
}
