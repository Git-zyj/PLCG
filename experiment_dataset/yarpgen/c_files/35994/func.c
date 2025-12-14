/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35994
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)12249))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_13 = (~((~(((arr_2 [i_0] [i_1 - 1]) | (var_9))))));
                        arr_13 [i_1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((-7965676037715504446LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))), (((long long int) var_0))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) ((((var_1) + (((long long int) var_9)))) == ((-(var_7)))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))))));
        var_17 += ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_6] = (_Bool)1;
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1])) ^ (((/* implicit */int) var_6))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_3)))));
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_6] [i_6] [(_Bool)1] = ((-7156337929354219897LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32109))));
                                arr_34 [i_6] = ((/* implicit */short) ((((-8151350564162680089LL) + (9223372036854775807LL))) << (((7325268308625132515LL) - (7325268308625132515LL)))));
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 13; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) arr_35 [i_6 - 1] [i_10 - 1] [i_10 + 3] [i_10] [i_10 + 2] [i_10]);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_36 [i_10 + 2] [i_10] [i_10 + 2] [i_10 + 1])))))));
                                arr_40 [(signed char)8] [i_5] [0LL] [i_10] [i_5] [i_10] &= arr_25 [i_6 - 1] [i_6 - 1] [i_10 + 2] [i_10 + 1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 3; i_12 < 12; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) 9223372036854775807LL)))));
                                arr_45 [i_4] [i_5] [i_6] [i_12 + 2] [i_13] = ((/* implicit */signed char) 9223372036854775801LL);
                                var_24 &= ((/* implicit */long long int) arr_26 [i_12] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 -= ((/* implicit */long long int) var_4);
    }
    var_26 = ((/* implicit */long long int) min((var_26), (var_9)));
}
