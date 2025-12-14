/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54071
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [i_0] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_17 -= ((/* implicit */_Bool) ((((_Bool) (signed char)68)) ? (-1LL) : (max(((+(arr_2 [i_0]))), (arr_8 [i_2] [13U] [i_0] [i_0])))));
                    arr_9 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (24LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) != (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) 3385117381U)) : (35993612646875136LL)))));
                    var_19 = ((/* implicit */short) arr_5 [i_0] [i_2]);
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                    arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 68702699520LL)) ? (((/* implicit */long long int) 2761348970U)) : (144115188075823104LL)));
                }
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_21 += ((/* implicit */short) (+(-30LL)));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(7720837930952573549LL))))));
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4] [i_0])) ? ((-(((/* implicit */int) (unsigned short)5059)))) : (((/* implicit */int) ((short) 24LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((~(((long long int) 33LL))))));
                }
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [(_Bool)1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_28 [9LL] [i_6 + 3] [i_8] [9LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_9] [i_9] [i_6 + 2]) ? (((/* implicit */int) arr_19 [i_9] [i_8] [i_6 + 1])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) (-(((-9223372036854775801LL) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_7] [i_7])))))))) : ((+(arr_17 [i_6 + 3] [i_9 + 3] [i_9 + 1])))));
                                arr_29 [i_6 - 1] [i_8] [i_7] [i_6 - 1] [(short)7] = ((/* implicit */short) (+(arr_24 [i_9 - 1] [i_7] [16U] [i_5])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 17; i_10 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), ((~(arr_25 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                    arr_32 [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) - (((arr_25 [i_5] [i_5] [(signed char)2] [(signed char)2] [i_10 - 3]) + (((/* implicit */unsigned int) -986559607))))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_6 + 3] [i_10 - 2] [i_10] [i_10 - 3] [i_6 - 2])) ? (arr_22 [i_6 + 1] [i_6] [i_10] [i_6] [(unsigned short)2] [i_6]) : (arr_22 [16LL] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 2] [i_10 + 1])))));
                }
                var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0LL))));
                /* LoopNest 3 */
                for (unsigned int i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 4; i_13 < 16; i_13 += 3) 
                        {
                            {
                                arr_41 [i_12] [i_6] [i_11 + 1] [i_11 + 1] [i_13] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_23 [i_13] [i_12 + 1] [i_5] [i_6 + 3] [i_5]))))));
                                arr_42 [i_12] [i_12] [i_6 + 2] [i_11 - 2] [i_11 - 2] [i_13 - 1] = ((/* implicit */unsigned int) arr_22 [i_5] [i_6] [i_11] [i_5] [i_6] [i_6]);
                                var_27 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)20495)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_5] [i_13 - 2] [i_5] [i_12 - 1] [i_13])) ? (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5])))) : ((~(arr_24 [i_6 + 3] [(signed char)0] [i_13 - 3] [i_13 - 3])))));
                                arr_43 [i_12] = ((/* implicit */unsigned short) (short)-15503);
                            }
                        } 
                    } 
                } 
                arr_44 [i_6] [i_6] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(arr_24 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_34 [i_6 + 2] [i_6 - 2] [i_6] [i_5])) < (20LL))))) : (max((((/* implicit */unsigned long long int) 909849915U)), (5ULL))))) & (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)30587)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (short)-32747))));
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        for (signed char i_15 = 1; i_15 < 24; i_15 += 3) 
        {
            {
                var_29 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_15]))))))))));
                var_30 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) -24LL)) || (((/* implicit */_Bool) 1533618331U)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)32754))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-32743), (((/* implicit */short) arr_50 [i_15]))))) ? (((/* implicit */int) ((9223372036854775806LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_14])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65071)) <= (((/* implicit */int) arr_46 [i_14])))))))) : ((-(arr_49 [i_15 - 1] [i_15 + 1] [i_15 + 1])))));
            }
        } 
    } 
    var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (322400949U))))));
}
