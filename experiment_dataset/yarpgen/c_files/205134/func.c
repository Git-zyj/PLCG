/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205134
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
    var_16 = ((/* implicit */signed char) (~(var_4)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (arr_0 [i_0] [i_0])))) * ((-(((/* implicit */int) arr_2 [i_0]))))))), (min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)7])), (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */long long int) (~(arr_0 [i_0] [i_0])));
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned short) (!((_Bool)0)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_20 += ((/* implicit */unsigned long long int) ((_Bool) (!((_Bool)1))));
                        var_21 += (+(((/* implicit */int) (!(((/* implicit */_Bool) 14894561709616676180ULL))))));
                        var_22 = (+(((/* implicit */int) ((_Bool) arr_10 [i_1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [9LL] [i_1 + 1] [i_1] [i_2]))) + ((+(arr_6 [i_1 - 1] [i_1 + 1])))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_20 [i_1 + 2] [(signed char)14] [i_5] [i_1] = ((/* implicit */unsigned int) arr_15 [i_1] [i_2] [i_1]);
                        var_24 = ((/* implicit */short) max(((-(((/* implicit */int) (signed char)-91)))), (min((1071959301), (((/* implicit */int) (_Bool)0))))));
                        var_25 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_19 [i_1 - 1] [i_2] [i_5] [i_1])), (arr_6 [i_1 + 2] [i_6 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) -903928844)))))));
                        var_26 -= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_8 [(signed char)14] [i_1 + 1] [i_1])) ? (arr_5 [(unsigned char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned long long int) min((arr_15 [12U] [i_2] [12U]), (((/* implicit */long long int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 2] [3U] [i_1]))))))), (((/* implicit */unsigned long long int) arr_16 [i_1 + 2] [i_1 + 2] [i_5] [i_1 + 2]))));
                        var_27 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_6 + 2] [i_5] [12ULL] [i_1 + 1])), (arr_7 [i_6 + 1] [i_6 + 2] [i_1 - 1]))))));
                    }
                } 
            } 
            var_28 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_3)))) * (min((4194303), (((/* implicit */int) (short)-28223))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_29 |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_13))))));
                        var_30 = ((/* implicit */unsigned long long int) ((arr_17 [i_9] [i_8 - 1] [i_7] [i_1 - 1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1 - 1] [i_1])))));
                        arr_29 [(signed char)10] &= ((/* implicit */unsigned long long int) arr_25 [16ULL]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) arr_26 [4LL] [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_19 [i_1] [i_9] [i_8] [i_1])) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_8] [i_1]))))));
                            var_32 = ((/* implicit */long long int) (((+(var_11))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1 + 1] [i_1] [i_8 - 1] [i_8 - 1] [i_8 + 4] [i_8 + 4])))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_0))) != ((~(arr_17 [i_1] [i_9] [i_8] [i_7] [i_1])))));
                            var_34 ^= ((/* implicit */_Bool) arr_16 [i_1] [i_8] [i_9] [i_10]);
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_7] [i_8 + 4] [i_10])) ? (((/* implicit */int) arr_22 [i_8 - 2] [i_1])) : (((/* implicit */int) var_1))));
                        }
                    }
                } 
            } 
            var_36 &= ((((/* implicit */_Bool) arr_31 [i_1] [i_7] [(unsigned char)0])) ? (arr_5 [18]) : ((+(arr_6 [i_1] [15ULL]))));
            var_37 = ((/* implicit */_Bool) ((var_4) % (var_2)));
        }
        var_38 &= ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (short)-14954)) ? (arr_5 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14948))))), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [4])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_25 [6LL])), ((+(((/* implicit */int) arr_16 [i_1 - 1] [i_1] [11] [11])))))))));
        var_39 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [10LL] [i_1 + 2] [i_1] [12] [(unsigned char)16] [i_1 + 1]))))) ^ ((~(arr_9 [i_1 + 1] [i_1] [i_1])))))) ? (((/* implicit */long long int) (~((~(arr_18 [(signed char)1] [(signed char)1] [i_1 - 1] [i_1] [i_1])))))) : ((~(30LL)))));
    }
    for (int i_11 = 2; i_11 < 6; i_11 += 1) 
    {
        arr_36 [i_11] = ((/* implicit */int) min((min((862461982839688732ULL), (((/* implicit */unsigned long long int) max((arr_4 [17ULL] [5LL]), (((/* implicit */unsigned short) (signed char)-91))))))), (((/* implicit */unsigned long long int) arr_1 [i_11 + 3] [i_11 + 2]))));
        var_40 = ((/* implicit */long long int) min((((arr_6 [i_11] [(signed char)1]) != (arr_6 [i_11] [i_11 - 2]))), ((!((_Bool)0)))));
    }
    var_41 = ((/* implicit */signed char) var_0);
    var_42 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)127))));
}
