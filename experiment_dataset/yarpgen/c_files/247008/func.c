/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247008
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
    var_14 = ((/* implicit */long long int) 2147483620);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_15 = max((((unsigned short) arr_1 [i_0])), (var_5));
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (_Bool)1))));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_14 [(_Bool)0] [i_3] [(short)14] [(short)14]);
                            var_20 = ((/* implicit */signed char) 6426967569654252497ULL);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_0] [(signed char)16])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_2])))))))));
                var_22 = ((/* implicit */short) arr_13 [i_0]);
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((262143) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [(signed char)10])))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)63))))), ((~(4294967273U)))))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [21LL])) >= ((-(((/* implicit */int) (unsigned char)69))))));
                    arr_23 [15] [i_0] [(_Bool)1] [i_0] [i_0] = (-(((((/* implicit */int) arr_9 [i_6 - 1] [i_7 - 1] [i_6 - 1])) ^ (((/* implicit */int) arr_9 [i_6 - 1] [i_7 - 1] [i_6 - 1])))));
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) (_Bool)0)))) * ((+(((/* implicit */int) (signed char)127))))))));
                    var_25 = ((/* implicit */unsigned char) (~(min((2147483605), (((/* implicit */int) (_Bool)1))))));
                    arr_25 [i_0] [(unsigned short)17] [(unsigned short)3] [i_7 - 1] [(short)6] = ((/* implicit */unsigned char) (-(5U)));
                }
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((signed char)-93), ((signed char)15)))) ^ (((/* implicit */int) (!((_Bool)1))))));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_38 [(unsigned short)12] [i_8] [i_9 - 1] [i_0] [i_11] = ((/* implicit */unsigned char) var_12);
                            var_27 ^= ((/* implicit */short) (~(arr_10 [i_11] [i_11])));
                            var_28 = ((/* implicit */int) (unsigned short)11179);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [(signed char)17] [i_0] [i_8] [i_0] [i_8]))));
            arr_39 [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
        }
        arr_40 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_27 [i_0] [i_0]));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (var_1)));
}
