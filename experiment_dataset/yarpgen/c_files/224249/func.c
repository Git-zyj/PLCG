/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224249
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [18LL] [i_1] [(signed char)15] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1]), (arr_6 [i_0] [i_0 + 1] [i_1] [i_1]))))));
                    arr_9 [i_2] &= ((/* implicit */unsigned char) (signed char)5);
                }
            } 
        } 
    } 
    var_10 &= ((/* implicit */unsigned int) (signed char)0);
    var_11 = var_9;
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) 6)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)32767)))) >= (((/* implicit */int) (signed char)22))))), (max(((unsigned short)65528), (((/* implicit */unsigned short) arr_2 [i_3]))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_3] [i_3]), (((/* implicit */long long int) ((unsigned int) arr_2 [i_3])))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((arr_4 [i_3] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((signed char) arr_5 [i_3]))))) : (((/* implicit */int) max(((signed char)0), ((signed char)10))))));
    }
    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        arr_15 [(short)0] &= ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_1))));
        arr_16 [i_4] = ((/* implicit */short) min((var_4), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100)))))) : (arr_12 [(signed char)5] [i_4 - 1]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (unsigned short)64466)))));
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) ((_Bool) arr_6 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned int i_8 = 4; i_8 < 17; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_5] [i_5] [i_5] [i_6] [i_6] [i_5] [i_5] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_32 [i_5] [i_6] [i_8 - 3] [i_7] = ((/* implicit */unsigned short) arr_23 [(signed char)8] [13U]);
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_36 [3] [i_7] [i_7] [i_8] [i_10] = ((/* implicit */unsigned long long int) 0U);
                            arr_37 [i_5] [1ULL] [i_7] [(short)16] [i_10] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_24 [(unsigned short)3] [i_7] [i_8] [i_7])))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_14 *= ((/* implicit */unsigned int) var_3);
                            var_15 = ((/* implicit */_Bool) arr_17 [i_11]);
                            arr_40 [i_7] = ((/* implicit */short) min((((/* implicit */long long int) arr_2 [i_11 - 1])), (min((arr_4 [i_8 + 2] [i_11 - 1]), (arr_4 [i_8 + 3] [i_11 - 1])))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_39 [i_11 - 1] [i_11] [i_8 + 1] [i_7] [i_6]))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            arr_43 [(short)12] [i_6] [i_7] [i_8 - 3] [i_5] &= (!(((/* implicit */_Bool) arr_28 [i_8 - 1] [i_8 - 4] [i_8 + 1] [i_8 - 3])));
                            arr_44 [i_5] [i_6] [i_7] [i_7] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) (~(0LL))));
                        }
                        var_17 = ((/* implicit */_Bool) arr_26 [0LL] [i_8] [i_7] [i_8 + 2]);
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) var_5))), (((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64466))) : (0ULL))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((unsigned int) arr_4 [i_5] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0))))));
    }
}
