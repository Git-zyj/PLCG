/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230303
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
    var_15 = ((/* implicit */signed char) ((((var_13) >= (((/* implicit */long long int) var_12)))) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */signed char) var_0);
                var_17 = min((((/* implicit */long long int) (signed char)54)), (min((min((((/* implicit */long long int) arr_5 [i_0] [(unsigned short)2] [9LL])), (-8809243525380414697LL))), (((/* implicit */long long int) min((var_6), (var_12)))))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-19413)), (-51008901977473879LL)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_19 = ((/* implicit */short) max((var_13), (((/* implicit */long long int) arr_9 [(unsigned short)11] [i_0] [(unsigned short)10] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)57))));
                                var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (var_7) : (var_8)))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) ^ (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1] [i_4 - 1] [(signed char)11]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 1] [0U] [i_1])) : (((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_3] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (unsigned short)57344);
                                var_24 = ((/* implicit */short) min((((/* implicit */int) arr_9 [i_6] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_25 [i_0] [i_6 - 1] [i_6] [i_6 - 3] [i_6 + 2] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
                                arr_26 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
                            }
                        } 
                    } 
                    arr_27 [i_0] [6U] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2])) ? (51008901977473878LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (((/* implicit */long long int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_1]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            {
                arr_34 [i_8] [i_7] = ((/* implicit */unsigned int) var_1);
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_37 [i_7] [(short)2] [(unsigned short)9] = ((/* implicit */short) min((4176511711590370217LL), (((/* implicit */long long int) (signed char)0))));
                    var_25 *= arr_36 [i_7] [i_7] [i_9];
                    var_26 = ((/* implicit */signed char) var_13);
                    arr_38 [i_9] [i_8] [i_7] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) + (arr_32 [i_7] [i_7] [i_7])))));
                }
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_27 += var_12;
                    var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25747))) : (16777184LL)));
                }
                for (signed char i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) 524286U);
                    arr_46 [17U] [i_8] [i_11] = ((/* implicit */short) var_13);
                    arr_47 [i_7] [i_7] [(unsigned short)5] [(short)7] = ((/* implicit */unsigned int) var_9);
                    arr_48 [i_8] [i_8] [i_7] [i_7] = ((/* implicit */short) var_9);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) 4194240U))), (var_3)));
}
