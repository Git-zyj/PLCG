/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199993
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
    var_13 ^= ((/* implicit */unsigned char) ((min(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))) != (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) var_6))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (min((((/* implicit */int) ((signed char) var_9))), ((+(((/* implicit */int) var_6))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_0] [(unsigned char)2] [(unsigned short)15] [i_2])) : (((/* implicit */int) var_4))));
                    }
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53230)) | ((~(((/* implicit */int) (unsigned short)12306))))));
                        arr_15 [i_0] [i_1] [(unsigned char)11] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)18] [i_1] [(signed char)12] [(unsigned char)18] [i_4])) : (((/* implicit */int) arr_13 [(signed char)1] [i_2] [(signed char)1] [i_2] [i_2] [i_2])))) * ((-(((/* implicit */int) arr_3 [(unsigned char)0]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) var_1)))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_8))));
                        arr_20 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                    }
                }
                var_19 &= ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))) < (((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_8 [(unsigned short)10] [i_0] [(unsigned short)10])))) : (((/* implicit */int) var_12))))));
                var_20 += ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0])))), ((+(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((min(((-(((/* implicit */int) var_12)))), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8)))))) | (((((((/* implicit */int) var_4)) * (((/* implicit */int) var_6)))) >> (((((/* implicit */int) min(((unsigned short)13660), (((/* implicit */unsigned short) (signed char)-1))))) - (13656)))))));
}
