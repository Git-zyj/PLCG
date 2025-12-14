/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49074
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_19 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1] [i_1] [3LL])));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (+(var_8)));
            arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)32764))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned short) (!(((((/* implicit */int) var_6)) >= (((/* implicit */int) var_10))))));
            var_21 -= ((/* implicit */int) (-(-1LL)));
            var_22 = ((/* implicit */short) ((((_Bool) (_Bool)0)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_2])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        }
        var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned short) ((signed char) arr_9 [(signed char)13] [(signed char)13]));
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)3660))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_19 [i_6] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (+(arr_11 [i_3 - 1] [i_3 + 1])));
                                var_26 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_4] [i_5]);
                                arr_20 [i_0] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_6 [(unsigned char)10] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_27 &= ((/* implicit */short) ((int) (unsigned short)1024));
        arr_25 [9LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_16))));
        arr_26 [i_7] = ((/* implicit */short) ((unsigned short) var_1));
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) * (((((((/* implicit */_Bool) 5192601734096036885LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
        arr_31 [4] [4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) arr_30 [i_8] [i_8]))), (var_18)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 += ((/* implicit */signed char) var_7);
        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
    }
    var_32 |= ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (var_11)));
}
