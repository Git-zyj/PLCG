/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40622
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1] [i_1]) + (arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (-8904069971260399606LL) : (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1]))))))) : (((min((8904069971260399606LL), (((/* implicit */long long int) var_14)))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (1166410059U))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_0);
                        var_19 = ((/* implicit */_Bool) arr_7 [i_1] [1] [i_2]);
                        arr_8 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [(signed char)8] [i_1] [i_2] [i_3] [i_3])))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0] [i_0])))));
                        arr_9 [i_0] [i_2] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1])))) : (11ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_14))))), (1166410066U)))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_7 [i_1] [i_2] [(unsigned char)13])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (3128557230U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)4607)) ? (arr_3 [(signed char)0] [(signed char)0]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 7; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_4 - 1]) >> (((arr_3 [(short)4] [i_4 - 2]) + (2806668503083074979LL)))))) ? (((/* implicit */unsigned long long int) arr_2 [i_4 - 1] [i_4] [12LL])) : (arr_6 [i_4] [(signed char)5] [i_4] [(_Bool)1] [i_4 - 2] [i_4]))))));
        arr_14 [i_4] = arr_11 [i_4];
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_4] [i_4 + 2] [i_4 + 4]))));
            var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [18LL] [i_5])) ? ((~(arr_0 [i_4 + 3] [16ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_4 - 1])))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)43)) || (((((/* implicit */_Bool) var_5)) || ((_Bool)1)))));
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -461994554)) ? (((/* implicit */int) arr_18 [i_4] [i_5] [i_7])) : (((/* implicit */int) var_5)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((arr_20 [2] [i_5 + 1] [i_4 - 2] [i_4] [2]) ^ (arr_20 [2ULL] [i_5 + 1] [i_4 + 1] [i_4] [2ULL]))))));
        }
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 2])) ? (arr_15 [i_4] [i_4 + 2]) : (((/* implicit */unsigned long long int) var_15))));
    }
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_8)))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_8])) || (((/* implicit */_Bool) (unsigned short)37322))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8] [i_8] [i_9] [i_8])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8] [i_9])) || (((((/* implicit */_Bool) arr_3 [(unsigned short)18] [i_9])) || (((/* implicit */_Bool) (unsigned char)69))))))) : ((-((+(((/* implicit */int) arr_1 [i_8]))))))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_20 [(unsigned char)0] [i_8] [i_9] [i_8] [(unsigned char)0]))));
        }
        var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_19 [i_8] [(unsigned char)1] [i_8] [i_8]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) || (((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
    }
    var_31 = ((/* implicit */long long int) var_12);
    var_32 &= ((/* implicit */unsigned short) var_2);
}
