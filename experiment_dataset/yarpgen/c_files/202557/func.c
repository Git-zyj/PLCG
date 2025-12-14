/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202557
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
    var_11 *= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))) : (((arr_2 [i_0]) ? (arr_1 [(short)10]) : (arr_1 [(short)14])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) >= (arr_5 [i_0])));
            var_14 = ((/* implicit */signed char) (-(((arr_1 [i_0]) + (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_4 [i_3]);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(arr_9 [i_3] [i_2] [i_1] [i_0]))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_0] [i_0] [(unsigned char)0] [(short)15]));
            var_17 = ((/* implicit */short) ((((_Bool) (short)-25533)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))) : ((~(10ULL)))));
        }
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_14 [i_4] = ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0] [i_4 + 3]) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_0])) ? (((/* implicit */int) arr_12 [i_4] [i_4 + 4] [i_0])) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) arr_2 [i_4 + 4]))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (short i_6 = 4; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18549)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) (short)12769)) : (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)4080)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)38)) ^ (((/* implicit */int) (unsigned char)255))));
                        var_20 = ((((arr_6 [i_6] [i_5] [(_Bool)1]) || (((/* implicit */_Bool) (unsigned char)242)))) ? (((((/* implicit */int) arr_13 [i_0] [i_0])) << (((/* implicit */int) (unsigned char)18)))) : (((((/* implicit */_Bool) (short)-22875)) ? (arr_15 [i_0] [i_4]) : (2122043750))));
                        arr_20 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((arr_17 [i_4 + 2] [i_4 + 2] [i_6 - 3]) ? (((/* implicit */int) arr_17 [i_4 + 4] [i_4] [i_6 + 1])) : (((/* implicit */int) arr_17 [i_4 + 1] [i_4] [i_6 + 1]))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [i_6 - 2] [i_4 - 1])) != (((/* implicit */int) arr_12 [i_4] [i_6 + 1] [i_4 + 1]))));
                    }
                } 
            } 
            arr_21 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22701)) * (((/* implicit */int) (_Bool)0))));
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)96))))) ? (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4])) : (12000682867026540358ULL)));
        }
        for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) ^ (((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [(short)12] [(unsigned short)6] [i_0])) ? (((/* implicit */int) (short)-25533)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_10 [8U] [i_7] [i_7] [8U] [i_0] [14ULL]))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (short i_10 = 1; i_10 < 14; i_10 += 4) 
                    {
                        {
                            arr_37 [i_10 + 1] [i_7] [i_8] [i_7] [i_0] = ((/* implicit */long long int) arr_0 [i_9]);
                            var_23 = ((/* implicit */unsigned long long int) ((arr_5 [i_8]) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2253227147375125229LL))))));
                        }
                    } 
                } 
            } 
            var_24 = (-(((((/* implicit */_Bool) arr_35 [i_7] [i_7] [(signed char)15] [i_7 - 1] [(signed char)15] [i_7 - 1] [(_Bool)1])) ? (288230376151711743ULL) : (((/* implicit */unsigned long long int) arr_36 [i_7] [i_0] [i_0])))));
            arr_38 [i_7] [i_7] [i_7] = ((((/* implicit */int) arr_13 [i_7 - 1] [i_7 + 1])) | (((/* implicit */int) arr_13 [i_7 + 1] [i_7 - 1])));
            var_25 = ((((/* implicit */int) arr_12 [i_0] [i_7] [i_7])) / (((arr_32 [i_0] [i_7 + 1] [i_0] [i_7] [i_7] [i_0]) & (((/* implicit */int) (short)14)))));
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [8LL] [(unsigned char)11])) : (arr_15 [(_Bool)1] [(_Bool)1])))) ? (((int) (_Bool)1)) : (arr_9 [1LL] [i_0] [(_Bool)1] [i_0])));
    }
}
