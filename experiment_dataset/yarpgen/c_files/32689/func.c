/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32689
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 -= ((/* implicit */signed char) (((~(((/* implicit */int) arr_0 [i_0 - 1])))) | ((~(((/* implicit */int) arr_0 [i_0 - 3]))))));
            arr_5 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) >= (min((((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 + 2])), (arr_4 [i_0])))));
            var_18 = ((/* implicit */short) ((((/* implicit */int) (signed char)-14)) >= (((/* implicit */int) max((((((/* implicit */_Bool) (signed char)5)) || (((/* implicit */_Bool) (signed char)-10)))), (((_Bool) (signed char)-14)))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((arr_1 [i_0]) > (((/* implicit */int) ((signed char) (signed char)32)))));
                var_19 = ((/* implicit */int) ((signed char) (((+(((/* implicit */int) (unsigned char)51)))) >= (((/* implicit */int) ((signed char) var_1))))));
                arr_10 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)51);
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_15 [0] [(short)3] [i_1] [(short)2] = ((/* implicit */signed char) var_10);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) - (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((var_2) == (((/* implicit */int) (signed char)-10))))) : (arr_12 [i_1])));
            }
            for (signed char i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32755))))));
                var_22 = ((/* implicit */_Bool) arr_1 [i_1]);
                arr_19 [i_1] [i_1] [2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)91))));
                arr_20 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((arr_16 [i_1] [i_4 + 4] [i_4 + 4]) + (((/* implicit */int) (unsigned char)82))))) : (((unsigned int) (+(arr_16 [i_1] [i_1] [i_1]))))));
            }
            for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((short)29963), (((/* implicit */short) arr_13 [i_0 - 2] [i_0 - 1] [i_5 - 2] [i_5 - 1]))))), (((unsigned long long int) (~(var_3))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                            arr_30 [i_0] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_25 [i_1])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) arr_28 [(unsigned char)3] [i_5] [(unsigned char)4] [i_0] [i_0] [i_0] [i_0 + 2]);
            }
        }
        var_26 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_16 [i_0] [(_Bool)1] [i_0]) < (((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_0 - 2] [(unsigned char)6])))))));
        var_27 = ((/* implicit */short) (unsigned char)131);
    }
    for (signed char i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        var_28 = ((/* implicit */_Bool) (-(max((((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) arr_31 [i_8 + 3] [i_8 + 3])))), (((/* implicit */int) max((arr_32 [(short)4]), ((signed char)-16))))))));
        arr_34 [i_8 - 1] [i_8] = ((/* implicit */unsigned char) ((arr_33 [i_8 + 1] [9]) % ((-(max((var_13), (arr_33 [i_8] [i_8 + 1])))))));
        var_29 = ((/* implicit */signed char) max((((((((/* implicit */int) arr_31 [i_8] [i_8 + 1])) * (((/* implicit */int) var_16)))) / (((((/* implicit */int) (signed char)-8)) - (((/* implicit */int) (_Bool)1)))))), (var_2)));
        var_30 = ((/* implicit */unsigned char) var_9);
    }
    var_31 = ((/* implicit */signed char) var_13);
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_0))));
    var_33 = ((/* implicit */int) var_7);
    var_34 = ((/* implicit */int) var_14);
}
