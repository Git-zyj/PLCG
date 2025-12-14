/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245882
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
    var_17 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (!((_Bool)1)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1394826120U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (-9223372036854775804LL) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_1 [i_2 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) 2900141176U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) > (((var_16) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [12] [8U]))))))))));
                                var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0])) / (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) (+(var_6)))))) ? (2586953750086241648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                arr_18 [i_0] [i_1] [11LL] [i_5] [11LL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_14 [i_1] [i_6])))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_2 - 1] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((unsigned long long int) var_15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
