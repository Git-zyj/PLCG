/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35889
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)42208)))) + (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [1LL]))) && (((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_1 [2U])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((max((((/* implicit */long long int) var_3)), (var_4))), (((/* implicit */long long int) ((unsigned char) var_11)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned long long int) var_4)))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */signed char) ((short) var_11));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_15 [i_3] [i_2] [i_1] = var_6;
                var_15 = ((/* implicit */long long int) arr_0 [i_1 - 2]);
                arr_16 [i_1 - 1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */short) ((((arr_6 [i_1 + 3]) + (2147483647))) << (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_0 [i_2]))))));
            }
            arr_17 [i_2] = ((/* implicit */_Bool) var_9);
            var_16 &= ((/* implicit */unsigned char) arr_2 [i_1] [i_2]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1] [2LL] [i_1 + 2] [i_4])) * (((/* implicit */int) arr_14 [i_1] [2] [i_1 + 1] [(unsigned char)2])))))));
            arr_20 [i_4] = ((/* implicit */long long int) arr_6 [i_4]);
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))) == (((/* implicit */int) ((short) var_3))))))));
            arr_21 [i_1] [i_4] = ((/* implicit */unsigned short) (~(32767LL)));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_13 [i_1] [8] [9]))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)59))))))));
                            arr_32 [i_4] [(short)10] [i_4] [i_6] [(short)12] = ((/* implicit */unsigned short) (+(arr_9 [i_4] [i_4])));
                            arr_33 [i_4] [i_4] [i_5] [2] [i_7] [(short)0] = ((/* implicit */short) var_10);
                            arr_34 [i_1] [i_1] [i_4] [6ULL] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_1] [i_6] [i_5] [i_1 + 2] [i_4] [1] [i_1 - 2])) - (((/* implicit */int) arr_5 [i_4]))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) var_1)))));
                        }
                        for (short i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            arr_39 [i_1] [i_4] [i_6] [i_4] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_1 + 1] [i_5] [i_6]))));
                            arr_40 [i_4] [(unsigned short)5] [i_8 - 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) (short)-29698);
                        }
                        var_20 += ((/* implicit */long long int) arr_9 [2U] [2U]);
                    }
                } 
            } 
        }
    }
    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        arr_43 [(_Bool)1] = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(88512703)))) || (((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61677)))))))))));
        arr_44 [(short)17] = ((/* implicit */long long int) var_5);
        var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */int) var_11)) > (((((/* implicit */int) (short)5171)) - (((/* implicit */int) arr_42 [(short)3])))))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_41 [i_9])))) : (((/* implicit */int) ((((((/* implicit */int) arr_41 [i_9])) % (((/* implicit */int) (unsigned char)229)))) == (((((/* implicit */int) (short)21199)) + (((/* implicit */int) var_10)))))))))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) -8558885889221497576LL))));
}
