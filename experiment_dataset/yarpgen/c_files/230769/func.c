/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230769
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
    var_18 = ((/* implicit */unsigned short) var_16);
    var_19 = ((/* implicit */unsigned short) ((signed char) max((var_6), (((/* implicit */long long int) var_9)))));
    var_20 = ((/* implicit */_Bool) ((short) ((unsigned int) (unsigned short)53100)));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_12)))))), (min((var_2), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12418)) > (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
            var_22 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) & (((/* implicit */int) ((short) var_2)))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
            {
                var_23 = (unsigned short)50590;
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) arr_8 [i_0]))));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
            {
                arr_15 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_8))) & (((/* implicit */int) arr_8 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] [i_5] = arr_19 [i_0] [i_1] [i_0] [i_0];
                            var_25 = ((/* implicit */unsigned char) ((unsigned short) arr_6 [i_5 + 4] [i_5 - 3]));
                            arr_21 [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5] [i_5] [i_0]);
                            arr_22 [(_Bool)1] [i_0] [i_3] [14] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_9);
                            arr_23 [i_0] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) (~(((long long int) var_4))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((int) arr_11 [i_0] [i_1] [i_3])))));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0]))));
                arr_26 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((short) arr_6 [i_0] [i_6])));
            }
        }
        var_29 += ((/* implicit */long long int) var_17);
        arr_27 [(unsigned short)6] [i_0] = ((/* implicit */long long int) ((_Bool) arr_3 [i_0]));
        arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_25 [i_0] [i_0] [16U]))));
    }
}
