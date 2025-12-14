/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192180
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)99)) >= (((/* implicit */int) (unsigned short)17961))));
                arr_6 [(_Bool)1] = ((/* implicit */signed char) min((arr_4 [i_1] [i_1] [i_0]), (arr_4 [(short)3] [i_1] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17961))))) && (((/* implicit */_Bool) arr_1 [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (short i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 6; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_2] &= ((/* implicit */unsigned short) ((unsigned char) ((_Bool) arr_17 [i_3] [i_3] [i_4 + 1] [i_4 + 1])));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2])) << (((/* implicit */int) arr_8 [i_2])))))));
                        arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [(signed char)9] [i_4 + 3] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)7)))), (min((((((/* implicit */int) (unsigned short)6168)) & (((/* implicit */int) (unsigned short)47575)))), (((/* implicit */int) arr_10 [i_4 + 3] [i_4 + 3] [i_3 - 3]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_22 [(_Bool)1] [i_3] [(unsigned short)3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) arr_13 [i_2] [i_3] [i_3 - 4] [i_6]);
                        var_16 ^= ((/* implicit */short) ((_Bool) arr_20 [i_3 - 1] [i_3 + 1] [i_3 - 4] [i_4 + 2]));
                        arr_23 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) (unsigned short)47562));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_26 [i_3] = ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_3 - 3])) && (((/* implicit */_Bool) arr_5 [i_4 - 2] [i_3 - 1])));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4 + 3])) >= (((/* implicit */int) arr_3 [i_4 + 3])))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22)) >> (((((/* implicit */int) arr_1 [(unsigned char)13])) - (71)))))) / (((((/* implicit */_Bool) (unsigned short)7)) ? (arr_21 [i_2] [(unsigned short)5] [i_4] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30123)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_34 [i_2] [(unsigned char)7] [6ULL] [i_3] [6ULL] [(unsigned char)8] = ((/* implicit */unsigned char) (_Bool)1);
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12)) * (((/* implicit */int) (short)30122)))))));
                            }
                        } 
                    } 
                }
                arr_35 [i_3] [i_2] = (unsigned short)4095;
            }
        } 
    } 
    var_20 = min((var_13), (((((/* implicit */int) var_11)) > (((/* implicit */int) (short)8087)))));
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_21 &= (-((-(10126661286398306029ULL))));
        arr_38 [i_10] = ((/* implicit */unsigned char) (+(arr_5 [i_10] [(unsigned short)4])));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [i_10]))))), (arr_1 [i_10]))));
    }
}
