/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54691
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 - 3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_1 [(unsigned char)7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0 + 1]))))) : (var_9))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_13 -= ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((unsigned char) min((arr_1 [i_0]), (arr_1 [(_Bool)0]))))));
        var_14 = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) (unsigned short)25144)), (min((((/* implicit */long long int) arr_1 [i_0])), (-8508509315945325741LL))))));
    }
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */long long int) ((var_12) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (((((+(-8508509315945325741LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25144)) ? (((/* implicit */int) (short)12581)) : (var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1 - 2]))) : (-8508509315945325741LL)));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((short) min((((/* implicit */int) (short)32767)), (((((/* implicit */int) arr_13 [i_1] [i_2])) * (((/* implicit */int) (unsigned short)0)))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_18 ^= (unsigned short)7;
                            var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)237))))) ? (((arr_12 [i_1 + 1] [i_2]) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_2])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_2])))) : (((/* implicit */int) arr_12 [i_1 + 1] [i_2])));
                        }
                        var_20 = ((/* implicit */int) ((arr_15 [i_4 - 2] [i_4 + 1] [i_2] [(unsigned short)7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9753))))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(arr_6 [i_1 + 1] [i_1] [i_6 - 1]))))));
                        var_22 = ((((/* implicit */int) arr_10 [i_2] [i_1 - 1] [i_2 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [16ULL] [13] [13] [i_2 + 1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) var_11);
                            var_24 ^= ((/* implicit */int) (-(arr_5 [i_1 + 1] [i_1 + 1])));
                            var_25 = ((/* implicit */unsigned long long int) (+(2278139121U)));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */int) arr_23 [i_8 - 1] [i_2] [i_1 + 1] [i_8] [i_8])) == (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 68719476735ULL)))))));
                            var_27 = ((/* implicit */long long int) arr_10 [i_2] [i_2] [i_3]);
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) 2278139136U);
                                arr_31 [(_Bool)1] [i_2] [i_2] [i_9] [(short)12] [i_2] [i_3] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_3] [i_9])) <= (((/* implicit */int) var_6))))))) * (((/* implicit */int) ((_Bool) arr_19 [(short)7] [i_2] [i_2] [i_2] [(short)6] [(short)7])))));
                                var_29 ^= ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_25 [i_1 - 1] [i_2] [i_3] [i_10] [i_1 - 1] [(unsigned char)14]))))))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_17 [0] [i_2 + 1] [i_10] [0])))) <= (((/* implicit */int) arr_27 [i_1] [5LL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_1] [i_1 - 1] [i_2 + 1] [i_10 - 1]))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_22 [i_1 - 2] [4ULL] [i_3] [i_3] [4ULL] [i_10 + 1] [i_10])), (8508509315945325741LL)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((unsigned int) (-((-(18446744073709551615ULL))))));
}
