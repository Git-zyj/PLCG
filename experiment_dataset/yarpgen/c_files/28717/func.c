/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28717
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
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */unsigned int) var_1)) : (var_14)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_1 [(short)16]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [(unsigned char)18])) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) var_4)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_1 [i_0]))))));
                            var_19 -= ((/* implicit */_Bool) (~((~(var_9)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_18 [i_0] [(unsigned char)12] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [(unsigned short)16]))))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 3] [i_5] [i_5] [i_0 - 3] [i_5]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_2] [i_3] [i_0 - 3])) : (arr_13 [i_0 + 1] [(unsigned char)0] [i_0] [i_0] [i_0]))))));
                            var_21 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + ((-(var_1)))))));
                            var_22 = ((/* implicit */unsigned short) arr_3 [i_0]);
                            var_23 = ((/* implicit */unsigned int) (~(var_5)));
                        }
                        var_24 = ((/* implicit */unsigned char) var_7);
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((min((((var_1) + (((/* implicit */int) (signed char)-108)))), (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((short) (_Bool)1)))))))))));
                            var_26 -= ((/* implicit */_Bool) ((min((min((var_5), (((/* implicit */int) arr_5 [i_7])))), ((-(((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_7] [i_6] [i_2] [i_1] [i_7])))))))));
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_27 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) arr_5 [i_8]))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [(unsigned char)18])) ? (var_5) : (((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_2])))));
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */unsigned char) var_7);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_28 -= ((/* implicit */int) (((~((~(var_14))))) == (var_14)));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_9])) ? (arr_12 [i_9] [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))) : (min((((arr_1 [i_9]) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_12 [i_0] [i_1] [i_9])))))))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) | (max((((/* implicit */unsigned long long int) var_10)), (var_11)))));
                            var_31 = ((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [i_0 - 4])) || (((/* implicit */_Bool) arr_27 [i_0] [i_0 - 4]))))) : (((var_5) - (((/* implicit */int) var_13)))));
                        }
                        var_32 = (!((!(((/* implicit */_Bool) arr_3 [i_0])))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [(unsigned char)8] [i_2] [i_0 - 3] [i_1] [(unsigned char)8])) < (((/* implicit */int) (short)-4)))))));
                        /* LoopSeq 1 */
                        for (int i_11 = 2; i_11 < 18; i_11 += 4) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((var_1) % (((var_5) | (var_5)))));
                            arr_36 [i_0] = ((/* implicit */signed char) arr_20 [i_0 + 1] [i_0] [i_0 - 3]);
                        }
                        var_34 ^= ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_14)))));
                    }
                    arr_37 [i_0 - 1] [(_Bool)1] &= ((/* implicit */unsigned char) var_9);
                    var_35 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_31 [(_Bool)1] [i_1] [i_2] [i_0] [i_2]))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) (-(var_1)));
    }
    var_37 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)130));
    var_38 = ((/* implicit */unsigned long long int) (unsigned char)210);
}
