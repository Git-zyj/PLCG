/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54696
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
    var_20 *= ((short) var_2);
    var_21 = (-(((((((/* implicit */int) var_18)) > (var_19))) ? (((/* implicit */unsigned int) ((var_5) << (((var_5) - (370581498)))))) : (((unsigned int) var_11)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (signed char)40);
        var_22 = (-(-4798589334587019718LL));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (max((var_15), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), (arr_9 [i_0] [i_1] [4] [i_2 + 1] [i_2 + 1] [(short)9]))))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((max(((-(var_3))), (((/* implicit */long long int) ((((((/* implicit */int) var_18)) + (2147483647))) << (((9223372036854775808ULL) - (9223372036854775808ULL)))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_2 + 1] [i_3])))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (var_17))) : (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (-1854343398))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) arr_4 [i_2]);
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) max(((short)-9115), (((short) arr_12 [(signed char)5]))))), (((((/* implicit */int) arr_6 [i_0])) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (2648645516U))))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))));
                }
            } 
        } 
    }
    for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
    {
        var_27 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6]))) & (4026531840U))))))));
        /* LoopNest 3 */
        for (signed char i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) ((arr_30 [i_6] [i_7] [i_8] [i_9] [i_9] [i_9] [i_7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 3] [i_10 - 1])))));
                            var_29 = ((/* implicit */int) (-(arr_17 [i_6 - 1])));
                        }
                        var_30 = ((/* implicit */long long int) arr_23 [(signed char)18] [(signed char)18] [i_8] [(_Bool)1]);
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 268435455U))))), (2648645516U)));
}
