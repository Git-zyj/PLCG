/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189845
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
    var_10 = ((/* implicit */short) max(((-(min((((/* implicit */unsigned int) (_Bool)0)), (1956332301U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_2 [i_0])))), ((-(((/* implicit */int) (signed char)121)))))), ((-(((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) >= (3460009874U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [(unsigned char)8]);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_14 [(short)0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]);
                        arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)91)) + (((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_3] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) (-(((arr_6 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41281)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_20 [i_4 - 1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4] [(short)8] [i_4])) && (((/* implicit */_Bool) (short)1792))));
        arr_21 [i_4] = ((/* implicit */unsigned char) 8358870738110366444ULL);
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) (+(((arr_19 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-1793)))))));
        arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_5 [(unsigned char)12]);
    }
    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] = ((/* implicit */long long int) (unsigned short)24255);
        arr_28 [i_5] = arr_18 [i_5];
        arr_29 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [(short)6]))));
        arr_30 [5ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)106))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
    {
        arr_35 [i_6] = ((/* implicit */signed char) arr_12 [i_6] [i_6] [(unsigned short)3]);
        arr_36 [8ULL] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_6] [(short)0]))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_39 [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)63);
            arr_40 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6])) || (((/* implicit */_Bool) (-(arr_11 [(short)10] [i_6] [6U] [i_7]))))));
            arr_41 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) / (arr_13 [i_6 - 1] [i_6] [i_7] [i_7])))) || (((/* implicit */_Bool) (short)8193))));
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_46 [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_32 [i_6 + 1])) == (((/* implicit */int) arr_18 [i_6])))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_55 [i_11] [i_8] = ((/* implicit */int) arr_18 [(short)8]);
                            arr_56 [i_11] [i_6] = ((/* implicit */unsigned short) arr_5 [i_6]);
                        }
                        for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            arr_61 [i_6] [i_8] [i_9] [2LL] [i_8] [(short)10] [(_Bool)1] = ((/* implicit */_Bool) arr_57 [0ULL] [i_8] [i_8] [i_12] [i_10]);
                            arr_62 [i_6] [i_8] [i_9] [i_10 + 1] [i_6] [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)117)) && (((/* implicit */_Bool) arr_0 [i_8]))));
                            arr_63 [i_6] [12ULL] [2LL] [2LL] = ((/* implicit */int) 864691128455135232ULL);
                            arr_64 [i_6] [(unsigned char)0] [(unsigned char)8] [i_10 - 1] [i_12] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)0))))));
                            arr_65 [i_6] [i_8] = ((/* implicit */unsigned short) ((arr_7 [i_6] [i_8] [i_8]) > (arr_37 [i_6])));
                        }
                        arr_66 [i_6 - 1] [i_8] [i_6] [i_6 - 1] = ((/* implicit */unsigned long long int) (+((+(1741640095)))));
                        arr_67 [i_6] [i_6] [i_6] [i_10] = ((/* implicit */int) (~(arr_11 [12ULL] [i_6] [i_9] [i_9])));
                        arr_68 [i_6 - 1] [(short)0] [i_9] [(short)12] [i_8] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                } 
            } 
            arr_69 [i_6] = (~(((arr_25 [i_8]) | (((/* implicit */int) (_Bool)0)))));
        }
    }
    var_12 = ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)2055))))), (var_0))) + (max((((/* implicit */unsigned long long int) var_4)), (var_9))));
}
