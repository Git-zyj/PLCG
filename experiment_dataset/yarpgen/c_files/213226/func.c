/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213226
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
    var_12 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0] [i_1] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (2818475789U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81)))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]))) : (var_6))) : (((/* implicit */unsigned long long int) 1863572602U))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (682202541198629383LL) : (((/* implicit */long long int) 291528023U))));
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned char) arr_7 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]));
                            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-81))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (_Bool)1))))) : (((arr_10 [i_0] [i_2] [i_0] [i_3] [i_4] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(var_6))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((signed char) 2147483644)))));
                            arr_17 [i_0] [i_0] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [i_5]))) >= ((~(((/* implicit */int) (short)-28255))))));
                            arr_18 [i_5] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)63045);
                            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_2 [i_0] [i_0]))) || ((!(var_3)))));
                        }
                        for (long long int i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned short)6791)))));
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9)))));
                        }
                        for (short i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]))) : (((/* implicit */int) (unsigned char)61)));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(var_10))))));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_0] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)37466))))) % ((~(var_6)))));
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-100)))))))));
        }
        var_20 -= ((/* implicit */signed char) (-(14959787859885239928ULL)));
    }
}
