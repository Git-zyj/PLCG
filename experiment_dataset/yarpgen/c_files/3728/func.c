/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3728
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((max((2147483647), (((/* implicit */int) var_9)))) >> (((((((/* implicit */int) (signed char)63)) ^ (2147483647))) - (2147483572))))) : (((((((/* implicit */int) (_Bool)1)) > (-1632568136))) ? (((/* implicit */int) ((_Bool) var_16))) : ((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [9] [i_0] = (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */int) var_3)), (var_5))) : (arr_0 [i_0]))));
                var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (arr_2 [i_1]))) + (2147483647))) >> (((((/* implicit */int) ((signed char) ((var_5) / (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) - (124)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_2]))) : (min((((/* implicit */int) (_Bool)1)), (arr_0 [i_2]))))) - ((((~(((/* implicit */int) arr_8 [i_4] [i_2] [i_2] [(_Bool)1] [i_2] [i_0])))) / (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_2] [i_3] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                                var_23 -= ((/* implicit */_Bool) (signed char)10);
                                arr_13 [i_2] [i_0] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_4])) : (((/* implicit */int) (signed char)-1))))));
                            }
                        } 
                    } 
                    var_24 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_6))))))) || (((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (-2147483647 - 1))))));
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-19)) != (((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [(_Bool)1])), ((signed char)-1)))))) ? (((((/* implicit */_Bool) ((arr_10 [i_0] [i_1]) ? (((/* implicit */int) var_3)) : (arr_2 [i_2])))) ? (((arr_8 [i_0] [i_0] [i_1] [6] [i_1] [i_1]) ? (((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_2] [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) (signed char)14))));
                    var_26 = var_6;
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_18 [i_1]);
                        arr_19 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) (((((~(arr_16 [i_6] [i_6] [i_5] [i_6]))) << (((arr_17 [i_0] [i_0] [i_0] [i_0]) - (1046291221))))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))))))))) : (((/* implicit */signed char) (((((~(arr_16 [i_6] [i_6] [i_5] [i_6]))) << (((((arr_17 [i_0] [i_0] [i_0] [i_0]) + (1046291221))) + (639447064))))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_28 -= ((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_19))));
                                arr_26 [i_0] [i_0] = ((/* implicit */signed char) (-(arr_0 [i_0])));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((int) var_0)) : ((-(arr_15 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_5])) ^ (arr_5 [i_0] [i_0] [i_7])))) ? ((+(((/* implicit */int) arr_6 [i_7] [i_7] [i_7])))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)55)) : (var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_30 += ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(_Bool)1] [i_1])) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_5] [i_1] [i_5])) : (max((((/* implicit */int) var_19)), (arr_0 [i_5])))))));
                }
            }
        } 
    } 
}
