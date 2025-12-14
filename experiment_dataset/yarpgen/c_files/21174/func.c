/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21174
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 4294967278U)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)-8)))) == ((~(((/* implicit */int) (unsigned short)31462))))));
                            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
                            var_18 = (-(arr_3 [i_0]));
                            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((-4), (-496959373)))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)65280))))), (var_6)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 4; i_4 < 21; i_4 += 3) 
                {
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((var_2) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3159434502U)) ? (arr_11 [i_4 - 3] [i_0] [i_4 - 3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_4] [i_4 + 1] [i_1])))));
                    var_21 ^= ((signed char) arr_1 [i_4 - 2]);
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_2)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_4 - 2] [i_1] [i_4 - 2] = ((((/* implicit */int) arr_2 [i_4 + 2])) >= (arr_3 [i_0]));
                        var_22 += arr_16 [i_0] [i_1] [6] [(short)0];
                    }
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (unsigned short)275);
                        arr_21 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_24 [21U] [i_0] [i_1] [i_7] [i_7] [i_4 - 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_0] [i_4 - 4] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_27 [i_8] [(unsigned short)4] [i_1] [i_1] [i_1] [(unsigned short)4] [i_0] &= ((/* implicit */unsigned short) (signed char)-5);
                            arr_28 [i_0] [i_8] [i_1] [i_7] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(arr_8 [i_0] [i_1] [i_4] [i_0]))))));
                        }
                        arr_29 [i_0] [i_1] [(unsigned char)20] [i_0] = (signed char)-2;
                        arr_30 [2U] [i_1] [2U] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [(signed char)0]);
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (2147483640) : (((/* implicit */int) (short)32745))));
                    }
                }
                var_24 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (signed char)-1)), (max((((/* implicit */unsigned int) var_11)), (3193986541U)))))));
                var_25 = ((/* implicit */unsigned short) min((((unsigned int) min(((signed char)-1), ((signed char)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [1U] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_2)) & ((~(((/* implicit */int) (unsigned short)32)))))) : ((~((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_0))));
}
