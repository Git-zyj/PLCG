/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19139
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
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_7), ((short)-21975))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 -= ((/* implicit */int) (short)21986);
        var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)1] [i_1 - 1])) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1] [i_1 + 1])), (arr_1 [i_1 + 2])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_8 [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_16 = ((/* implicit */int) (!((_Bool)0)));
                var_17 = ((short) (short)-21986);
            }
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_18 = ((/* implicit */int) arr_15 [i_2]);
                var_19 = ((/* implicit */_Bool) arr_9 [i_1]);
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */short) arr_17 [(_Bool)1] [i_1 + 2] [i_5 - 1]);
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65531))));
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_1 - 1] [i_1 - 1] [i_5] = ((/* implicit */signed char) arr_2 [i_1]);
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) (short)-1);
                        var_24 = ((/* implicit */signed char) arr_13 [i_1 + 1]);
                    }
                    var_25 = ((/* implicit */long long int) (unsigned short)65500);
                    arr_33 [i_1] [i_2] [i_5 - 1] [i_8] [i_5] [i_5] = arr_5 [i_1 + 2];
                }
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_36 [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) arr_23 [i_1] [i_2] [i_2] [i_10] [i_10]);
                var_26 = ((/* implicit */signed char) (short)-8176);
            }
            arr_37 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_2] [i_2])) ? (arr_11 [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) (!(arr_31 [i_1] [i_2] [i_2]))))));
            arr_38 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
        }
    }
}
