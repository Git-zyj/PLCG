/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32068
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
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) arr_0 [i_3 + 1] [i_4 - 3]))), (max((arr_0 [i_3 - 1] [i_4 - 2]), (arr_0 [i_3 + 2] [i_4 - 2])))));
                                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14951))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1])) : (((/* implicit */int) var_12))))) + (max((arr_5 [i_4 - 3] [i_3]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) / (((/* implicit */int) var_8)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (_Bool)1))))), (arr_5 [i_0 + 1] [i_1]))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)15030)) >= (((/* implicit */int) (_Bool)1)))))))), (((unsigned int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)15] [i_1] [i_0 + 1]))) : (var_5))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_5] [i_6] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_0 + 1] [15ULL] [i_5] [15ULL]))));
                            var_16 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_5] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_6 + 1])))) : (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_16 [i_0] [(_Bool)1] [i_5])))))));
                            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_6] [i_5] [i_5] [i_1] [15U])), (9223372036854775807LL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)74))))) ? (((/* implicit */int) arr_10 [i_0] [(signed char)11] [i_5] [i_6])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_12)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((unsigned short) 251658240U)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) ((arr_5 [i_1] [i_1]) > (((/* implicit */unsigned long long int) var_11)))))))) ? (max((((((/* implicit */_Bool) (signed char)1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((short) (_Bool)1)))))));
                            arr_20 [i_1] [(unsigned short)0] [(unsigned short)0] [i_6 + 1] [i_6] |= ((/* implicit */short) var_9);
                        }
                    } 
                } 
                arr_21 [i_1] = ((/* implicit */short) var_7);
            }
        } 
    } 
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (short)-15025))));
}
