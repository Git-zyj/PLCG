/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200342
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
    var_18 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) 257613368U)) - (var_3))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140462610448384LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) ? (var_8) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_19 ^= var_0;
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 |= ((/* implicit */short) ((((((/* implicit */int) arr_5 [6] [i_3 - 4] [i_2])) <= (((/* implicit */int) arr_0 [(short)18] [i_0])))) ? (2147483634) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) | (((/* implicit */int) (unsigned short)59349))))) != (-140462610448378LL))))));
                        arr_9 [i_0] [i_2] [i_0] [(unsigned char)14] [i_0] [(unsigned char)14] &= ((/* implicit */unsigned short) (short)32743);
                        arr_10 [(unsigned char)5] [2LL] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -140462610448385LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_4 [18ULL] [i_2])))) ? (((/* implicit */unsigned long long int) 4037353900U)) : (((((/* implicit */_Bool) 2033912643480521138LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)15] [i_3 - 1]))) : (489101237183932657ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 1])))));
                        arr_11 [i_1] [i_0] [i_2] [7ULL] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) 140462610448383LL);
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) (signed char)-47);
        var_24 -= ((/* implicit */short) (+(((((/* implicit */_Bool) 5)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))) * (268435456U)))) : (((((/* implicit */_Bool) 2033912643480521115LL)) ? (2033912643480521115LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [i_5]);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (((447491027) & (-355504730))) : (((/* implicit */int) arr_14 [i_6] [i_6]))))))))));
            arr_21 [(short)3] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-125)) == (((/* implicit */int) arr_16 [i_5] [i_6 + 1])))) ? (arr_19 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11515))))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (short)-11178)) != (-796077059)))) >> (((((/* implicit */int) arr_24 [i_7])) - (21042))))) != (((((/* implicit */int) (unsigned short)18533)) | (((/* implicit */int) (unsigned char)0))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7])) & (((((/* implicit */int) arr_26 [i_7])) << (((arr_20 [i_7] [i_8] [(_Bool)1]) - (1451686072)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_7]))) / (arr_23 [i_7])))) ? (((arr_15 [i_8]) / (arr_23 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7]))))) : (arr_13 [i_8])));
            var_27 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8 + 1])) ? (((/* implicit */int) (short)1367)) : (((/* implicit */int) arr_27 [i_7]))))) ? (((((/* implicit */_Bool) arr_24 [i_7])) ? (arr_19 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 287948901175001088ULL)) ? (arr_20 [i_7] [i_7] [i_7]) : (((/* implicit */int) (short)30354))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -6)) ? (((/* implicit */int) (short)-30355)) : (((/* implicit */int) (unsigned short)22080))))));
            arr_28 [i_8] = ((/* implicit */unsigned short) arr_16 [i_8 - 2] [(unsigned short)16]);
            var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
        }
        arr_29 [i_7] = ((/* implicit */unsigned int) ((((-4844548555427166418LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) 2809637448U)) ? (((/* implicit */int) arr_16 [(unsigned short)9] [i_7])) : (((/* implicit */int) arr_26 [15LL]))))))) / (((/* implicit */long long int) arr_20 [i_7] [i_7] [i_7]))));
    }
}
