/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200796
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) max(((+((-(((/* implicit */int) (_Bool)0)))))), ((~(((/* implicit */int) (short)-5415))))));
        var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (arr_8 [i_3] [0ULL] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned int i_5 = 4; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_2] [i_3] [i_4] [i_5 + 1]));
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)6577))));
                        }
                    } 
                } 
                var_16 *= ((/* implicit */unsigned short) arr_7 [i_1] [0]);
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
            {
                var_17 &= ((/* implicit */signed char) var_3);
                var_18 |= ((/* implicit */unsigned int) -588631877);
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_23 [i_7] [i_7] [i_6] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1])))));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)97);
                            arr_25 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_6)))));
                        }
                    } 
                } 
            }
            arr_26 [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_1] [i_1] [i_1] [i_2]));
        }
        var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))));
        var_20 = ((/* implicit */int) (unsigned char)6);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (arr_0 [i_9] [i_9]) : (arr_0 [i_9] [i_9]))), (((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (arr_0 [i_9] [i_9]) : (arr_0 [i_9] [i_9]))))))));
        var_22 = ((/* implicit */signed char) 1691530521);
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 287144652))) < (((/* implicit */int) arr_1 [i_9]))));
    }
    var_24 = ((/* implicit */unsigned int) (unsigned char)6);
    var_25 |= ((/* implicit */signed char) max((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) max(((_Bool)0), ((_Bool)1)))), (var_4)))));
}
