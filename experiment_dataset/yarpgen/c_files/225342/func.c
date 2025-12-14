/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225342
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
    var_14 = var_1;
    var_15 = ((int) (+(((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_2 + 3] [(signed char)12] = ((/* implicit */short) (((!(arr_5 [i_3 - 4] [i_2 - 1] [i_1 + 1]))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_5))));
                        var_17 = ((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_3]);
                        var_18 = ((/* implicit */_Bool) 4630972245939023584LL);
                        arr_12 [i_0] [i_1 - 1] [i_2 - 1] = max((((/* implicit */unsigned short) (unsigned char)149)), ((unsigned short)16384));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) arr_10 [(unsigned char)7] [i_0] [(unsigned char)7] [(unsigned char)7] [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_4 [(short)12]))));
            var_21 = ((/* implicit */signed char) 1886247094);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [4ULL])) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_6 [i_0]), (var_5)))) : (arr_16 [i_5] [8]))))));
            var_23 = ((/* implicit */int) arr_0 [i_0]);
            var_24 = ((/* implicit */int) var_10);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) arr_5 [(unsigned char)8] [i_0] [i_6])), (((signed char) arr_0 [i_6]))))) ^ (min((((((/* implicit */_Bool) (signed char)-99)) ? (1886247094) : (var_12))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [(short)0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_0]))))))));
            var_25 = ((/* implicit */signed char) (+(((var_2) / (((/* implicit */unsigned long long int) arr_16 [(unsigned short)6] [i_6]))))));
            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_6])) > (((/* implicit */int) (unsigned short)0)))) ? (((((/* implicit */int) (_Bool)1)) + ((+(((/* implicit */int) (signed char)-36)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) ((arr_18 [i_7]) << (((var_2) - (11044363553176381748ULL)))));
            arr_26 [i_0] [i_0] [i_7] = ((/* implicit */long long int) arr_7 [(signed char)8] [i_7] [i_7]);
        }
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (min((((/* implicit */int) arr_14 [(unsigned short)14])), (var_12))))))));
        var_29 &= ((/* implicit */int) arr_6 [(short)4]);
    }
}
