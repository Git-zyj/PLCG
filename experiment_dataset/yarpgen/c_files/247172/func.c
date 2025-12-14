/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247172
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */int) ((signed char) max((2083925199U), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [(unsigned short)21]);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned char) 4278190080U)))));
                                var_18 = (~(arr_8 [i_0] [i_0] [i_0]));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_5 [i_2] [i_1]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (((unsigned int) var_2))));
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_22 = (+(((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1]))));
                        var_23 |= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 1394963903820947476ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 2) 
                        {
                            arr_22 [5LL] [i_1] [i_2] [i_7] [i_8 - 2] [i_0] [i_8 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (var_2))))))), (arr_14 [i_0] [i_0])));
                            var_25 += ((/* implicit */_Bool) arr_11 [i_8] [i_8] [(signed char)5] [i_2] [i_2] [i_0] [i_0]);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_4 [i_8 - 1] [i_1 + 1] [i_0 - 1]))) | ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))));
                        }
                        var_27 = arr_1 [i_0];
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_28 = arr_12 [i_0] [15LL] [15LL] [i_2] [i_9];
                        var_29 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 15053650711429378598ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (-4701021322470666619LL))))) != (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_9] [i_1]))));
                        var_30 = ((/* implicit */unsigned long long int) arr_11 [i_9] [i_0] [i_2] [i_1] [i_1 + 1] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_7);
    var_32 = ((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) (unsigned short)38973)) || ((!(((/* implicit */_Bool) var_0)))))));
}
