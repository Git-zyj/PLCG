/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40689
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-15914))));
    var_13 = ((/* implicit */signed char) (~((-(var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))));
                arr_6 [(unsigned short)0] [(unsigned char)5] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_3 [i_0] [i_1])))))), ((~(arr_4 [i_0] [(signed char)12] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_23 [i_2] [i_3] [i_4] [(unsigned short)12] [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_11 [i_5 + 1] [i_2 - 1]) + ((~(arr_11 [i_5 - 1] [i_2 + 1])))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((unsigned char) arr_15 [i_2] [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_19 [i_2 + 1])))) : (((((/* implicit */_Bool) max(((unsigned short)65532), (((/* implicit */unsigned short) (unsigned char)10))))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) arr_14 [i_2] [i_2])) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((signed char) arr_9 [i_2]))))))))));
                                arr_24 [i_6] [i_5] [i_5 + 1] [i_4] [i_3] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((((long long int) arr_20 [12LL] [12LL] [i_2 + 1] [i_4] [i_5 - 1])) * (min((min((3670124884857292967LL), (((/* implicit */long long int) arr_19 [i_2])))), (min((3253845256298153677LL), (var_0)))))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_2] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((long long int) arr_8 [(unsigned char)8]))))) ? ((((+(((/* implicit */int) arr_12 [(unsigned short)13] [(unsigned short)13] [i_4])))) - (((((/* implicit */int) (signed char)124)) - (((/* implicit */int) (signed char)-33)))))) : (max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-18)), ((unsigned short)34741))))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) (unsigned short)28101)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)58)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7));
}
