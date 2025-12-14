/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222128
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
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)0] |= ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(unsigned short)0] [(_Bool)1] [(unsigned short)0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 4; i_4 < 18; i_4 += 4) 
                            {
                                arr_17 [i_0] [i_0] [10U] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)176)) == (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) max((arr_15 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_0] [i_0] [i_1 + 1] [i_0])) || (var_15)))))))));
                                arr_18 [i_0] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 2])))))));
                                var_20 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) ((short) (short)8164))) ? (718561752U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))))));
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [14U])) | (((/* implicit */int) (unsigned short)65532))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (arr_13 [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))))) > (min((((/* implicit */unsigned int) var_11)), (min((arr_13 [i_0] [(unsigned char)8] [i_3]), (((/* implicit */unsigned int) (unsigned char)103))))))));
                            var_21 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)40349))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_8))))) : (max((2440000857U), (((/* implicit */unsigned int) var_5)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194240U)) ? (((/* implicit */int) (short)28117)) : (((/* implicit */int) (signed char)44))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_18)))) : (((((/* implicit */int) arr_12 [i_2] [(short)0] [i_2] [i_3])) >> (((((/* implicit */int) (short)-29181)) + (29189))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) 2778017143U)));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_18)))))) ? ((+(((/* implicit */int) (unsigned char)166)))) : (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_5]))));
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_24 = arr_25 [(unsigned char)0] [(unsigned char)0] [2U];
                    var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)82)) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_0])), (var_7)))))) - (((((/* implicit */int) var_7)) << (((var_2) - (1359873856U)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_26 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((2778017132U), (((/* implicit */unsigned int) (short)-28118))))) ? (((/* implicit */int) ((short) var_11))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)50822)) : (((/* implicit */int) (short)29182)))))), ((+(((/* implicit */int) arr_27 [i_0 - 1] [i_1 - 2]))))));
                    var_27 = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [(_Bool)1]);
                    arr_28 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((var_15) ? (((/* implicit */int) max((arr_8 [i_0]), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned short i_8 = 3; i_8 < 20; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min(((_Bool)1), ((((-(((/* implicit */int) var_7)))) > (((/* implicit */int) var_17)))))))));
                                var_29 -= ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((((/* implicit */int) var_9)) - (33652)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (var_4))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_12), (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((898421935U), (((/* implicit */unsigned int) var_1))))))));
}
