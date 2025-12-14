/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35328
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
    var_20 |= ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)18)) ? (1638591975U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((4094318777U), (((/* implicit */unsigned int) (unsigned short)30707)))))) ? (((/* implicit */int) ((((_Bool) (unsigned short)34829)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_16))))))) : (((/* implicit */int) ((((int) var_3)) <= (((/* implicit */int) arr_3 [i_1] [i_2] [i_4])))))));
                                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_7)))), (((int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30707))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))));
                                var_23 += ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) min((var_24), ((~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (2200761315U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_7]), (((/* implicit */unsigned long long int) var_1))))) ? (min((12ULL), (arr_13 [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5 + 1]))))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (3614760707U)))) ? (((/* implicit */unsigned long long int) arr_10 [i_5])) : (min((((/* implicit */unsigned long long int) arr_18 [i_7])), (13306213284540210573ULL)))))) ? (max((((((/* implicit */_Bool) (unsigned char)13)) ? (arr_17 [i_5] [i_6] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))), (((unsigned int) var_9)))) : (2297208359U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) var_11);
                            var_28 |= ((/* implicit */signed char) arr_22 [i_5] [i_6] [i_9] [i_10]);
                            var_29 += ((/* implicit */int) var_3);
                            var_30 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10771))) - (72055395014672384LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_31 *= min((arr_11 [i_6]), (((/* implicit */signed char) arr_16 [i_6 - 2] [i_5] [i_5] [i_5 + 3])));
                            var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9643))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
}
