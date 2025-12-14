/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238945
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 += arr_0 [(_Bool)1];
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((short) (~(var_10)))));
                            arr_12 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((2048U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))))));
                            var_15 *= ((long long int) (+(((/* implicit */int) (signed char)127))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_16 |= ((/* implicit */int) ((long long int) 17239727065466889795ULL));
                    var_17 ^= ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 2] [(short)4]))));
                    var_18 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 2] [(unsigned short)0]))));
                    var_19 = (+(((unsigned int) arr_6 [i_0] [i_1] [i_4])));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned long long int) (-((~(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))));
                                var_21 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_3 [i_0] [i_5] [i_0]))))));
                                var_22 = var_3;
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0] [i_0 + 3]))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((unsigned int) arr_18 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                    arr_26 [i_0 - 1] [i_0 - 3] [i_0] = ((/* implicit */long long int) ((int) arr_10 [i_0 + 3]));
                }
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((int) ((short) var_7))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        var_25 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
        var_26 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_8] [i_8]))));
    }
    for (unsigned int i_9 = 4; i_9 < 20; i_9 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)115))));
        var_28 ^= ((/* implicit */_Bool) ((short) ((int) (!(((/* implicit */_Bool) var_12))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((((_Bool) var_12)), ((!(((/* implicit */_Bool) (unsigned short)53631))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 20; i_13 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_30 [i_9 - 1] [i_13 - 2]))));
                                var_31 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_11] [i_11]))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (-(4433230883192832LL))))), ((~(((/* implicit */int) arr_41 [i_9] [i_9 - 4] [i_11] [i_10] [i_11] [i_11]))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((int) (~(arr_42 [i_9 - 4] [i_9 + 1] [i_9] [i_9 - 2] [i_10] [i_11] [i_11])))))));
                }
            } 
        } 
    }
    var_34 += ((/* implicit */signed char) ((_Bool) var_11));
    var_35 += ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}
