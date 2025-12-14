/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241008
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_2);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0])))) : (((unsigned long long int) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_3] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1]))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_19 |= ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)11480)))) & (((/* implicit */int) (short)-32757))))) / (var_12)));
                        arr_13 [i_1] [i_1] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */signed char) var_0);
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1356126626)))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)32762)) ? (((((/* implicit */int) arr_7 [i_1])) + (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)8128)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)63434)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1] [i_2] [i_3] [i_4])), (var_12)))) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_1] [i_1] [i_3])) : (((/* implicit */int) var_6)))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min(((unsigned short)8123), (((/* implicit */unsigned short) (short)32758))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (12672597979386311894ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32755), (var_8))))))))) & (((unsigned int) max((arr_11 [i_1] [i_2] [i_3] [i_5]), (((/* implicit */int) (short)15)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] [i_6]))))) ? (min((var_12), (((/* implicit */long long int) arr_7 [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_4 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                    }
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) var_2)) - (var_12)))))) ^ (min((var_11), (arr_6 [i_1]))))))));
                    var_27 = ((/* implicit */unsigned long long int) (short)32753);
                }
            } 
        } 
        var_28 = ((/* implicit */int) (-((~(var_12)))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) ((unsigned char) var_14));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+((~(((/* implicit */int) (_Bool)1)))))))));
        var_31 |= ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
    }
    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_5))));
}
