/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51403
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
    var_14 = (((~((~(((/* implicit */int) var_8)))))) << (((var_12) + (6164861188440365110LL))));
    var_15 = ((short) 18446744073709551615ULL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        var_17 = (((-((~(((/* implicit */int) (_Bool)1)))))) << (((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (max((arr_1 [i_0]), (arr_1 [i_0]))))) - (809230824U))));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)32755))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((int) var_1)), (((/* implicit */int) arr_4 [i_1]))))), (arr_5 [i_1])));
        var_19 = (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_5 [i_1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))))));
    }
    for (int i_2 = 2; i_2 < 7; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_19 [(short)9] [(short)9] [i_2] [(short)9] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_20 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])) : (((unsigned long long int) -1LL))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65513)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))))))));
                        var_20 = ((/* implicit */signed char) (((!(((_Bool) arr_8 [i_2] [i_5])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [19])) && (((/* implicit */_Bool) -1LL)))) || (((/* implicit */_Bool) ((unsigned char) 2128152477)))))) : (((/* implicit */int) var_7))));
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_25 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) min((((unsigned long long int) (_Bool)1)), (((unsigned long long int) ((((/* implicit */_Bool) 6709985833242200806LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))))));
                        arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)65535);
                    }
                    arr_27 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)63), (max((arr_0 [i_3] [i_2]), ((unsigned char)237)))))) ? (((/* implicit */long long int) ((unsigned int) ((signed char) arr_10 [i_4])))) : (arr_7 [i_2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                {
                    arr_34 [i_2 + 2] [8U] [i_8] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(short)4] [i_8 - 1] [(short)4] [i_2]))) : (arr_22 [i_2 - 1]))), (((/* implicit */long long int) var_13))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) 579575616U)) <= (4467570830351532032LL))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (long long int i_11 = 4; i_11 < 13; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        arr_47 [i_9] [i_10] [i_11 + 2] [i_11 + 2] = ((/* implicit */signed char) min((max((((unsigned int) arr_36 [i_11])), (3715391700U))), (((/* implicit */unsigned int) (unsigned short)15))));
                        arr_48 [i_9 - 2] [i_10] [i_11 - 4] [i_10] = ((/* implicit */unsigned int) arr_35 [i_9]);
                    }
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) (short)30178);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((+(((/* implicit */int) arr_41 [(unsigned char)6])))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) arr_46 [11LL] [i_10] [i_10] [(short)14])), (arr_5 [i_9]))) - (8331655476215784356ULL)))))) ? (((/* implicit */int) var_0)) : (arr_43 [i_13 - 1] [i_11 - 4] [i_11] [i_11])));
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10])) ? (arr_43 [i_9] [i_9] [i_9] [i_9 + 1]) : (((/* implicit */int) arr_39 [i_9]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_40 [i_9] [i_10] [i_11])), (arr_1 [i_9]))))))));
                }
            } 
        } 
        arr_51 [i_9] = ((/* implicit */unsigned char) 371793549);
    }
}
