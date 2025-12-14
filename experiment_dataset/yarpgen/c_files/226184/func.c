/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226184
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_18)))) ? (((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))) ? (var_1) : ((+(406672252U)))));
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_7 [i_0] [(unsigned short)7] [i_1] [i_2]) : (((/* implicit */unsigned int) var_16))))))) ? ((~(4250275350U))) : (((((/* implicit */_Bool) (+(18446744073709551609ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_11 [i_0] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) 1944185476U)) ? (4044369568U) : (4250275350U)));
                    arr_12 [i_2] [i_2] [10ULL] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)4])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)56086)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)35)))) : ((+(986724097)))));
                                var_22 += ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) : (4250275342U))) : (((((/* implicit */_Bool) 536870912U)) ? (2350781831U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))))));
                                arr_17 [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)237)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_4);
}
