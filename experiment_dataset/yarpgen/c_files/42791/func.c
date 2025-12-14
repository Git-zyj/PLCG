/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42791
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_5)))) == (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-68))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_1]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [(unsigned short)7])), (var_2))))))))));
                    var_17 = ((/* implicit */signed char) max((((/* implicit */short) max((max(((unsigned char)7), (arr_3 [i_0]))), ((unsigned char)251)))), ((short)27540)));
                    var_18 = ((/* implicit */unsigned short) ((signed char) (+(3417678534U))));
                }
                for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (((~(max((608944359), (((/* implicit */int) (unsigned short)46503)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3])))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3 + 3] [i_1 - 1]))))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_3 - 1]))))) ? ((~(((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 9496404638950529591ULL))))), (max((var_2), (((/* implicit */short) var_3)))))))));
                    var_22 |= (~(((((/* implicit */int) (short)-13183)) | (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_23 = min(((short)11380), ((short)-27547));
                                var_24 ^= ((/* implicit */unsigned short) (+(arr_11 [i_0] [i_1] [i_5] [i_6])));
                            }
                        } 
                    } 
                }
                for (short i_7 = 3; i_7 < 12; i_7 += 3) 
                {
                    arr_17 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-9833)) + (-608944350)))) ? (9496404638950529583ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_16 [i_0] [(unsigned short)6] [i_0]))))), (((/* implicit */unsigned long long int) 3070124230U))));
                    arr_18 [i_0] [i_1 - 1] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)12)), (arr_14 [i_0] [i_1 - 1] [(unsigned short)6] [(_Bool)1] [i_7 - 3] [i_7])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)7))));
                    var_25 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        for (long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) arr_3 [i_0]);
                                arr_23 [(_Bool)1] [i_0] [i_1] [i_1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4089502587U)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)0))));
                                var_27 = ((/* implicit */_Bool) (unsigned short)35571);
                                arr_24 [i_0] [i_0] [(unsigned char)3] [i_0] [i_8] [i_0] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-9843))) | (var_0)))))) ? (((((/* implicit */int) arr_16 [i_7] [i_8] [i_9 + 2])) / (((/* implicit */int) (_Bool)1)))) : (((((var_12) / (var_12))) * (((/* implicit */int) var_3))))));
                                var_28 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_20 [0U] [12U] [i_8 - 1] [i_9])))));
                            }
                        } 
                    } 
                }
                arr_25 [i_1 - 1] = ((/* implicit */unsigned short) min((arr_11 [i_1 + 1] [12LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */short) arr_20 [2ULL] [i_1] [i_1] [(short)2]))))))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 + 1]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (9053644790835519488ULL)))))) && (((/* implicit */_Bool) ((unsigned short) ((2016643110955583314ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63661)))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_0);
    var_31 = ((/* implicit */long long int) (+(((18446744073709551600ULL) >> (((((/* implicit */int) (unsigned short)60135)) - (60077)))))));
    var_32 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)35571)) > (((/* implicit */int) (unsigned char)29))))))) * (((((/* implicit */int) var_6)) & ((+(var_12)))))));
}
