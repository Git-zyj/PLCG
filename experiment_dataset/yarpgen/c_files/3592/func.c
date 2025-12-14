/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3592
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 - 1])) ^ (((/* implicit */int) (short)-27054)))))));
                arr_6 [i_0] [i_0] [8ULL] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-27054))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(short)4])), (arr_5 [i_2] [i_2] [i_2]))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (long long int i_5 = 4; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_4] [i_4] [i_5] = var_5;
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+((+(((/* implicit */int) (!(arr_10 [i_2] [i_3])))))))))));
                            var_18 += ((/* implicit */short) (+(((min((var_0), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            arr_21 [(short)1] [i_3] [i_3] [i_5 + 1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_5] [i_5 + 1] [i_5] [i_5 - 2] [i_5])) - (((/* implicit */int) arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5 + 1]))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_2] [i_4] [i_5] [i_5] [i_5 - 2] [i_5])) + (((/* implicit */int) arr_18 [i_4] [(signed char)0] [i_5] [i_5 - 4] [i_5 - 2] [i_5 - 2])))))));
                            arr_22 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) min(((short)28942), (((/* implicit */short) (unsigned char)131)))))))) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) (-(3600149548543129060LL))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5] [i_7] [i_3]))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_5] [i_2] [i_5 - 4] [i_7] [i_7] [i_3]))) : (13157291507096334210ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5] [i_5 - 1]))))))));
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_5 - 2])) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) (unsigned char)225))))))));
                            arr_26 [i_2] [i_3] [i_3] = ((/* implicit */short) (((-(((/* implicit */int) arr_0 [i_7])))) != (((int) var_3))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_2] [i_3] [i_4] [i_4] [i_5 + 1] [i_8] = ((short) (((_Bool)0) ? (var_5) : (((/* implicit */int) var_9))));
                            arr_31 [i_2] [i_2] [i_5] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)240)) % (((/* implicit */int) arr_18 [i_8] [6] [i_4] [i_4] [i_8] [i_8])))) == (((/* implicit */int) arr_28 [i_5 - 4] [i_5 - 4] [i_4] [i_3] [1LL] [i_8] [i_2]))));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_23 [i_5 - 2] [i_3] [(signed char)2] [i_5 - 1] [i_5] [i_5 + 1] [i_5]))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) var_6);
    var_23 -= ((/* implicit */unsigned char) min((var_0), (((/* implicit */long long int) var_7))));
}
