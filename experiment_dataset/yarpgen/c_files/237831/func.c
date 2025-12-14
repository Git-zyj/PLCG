/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237831
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_9))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (~(((258280515653717609ULL) % (18188463558055834006ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned char)164)), (4797492122714541099ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 258280515653717609ULL)) ? (((/* implicit */int) max(((unsigned short)18367), ((unsigned short)65526)))) : (((/* implicit */int) (short)-8120)))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_11 [i_2] [i_1] [i_0] = ((/* implicit */short) ((min((var_2), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))) % (((unsigned int) min((((/* implicit */unsigned int) var_11)), (var_12))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) max((3384155974U), (var_2)))) ? (((/* implicit */int) var_3)) : (min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (!(var_6)))))));
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) arr_13 [i_1] [i_1] [i_1 - 1] [i_1]))), (min((arr_8 [i_1 + 3]), (((/* implicit */unsigned long long int) var_11))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) arr_15 [i_1]);
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_20 = ((/* implicit */short) (signed char)120);
                    var_21 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))));
                    var_22 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) arr_6 [i_1 + 4] [i_1 + 3])), (var_2)))));
                    var_23 = ((((/* implicit */_Bool) (-(((var_1) + (arr_16 [i_0] [i_0] [i_1 + 3] [i_1] [i_2] [i_5] [i_5])))))) ? ((+(((/* implicit */int) arr_18 [i_1 + 1] [i_1])))) : (((/* implicit */int) arr_17 [i_1] [i_1])));
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_24 = ((((((long long int) arr_6 [i_0] [i_1])) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) var_5)))) + (51600))) - (12))));
                    var_25 = ((/* implicit */int) max((532558482025726071LL), (((/* implicit */long long int) ((4143904847U) - (min((((/* implicit */unsigned int) (_Bool)0)), (0U))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_19 [i_1 + 1] [i_1] [i_1] [i_1 + 3])));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1]))));
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_7] [i_0])) / (((/* implicit */int) (unsigned char)255)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 24; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)65533));
                        arr_31 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)3))));
                    }
                    var_29 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_1 + 1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_1 + 4] [i_1])) + (12587)))))) * (((((/* implicit */_Bool) arr_22 [i_2] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */unsigned int) arr_22 [i_1] [i_1 + 2] [i_1 + 3])) : (var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_1 + 1] [i_1])) + (2147483647))) >> (((((((/* implicit */int) arr_18 [i_1 + 4] [i_1])) + (12587))) + (9632)))))) * (((((/* implicit */_Bool) arr_22 [i_2] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */unsigned int) arr_22 [i_1] [i_1 + 2] [i_1 + 3])) : (var_2))))));
                }
            }
        }
        var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_5)))))))), ((-(arr_25 [i_0])))));
        arr_32 [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_10 = 3; i_10 < 20; i_10 += 3) 
    {
        arr_37 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((1779674425U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))))))));
        arr_38 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) -579050924)) * (0U)));
        /* LoopNest 2 */
        for (unsigned int i_11 = 2; i_11 < 22; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2047)) ? (1402827552894447972LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_44 [i_10] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_30 [i_12] [i_11 - 2] [i_11] [i_10 + 2] [i_10])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_10]))))) << ((((~((~(var_10))))) + (7393625855161281406LL)))));
                }
            } 
        } 
    }
    var_32 = max((min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) var_9)))), (((/* implicit */int) var_7)));
    var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((max((((/* implicit */long long int) (short)25974)), (-4564094360486448688LL))) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (var_1)));
}
