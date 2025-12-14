/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243778
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_19 |= ((/* implicit */_Bool) (((((-(((/* implicit */int) var_17)))) + (2147483647))) << (((((var_3) + (4763236166724665887LL))) - (3LL)))));
        var_20 *= ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_15)))))) : (min((((/* implicit */unsigned int) ((short) 1284354411U))), ((+(3010612889U))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) var_9);
                var_23 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (unsigned short)65519);
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 2449809899U)) ? (354575838) : (2147483647))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(arr_15 [i_6] [i_6] [i_6] [i_6 + 2] [i_2 + 4]))))));
                            var_28 += ((/* implicit */long long int) ((signed char) arr_3 [i_0 - 1] [i_5 + 1]));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_7 = 4; i_7 < 23; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) arr_19 [i_0] [i_0 - 1] [i_7 + 2] [i_8]);
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) (+(arr_21 [i_0] [i_0 - 2] [i_0 - 2])));
                            var_31 -= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                            var_32 = ((/* implicit */short) ((int) arr_17 [i_7]));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_14) : (((/* implicit */int) var_16)))))));
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */short) (_Bool)0);
                        }
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                        {
                            var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 3] [i_7]))));
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0 - 2] [i_0 - 1] [i_7] [i_7] [i_7 - 2] [i_7 - 2])) >> (((((/* implicit */int) arr_27 [i_0 - 2] [i_7] [i_7] [0U] [i_7] [i_7 - 2])) - (2034)))));
                            arr_29 [i_7] [i_8] [i_1] = ((/* implicit */unsigned char) var_12);
                        }
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                        {
                            arr_32 [i_1] [i_1] [i_11] = ((/* implicit */long long int) ((_Bool) var_11));
                            var_35 = ((/* implicit */_Bool) arr_5 [i_7 + 2] [i_0 + 1]);
                            var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_25 [i_0] [i_1] [i_7] [i_8] [i_11])))));
                            var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_17 [i_7 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2])))));
                        }
                        arr_33 [i_8] [i_1] [i_1] [21LL] = ((/* implicit */unsigned short) (~(0ULL)));
                    }
                } 
            } 
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12]))) : (arr_20 [i_12] [i_12] [i_12] [8LL])))) ? (min((((/* implicit */long long int) var_4)), (arr_20 [i_12] [i_12] [i_12] [i_12]))) : (((/* implicit */long long int) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12])))))))))));
        arr_38 [i_12] = ((/* implicit */short) (!(((_Bool) 16ULL))));
        arr_39 [i_12] [i_12] = max((((((/* implicit */_Bool) arr_21 [i_12] [i_12] [9U])) ? (((/* implicit */int) ((unsigned char) arr_14 [i_12] [i_12] [i_12] [16U] [i_12]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_34 [(short)15] [16LL])) : (var_6))))), (((/* implicit */int) ((_Bool) arr_24 [i_12] [(unsigned short)5] [i_12] [i_12] [i_12]))));
    }
    var_39 = ((/* implicit */short) var_11);
    var_40 = ((/* implicit */short) var_3);
}
