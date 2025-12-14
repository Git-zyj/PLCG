/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50523
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */short) (!((_Bool)1)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_6)))), (((((/* implicit */_Bool) (unsigned short)51288)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14247)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_0])))))))));
        var_14 -= ((/* implicit */long long int) (unsigned short)24234);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_1] [(signed char)5])))) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (var_11)));
                        arr_17 [4U] [i_1] [i_4] [4U] [i_2] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_10)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_1] [i_5] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36107)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (1267655329U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
                        arr_26 [i_1] [i_5] [i_6] [i_7] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_7] [i_6] [i_6] [i_6] [i_5] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_11)) ^ (var_4))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_29 [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_7]))));
                            var_15 += ((/* implicit */signed char) (!((_Bool)1)));
                        }
                        for (short i_9 = 1; i_9 < 13; i_9 += 2) 
                        {
                            arr_32 [i_1] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) var_9);
                            var_16 += ((/* implicit */signed char) ((((/* implicit */int) (short)1023)) % (((/* implicit */int) (unsigned short)65514))));
                        }
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (arr_8 [i_1] [(unsigned short)14]) : (((/* implicit */int) var_1))))));
        arr_33 [3] = ((/* implicit */int) (_Bool)1);
    }
}
