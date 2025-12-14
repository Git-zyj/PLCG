/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210750
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
    var_20 &= ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) + (((/* implicit */int) arr_0 [(short)4]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((-(((/* implicit */int) (unsigned char)101)))))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned char)139))))) : (((904392490U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    }
    var_23 = ((/* implicit */short) ((unsigned long long int) (+(((((/* implicit */int) (unsigned short)27194)) ^ (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_9 [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2] [i_2 + 1]);
                    arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))) % (((max((-4860191602932501116LL), (((/* implicit */long long int) arr_4 [i_3])))) | (((long long int) (unsigned short)65513))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_2])))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_4 [i_1]);
                            arr_16 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1]);
                            arr_17 [i_2] = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) (unsigned char)199)), (arr_15 [i_5] [i_1] [i_3] [i_1] [i_1]))))) <= (arr_7 [i_2] [i_4 - 1])));
                        }
                        var_26 = ((/* implicit */short) max((((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))))), (arr_13 [i_1] [i_2] [i_3] [i_4 + 1])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) var_1);
                        arr_20 [i_1] [i_2] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */int) (((~(-8824136281567749095LL))) <= (((/* implicit */long long int) ((var_18) ? (((arr_12 [i_1] [i_1]) ? (((/* implicit */int) arr_12 [i_2] [8LL])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_19)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_2] [i_3] [i_2] [i_2] = 11467114727237547208ULL;
                            arr_24 [i_1] [i_2] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_2)) & (((/* implicit */int) arr_12 [i_6] [i_6]))))));
                            var_28 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_6] [i_7 + 1] [i_7 + 1] [i_1])))));
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-114))))), (((unsigned long long int) arr_12 [i_2 + 1] [i_2 + 2]))));
                            arr_27 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_12 [i_1] [i_2 - 3]) ? (((/* implicit */int) arr_14 [i_8] [i_2] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_8]))))))));
                            arr_28 [i_1] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */long long int) arr_14 [13LL] [i_2 - 2] [i_3] [i_2] [i_8]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_18 [i_2 + 2] [i_2 + 2] [i_3])))));
                            var_30 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38338)) && (arr_14 [i_1] [(unsigned char)10] [i_3] [i_3] [i_6]))))) <= (arr_7 [i_3] [i_2 - 1])))))));
                    }
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(min((min((((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_2 - 2])), (var_16))), (((/* implicit */unsigned int) arr_4 [i_2 + 3])))))))));
                }
            } 
        } 
    } 
}
