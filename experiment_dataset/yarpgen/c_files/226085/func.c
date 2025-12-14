/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226085
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_16 = ((((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_2 + 1] [i_0] [(signed char)8])) | (((/* implicit */int) var_1)));
                        arr_13 [i_2] [i_2] [i_1] [i_0] [i_2] [i_0] = ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_12)));
                        var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)0)));
                        var_18 = ((/* implicit */short) ((-1042982680619721622LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2] [(signed char)4])))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] |= ((/* implicit */short) (unsigned short)44392);
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)40)) | (arr_15 [i_0] [i_4] [i_4])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_4 + 1])) > (arr_7 [i_4]))))));
            var_20 = ((/* implicit */_Bool) var_13);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (short)1925))));
            var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)1925)) >= (arr_15 [i_0] [10LL] [i_0]))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_5])))));
        }
        var_23 = ((/* implicit */int) ((_Bool) var_13));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) % ((+(((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 134654304U)) ? (1042982680619721622LL) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1042982680619721617LL)) >= (arr_9 [i_6] [i_6] [10LL] [i_6] [i_6]))))) == (((((/* implicit */_Bool) var_13)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
        arr_23 [i_6] = ((/* implicit */short) var_11);
        arr_24 [i_6] = var_11;
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_26 [i_7]) && (((/* implicit */_Bool) var_9))))) < (((/* implicit */int) (!(((/* implicit */_Bool) 517159384)))))));
            var_25 = ((/* implicit */int) var_1);
        }
        for (unsigned int i_9 = 3; i_9 < 24; i_9 += 1) 
        {
            var_26 *= ((((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3))) >= (((/* implicit */unsigned long long int) var_5))))));
            arr_34 [i_7] [i_9] [i_9] = (i_7 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (8070450532247928841ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((arr_25 [i_7]) - (1350677032)))))) ? (min((var_5), (((/* implicit */long long int) 1056719749)))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 - 1] [2ULL]))))))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (8070450532247928841ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((arr_25 [i_7]) + (1350677032))) - (495077880)))))) ? (min((var_5), (((/* implicit */long long int) 1056719749)))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 - 1] [2ULL])))))))));
            var_27 = ((/* implicit */short) var_15);
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) arr_36 [i_7] [i_10])))))));
            arr_38 [i_7] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) > ((+(arr_33 [i_10])))));
            var_29 = ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)28)))), (((/* implicit */int) (_Bool)1))))));
        }
        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_30 = ((/* implicit */signed char) 10376293541461622784ULL);
            arr_42 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_15))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_37 [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)120)))))));
        }
    }
    var_31 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_10)))));
}
