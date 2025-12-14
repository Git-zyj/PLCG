/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22666
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) max((var_4), (var_5)))) >= (((/* implicit */int) arr_0 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), ((unsigned char)182)))) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) >> (((((/* implicit */int) var_4)) - (68))))) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((/* implicit */int) (unsigned short)3767)) / (((/* implicit */int) var_12))))));
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)58423)) != (((/* implicit */int) (unsigned char)8)))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? ((-(((/* implicit */int) arr_0 [i_0])))) : ((+(((((/* implicit */int) (unsigned short)13876)) >> (((((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0])) - (83)))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) max((arr_4 [i_3] [i_1] [i_3]), (((/* implicit */unsigned short) arr_10 [i_0]))))) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 2] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])))));
                        arr_15 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_19 [i_0] [i_0] [i_5] [i_0] = ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_5] [i_5]))));
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned char) (unsigned short)57380)))));
                }
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) min(((unsigned short)58423), (max(((unsigned short)19219), (((/* implicit */unsigned short) var_13))))))), ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        arr_34 [i_6] [i_6] [i_7] [i_8] [i_9] = ((unsigned char) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6 - 1] [i_6 - 1]))));
                        arr_35 [i_6] = var_5;
                    }
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_6 + 2] [i_7])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_13)))))) ? (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)145)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)58446))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_11))));
}
