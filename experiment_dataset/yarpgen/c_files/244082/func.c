/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244082
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) ^ (var_7)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) arr_6 [i_0]);
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((max((arr_9 [i_2] [i_1] [i_2] [i_2] [i_4]), (((/* implicit */unsigned long long int) var_8)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))) != (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-33)) && (((/* implicit */_Bool) arr_6 [i_4 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 2] [i_4 + 2] [i_2] [i_0 - 2] [i_4] [i_0] [i_3]))) : (min((var_1), (((/* implicit */long long int) var_11)))))))));
                                arr_13 [i_2] [i_1] [3U] [3U] [(unsigned short)5] = ((/* implicit */unsigned short) (signed char)24);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) arr_3 [i_0] [i_0 - 1] [i_2]);
                    var_15 = var_10;
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8331))))) ? (((/* implicit */unsigned long long int) ((505301211U) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5] [i_5 + 1])) ? (arr_15 [i_5 - 3] [i_5 - 1]) : (3464164330166198978ULL)))));
        var_16 = ((/* implicit */int) ((((/* implicit */int) (signed char)-40)) != (553455544)));
        var_17 = ((/* implicit */unsigned long long int) arr_10 [i_5 - 3] [i_5] [i_5] [(signed char)2] [i_5] [i_5] [(signed char)9]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_18 = (-(((/* implicit */int) (unsigned short)65532)));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_5))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            {
                                arr_31 [i_6] [(unsigned short)15] [i_7] = ((/* implicit */short) var_9);
                                arr_32 [i_10] [i_7] [14] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_7 + 2] [i_9 + 2])) != (((/* implicit */int) arr_10 [(unsigned short)0] [i_10 - 1] [i_7] [(unsigned short)0] [i_10 - 1] [i_9 + 1] [i_7 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_6] = ((/* implicit */unsigned short) (signed char)116);
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11] [i_11] [i_11]))) - (arr_2 [i_11])));
        arr_37 [i_11] [8] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)862)) ^ (((/* implicit */int) (signed char)72))));
    }
    var_21 = ((/* implicit */unsigned short) max((((int) ((-969095151) + (((/* implicit */int) (signed char)-47))))), (((/* implicit */int) var_4))));
}
