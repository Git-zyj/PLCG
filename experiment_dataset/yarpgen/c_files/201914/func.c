/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201914
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((unsigned char) (((~(((/* implicit */int) arr_4 [i_0])))) > (((/* implicit */int) arr_1 [i_0] [i_1])))));
                var_16 |= ((/* implicit */unsigned short) min((((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (2985727597U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)5822)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 2985727584U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_12)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [1LL] [i_1])) && (((/* implicit */_Bool) 1957343601U)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) var_0))));
                    var_18 *= ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned short)0))))))) ? (max((((((/* implicit */_Bool) arr_8 [i_0])) ? (1309239699U) : (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_5 [i_0] [(_Bool)1])))) : ((~((~(1309239687U))))));
                    arr_9 [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)19] [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_2] [i_2 - 2]))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_19 = (+(((/* implicit */int) ((unsigned char) (signed char)35))));
                                arr_18 [(short)9] [i_5] [i_5] [i_4] [i_5] [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2985727584U)) ? (434362997U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [15U] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)20595));
                    var_20 ^= ((/* implicit */long long int) (signed char)86);
                }
                arr_20 [20] = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 4294967280U);
    var_22 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
    var_23 *= var_6;
}
