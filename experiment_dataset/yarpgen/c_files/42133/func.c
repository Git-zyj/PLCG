/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42133
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
    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */short) min((var_6), (var_9)))), ((short)-27457)));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(max((6530509388051477809LL), (((/* implicit */long long int) 1601622334))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_8);
        var_16 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_9))) - ((-9223372036854775807LL - 1LL))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)185)), (((long long int) var_4))))) ? (((((/* implicit */int) arr_1 [i_1 + 1])) / (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)171)), ((unsigned short)59271))))))));
        var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (-8640901092586492129LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1]))))) > (var_1)));
        arr_9 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1]);
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_13)))))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)27467))));
                            arr_20 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            arr_21 [i_1] [i_2] [i_4] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_4] [i_5] [i_4] [i_1] [i_1] [i_4]))));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))));
                        }
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_4] [i_4] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) min((arr_11 [i_6 + 1] [i_1]), (((/* implicit */long long int) (signed char)-75))));
                            var_21 -= ((/* implicit */signed char) min(((((~(((/* implicit */int) var_13)))) & (((/* implicit */int) min((((/* implicit */short) var_13)), ((short)-13943)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6 + 2] [i_1 - 1])))))));
                            var_22 = (+(max((((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))), ((-(((/* implicit */int) (unsigned char)172)))))));
                            var_23 = arr_24 [i_1] [i_3];
                        }
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) min((arr_0 [i_1] [i_2]), (((/* implicit */unsigned short) (unsigned char)60))))))), (max((max((((/* implicit */int) (signed char)-116)), (-555958098))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3])) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_25 = ((/* implicit */int) ((short) (unsigned char)6));
                            arr_29 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) << (((/* implicit */int) (unsigned char)0))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_8 = 4; i_8 < 11; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */short) max((3445675841U), ((~(arr_33 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1])))));
                            var_27 ^= ((/* implicit */signed char) min((min((1431288251), (arr_10 [i_8 - 1]))), (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_8 - 4]) : (arr_10 [i_8 + 1])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_28 += ((/* implicit */signed char) (+(min(((+(849291454U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
        var_29 = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9] [i_9]))) > (min((arr_35 [i_9]), (((/* implicit */long long int) (signed char)-106)))))))));
    }
}
