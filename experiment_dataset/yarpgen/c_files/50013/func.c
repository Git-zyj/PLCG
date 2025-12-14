/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50013
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
            arr_6 [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 182627475U))))));
            var_20 += ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_5))))) == ((~((~(-2790852989223651247LL)))))));
        }
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((unsigned char) (~(2790852989223651232LL))));
            var_22 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_7 [i_2 + 1] [i_0])))) ? (((-2790852989223651247LL) / (((/* implicit */long long int) 205832328U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : ((~(((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_2 - 1])))))))));
        }
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            var_24 = (+(min(((+(((/* implicit */int) arr_7 [i_3 + 3] [1LL])))), (((/* implicit */int) arr_0 [i_3 + 2] [i_3 - 3])))));
            arr_13 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_3 + 2] [i_3 + 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) (-(((/* implicit */int) arr_19 [i_6] [i_5] [3ULL] [i_3 - 1] [i_0])))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (var_11)));
                        var_27 ^= ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_2)))));
                        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 - 3] [i_0])) ? (((/* implicit */int) arr_11 [i_3 - 3] [i_3])) : (((/* implicit */int) arr_11 [i_3 - 3] [i_3]))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        arr_23 [i_0] [i_3] [i_4] [i_5] [(unsigned char)14] [i_5] [i_3] = ((/* implicit */int) arr_22 [i_0] [i_3 + 3] [i_0] [i_5] [i_3 + 3] [20U] [i_3]);
                        var_29 ^= arr_3 [i_4] [10LL];
                        var_30 = ((/* implicit */int) arr_7 [i_0] [i_0]);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_26 [i_8] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0] [i_8 + 1])))));
                        var_31 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_8 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_0 [i_8 - 1] [i_3 - 3])) : (((/* implicit */int) arr_1 [i_3 + 1]))));
                    }
                    arr_27 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_4] [(unsigned short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_14 [i_0] [(unsigned char)13] [i_5])))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_3] [i_4] [i_5])) - ((-(var_3)))));
                        var_34 = (+(((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2])));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_31 [i_0] [17] [17] [i_5] [17])) : (((/* implicit */int) arr_9 [i_0]))))) ? (((((/* implicit */int) arr_25 [i_9] [i_4] [i_4] [i_3])) | (((/* implicit */int) arr_10 [i_9] [i_5])))) : (((/* implicit */int) var_2)))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (+(((/* implicit */int) arr_7 [i_3] [2U])))))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
                    {
                        var_37 &= ((/* implicit */long long int) arr_16 [i_3 - 3] [i_3] [i_3 + 3] [i_10 + 2]);
                        arr_34 [i_10 + 1] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned long long int) -330055475));
                        var_38 = ((/* implicit */unsigned short) (!(((_Bool) arr_14 [i_0] [i_0] [i_0]))));
                    }
                }
                var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_6))));
                var_40 = ((/* implicit */unsigned char) (-(((((1092668231396279758LL) >> (((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [12ULL] [i_0])) + (77))))) * (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (arr_19 [(unsigned short)8] [i_3 + 3] [i_3] [(signed char)6] [i_3])))))))));
            }
            var_41 += ((/* implicit */unsigned char) ((max((arr_20 [i_3 - 2] [8LL] [i_3 - 3] [i_3]), (arr_20 [i_3 - 2] [i_3] [(unsigned short)20] [i_3]))) ^ ((+(arr_20 [i_3 - 2] [i_3 + 3] [i_3] [i_3])))));
            var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_28 [(unsigned short)12] [(unsigned char)10] [i_3] [i_3] [i_3 - 1] [11] [i_3])) || (((/* implicit */_Bool) arr_28 [i_3 - 3] [i_3 - 3] [i_0] [i_3 + 2] [i_3 - 1] [(unsigned short)16] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2790852989223651229LL)) ? (53609717) : (((/* implicit */int) (_Bool)1))))) : (((7255560832003873704ULL) << (((/* implicit */int) (_Bool)0))))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_43 = ((/* implicit */_Bool) 2790852989223651256LL);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
            {
                var_44 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_3 [i_12] [i_11]))))));
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_12 + 2] [i_12 + 1] [i_11] [i_12 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_16 [i_12 + 1] [i_11] [(unsigned char)20] [(unsigned char)20]))))) : (arr_38 [i_0] [i_11] [i_12 + 2] [i_11])));
                var_46 += ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_15 [i_0] [16U] [i_11] [i_11]))));
            }
            arr_40 [i_0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_11] [i_0] [i_0])) ? (arr_20 [i_11] [i_11] [i_11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_11])))));
        }
        var_47 += ((/* implicit */unsigned long long int) min((-5012786496342911636LL), (((/* implicit */long long int) (_Bool)1))));
        var_48 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
    }
    var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_11))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
}
