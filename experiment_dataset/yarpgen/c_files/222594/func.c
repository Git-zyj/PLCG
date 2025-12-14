/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222594
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_2)), (((signed char) (unsigned short)16717))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16717))))) ? ((-(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) var_9)))))) : (((/* implicit */int) (unsigned short)16717))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)16717)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)16717)) == (((/* implicit */int) (short)-4531)))))));
                        var_20 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_3] [i_3]))));
                        arr_13 [i_0] = ((/* implicit */signed char) (~(arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [(signed char)17] [i_0]))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4531)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_1] [i_2] [i_4]) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_1)))) ? (((/* implicit */unsigned long long int) 3816021209U)) : (((unsigned long long int) var_14))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) arr_0 [i_1])) : ((-(((/* implicit */int) arr_15 [i_5] [i_1] [i_0]))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5])) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */signed char) arr_7 [i_5] [i_2] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [7U] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) (short)-4531))) : (((/* implicit */int) min(((short)11416), (((/* implicit */short) arr_10 [i_0] [i_0]))))))), ((-(((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
                                var_29 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)66))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((signed char) ((((/* implicit */_Bool) (+(var_1)))) ? (var_3) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)127)))))));
}
