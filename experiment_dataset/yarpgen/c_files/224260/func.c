/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224260
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
    var_13 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
    var_14 -= ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_2 [i_0 + 2])));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3U))));
        var_16 = ((/* implicit */short) (+(var_7)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) (+(4294967293U)));
        var_18 += ((/* implicit */short) (+(var_4)));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned char) var_1))) ? ((+(0U))) : (3U));
                        var_19 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) == (1818151027)));
                        var_20 = (+(((/* implicit */int) (unsigned char)4)));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_1] [i_5] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (arr_12 [i_1 - 1] [i_2] [i_3] [i_1] [i_4 + 2])));
                            var_21 += ((/* implicit */unsigned long long int) (unsigned char)252);
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) 10U);
                            arr_21 [i_6] [(short)12] [i_3] &= ((/* implicit */int) arr_18 [(unsigned char)0] [i_1 - 1] [(unsigned char)0] [i_4 + 4] [i_4] [i_4 + 2]);
                            var_22 *= ((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [(unsigned short)6]);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 4; i_7 < 15; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */long long int) arr_7 [i_1 - 3] [i_7 - 1])) : ((~((-9223372036854775807LL - 1LL))))));
            arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_22 [i_1 - 1] [i_7] [i_7]) ? (((/* implicit */int) arr_4 [i_1 - 3])) : (var_11)));
        }
    }
    for (int i_8 = 3; i_8 < 16; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(0ULL))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) var_7)) & (16U)))))) ? ((((~(var_0))) % (min((((/* implicit */unsigned long long int) (unsigned short)511)), (arr_8 [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) min((arr_15 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 2]), (((/* implicit */int) (short)13862)))))));
    }
    var_25 = ((/* implicit */long long int) var_3);
    var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) (!(((/* implicit */_Bool) max((4294967292U), (((/* implicit */unsigned int) -747010662))))))))))));
}
