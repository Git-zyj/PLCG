/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37510
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
    var_12 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (-1247196839))))));
                    arr_9 [i_2] [i_1] [i_1] [i_2] = ((signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [(signed char)8]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_3] [i_6] [i_3] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (1889972241U) : (((/* implicit */unsigned int) 1738887392)))))))));
                            var_14 = ((/* implicit */unsigned int) arr_12 [i_5]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : ((~(((/* implicit */int) var_9))))));
                        var_16 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */short) arr_23 [i_4] [i_7])), (var_8))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        arr_30 [i_9] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) arr_18 [i_3 - 4] [i_4 + 2]));
                        var_17 -= ((/* implicit */unsigned char) ((int) arr_14 [i_4 - 1]));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((signed char) 1247196838))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_1)))));
                        var_19 &= ((/* implicit */short) (-(min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) var_10)))))));
                        arr_35 [i_10] [i_7] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) ((_Bool) (signed char)46)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 24; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned int) ((int) arr_18 [i_3 + 3] [i_4 + 2])));
                        arr_39 [i_4] [i_11 - 2] = ((/* implicit */unsigned short) (((!(arr_23 [i_4] [i_4]))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((int) arr_32 [i_11 - 2] [i_3] [(signed char)14])))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_36 [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 1]))));
                        var_22 ^= ((/* implicit */long long int) ((signed char) var_3));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_4] [i_12] [i_12] [i_4 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_26 [i_12] [i_12] [i_4] [i_4 + 2] [11] [2])) : (((/* implicit */int) arr_26 [(_Bool)1] [5U] [(_Bool)1] [i_4 + 2] [(_Bool)1] [i_4])))))));
                    }
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    arr_44 [i_13] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_3] [(unsigned char)22] [i_4] [i_13] [i_4 + 1]))))) ? ((+(((/* implicit */int) arr_41 [i_4])))) : (((/* implicit */int) arr_17 [i_13]))));
                    var_24 = ((/* implicit */int) ((signed char) (~(arr_10 [i_3 - 1] [i_4 + 1]))));
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_7)))));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_49 [i_3 + 3] [i_3 + 3] [i_4] [i_3 + 3]))));
                            arr_50 [(unsigned short)5] [i_14] [i_4 - 1] [i_4] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_12 [i_15])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
