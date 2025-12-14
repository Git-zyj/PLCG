/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239224
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_3)) % (((/* implicit */int) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_17 += ((/* implicit */int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) max((-1089237599), (((/* implicit */int) (short)32767))))) : (min((1817292998U), (((/* implicit */unsigned int) (signed char)-125))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_2] [i_2] [i_4]))));
                                var_19 = ((/* implicit */unsigned short) max((((max((var_12), (((/* implicit */long long int) arr_1 [i_2] [i_4])))) - (((/* implicit */long long int) ((((/* implicit */int) (signed char)-117)) - (1130875787)))))), (((/* implicit */long long int) (-(32767U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_3] [i_6] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)119))));
                                arr_21 [i_1] = ((/* implicit */unsigned short) ((1096899320U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))));
                                arr_22 [i_1 - 1] [(short)5] [i_3] [(unsigned short)9] [i_7] = (~(((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) (unsigned char)190)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 += ((/* implicit */_Bool) max(((~(4294967294U))), (((/* implicit */unsigned int) 1130875787))));
    }
    for (signed char i_8 = 3; i_8 < 14; i_8 += 2) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned long long int) max(((-((+(1859920486U))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1977306346765007241LL)))) ? ((-(arr_24 [i_8]))) : ((-(((/* implicit */int) (unsigned short)5)))))))));
        var_21 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_8 + 1] [i_8 - 3]))));
        var_22 = ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_23 [i_8 - 3] [i_8 - 2])), (var_12))), (((/* implicit */long long int) min((arr_23 [i_8 - 2] [i_8 - 3]), (arr_23 [i_8 - 1] [i_8 - 1]))))));
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((var_3), (((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) <= (-2121687908)))))))));
}
