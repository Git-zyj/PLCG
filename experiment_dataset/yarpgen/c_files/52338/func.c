/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52338
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
    var_11 = ((/* implicit */unsigned int) ((long long int) var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)13] = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_4])), (arr_10 [i_4] [i_4] [i_2 - 2] [i_4]))))) : (var_6)))))))));
                                arr_13 [i_0] [i_1] [9U] = max((max((arr_9 [(_Bool)1] [(_Bool)1] [i_1]), (-1752326856409349172LL))), (((/* implicit */long long int) max((15U), (4294967273U)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((long long int) var_4));
                }
                for (short i_5 = 3; i_5 < 20; i_5 += 1) 
                {
                    arr_16 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_6)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)62)), (1481222500U)))) ? (((/* implicit */int) arr_7 [i_1])) : ((~(((/* implicit */int) var_7)))))) : ((+(((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_10 [i_5] [i_1] [i_1] [i_0])))))))));
                    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((3726681851839681711LL) < (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_5 - 3] [i_1] [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        arr_19 [19ULL] [19ULL] [19ULL] [2LL] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (((((/* implicit */long long int) var_6)) & (var_2))))))) > (min((((/* implicit */long long int) arr_10 [i_5 - 1] [i_0] [i_0] [(signed char)10])), (var_2)))));
                        var_15 *= ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_0 [i_1])), (var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)20233)), (1190378847U))), ((-(arr_15 [i_5 - 3] [i_1] [i_0])))));
                }
                for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) var_7);
                                arr_30 [i_8] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */short) ((((_Bool) 1397962485U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3073))) : (9223372036854775807LL)));
                            }
                        } 
                    } 
                    arr_31 [(short)12] [i_0] [i_7] [i_7] = ((/* implicit */short) max((min((arr_11 [i_0 - 1] [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_0])))), (min((9223372036854775807LL), ((-9223372036854775807LL - 1LL))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((1710930305U), (((/* implicit */unsigned int) (short)32704)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32704)) ? (((/* implicit */int) (short)15012)) : (((/* implicit */int) (short)6939))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_0] [19LL] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) | (((/* implicit */int) arr_26 [i_0] [i_0 - 1] [i_0 - 1] [14U] [i_0] [14U]))));
                }
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [(short)7] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6933))) : (arr_15 [i_0] [i_0 - 1] [i_0]))) | (min((((/* implicit */unsigned int) (unsigned short)65514)), (4294967290U)))));
                            var_22 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_9)) ? (var_1) : (arr_1 [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_6)));
}
