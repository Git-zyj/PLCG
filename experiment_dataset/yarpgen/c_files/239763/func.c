/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239763
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
    var_17 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)57))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)147)), (var_13)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_1])))))))) == ((~(((/* implicit */int) (unsigned char)111))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) != (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (arr_6 [(_Bool)1] [(unsigned char)10]))))))));
                var_20 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)111));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) arr_10 [i_2] [i_3]);
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
            var_24 = ((/* implicit */long long int) ((arr_11 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)60726)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)111)))));
            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_2]));
            var_27 = ((/* implicit */unsigned short) (unsigned char)145);
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) arr_18 [10U] [i_4] [10U]);
                var_29 = ((/* implicit */int) (~(arr_18 [i_2] [i_4] [i_5])));
                arr_19 [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (unsigned short)28040);
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (((((/* implicit */long long int) ((/* implicit */int) (signed char)97))) + (arr_21 [i_6])))));
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)62667))));
                    var_32 |= ((/* implicit */_Bool) arr_15 [i_2] [i_4] [i_5]);
                }
            }
        }
        arr_23 [i_2] = var_13;
        var_33 = ((/* implicit */int) max((var_33), ((+(((/* implicit */int) arr_7 [i_2] [i_2]))))));
    }
    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
}
