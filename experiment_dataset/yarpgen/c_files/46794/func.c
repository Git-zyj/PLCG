/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46794
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
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((signed char) arr_1 [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((_Bool) (_Bool)1));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_1))))) ? (min((((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_10))))))) : (((/* implicit */int) ((_Bool) (signed char)12))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_8 [i_0]), (arr_8 [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned short) var_2)), (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))), (((unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)70)))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */short) arr_5 [i_0 - 3])), (arr_0 [i_0 - 3]))))));
                        arr_12 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_10 [i_2] [(signed char)14])));
                        var_18 = ((/* implicit */unsigned int) ((_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_2])))) : (max((((/* implicit */unsigned int) arr_0 [(short)4])), (var_4))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_19 -= ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((var_3) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 3] [i_0 - 1] [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_0))));
                            arr_18 [i_5] [i_0] [i_2] [i_0] [(signed char)4] = ((/* implicit */unsigned int) ((((_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_0] [i_0]))));
                        }
                        var_21 = ((/* implicit */unsigned int) min((var_0), (min((((/* implicit */short) var_9)), (arr_0 [i_0 + 1])))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [(signed char)10]))));
                    arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0 - 1]))));
                    var_23 += ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((min((arr_9 [i_0 - 3] [i_1 + 1] [i_6] [i_7 + 2]), (((/* implicit */short) arr_26 [i_0] [i_1] [i_6] [i_7 + 1] [i_7])))), (((/* implicit */short) var_11)))))));
                                var_25 = ((/* implicit */unsigned char) (-(var_4)));
                            }
                        } 
                    } 
                }
                for (short i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_36 [i_11] [i_0] [i_9] [i_9] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_11)), (min((((/* implicit */unsigned short) ((signed char) var_2))), (arr_35 [i_0] [i_1] [i_9] [i_10])))));
                                arr_37 [i_0] = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_10 [i_9 - 1] [i_0])) : (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    var_26 = min((((/* implicit */unsigned int) arr_22 [i_9] [i_0] [i_1 - 2] [i_1 + 1] [i_1] [i_0])), (((unsigned int) var_10)));
                }
                /* vectorizable */
                for (unsigned int i_12 = 3; i_12 < 22; i_12 += 4) 
                {
                    var_27 = ((/* implicit */short) ((var_10) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1 - 1])))));
                    var_28 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_2)))));
                    var_29 = ((/* implicit */unsigned short) var_11);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 3; i_13 < 16; i_13 += 1) 
    {
        for (unsigned int i_14 = 1; i_14 < 13; i_14 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) min((var_10), (var_10)))), ((~(((/* implicit */int) (_Bool)1))))));
                arr_47 [i_13] [i_13] [i_14] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64766)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (_Bool)1))))) ? (max((var_4), (((/* implicit */unsigned int) arr_28 [i_13] [i_13])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)-1)))))));
                var_31 = ((/* implicit */signed char) arr_38 [(unsigned short)7]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) min(((signed char)-20), (((/* implicit */signed char) (_Bool)1))));
}
