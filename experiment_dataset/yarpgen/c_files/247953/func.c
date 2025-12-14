/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247953
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */int) (short)21709)) < ((-(arr_0 [i_0 + 1] [i_1 + 1])))));
                var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 3] [i_0 - 1])) * (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 1]))))), (min((arr_3 [i_1 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) arr_5 [i_4]);
                    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_4]))) : (var_5)));
                }
            } 
        } 
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_4 [i_2] [(unsigned short)14]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_26 [i_8] [2ULL] [i_7] [i_8] = ((/* implicit */short) (+((+(2324301684U)))));
                        arr_27 [i_8] [0LL] [i_8] [i_8] = ((/* implicit */long long int) 262143U);
                    }
                } 
            } 
        } 
        arr_28 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)21693)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5])), (arr_24 [i_5] [3] [i_5] [i_5]))))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
    {
        arr_31 [i_9] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((long long int) 262143U)))))));
        var_14 = ((/* implicit */int) min((var_14), (min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-21729))))))), ((~(((/* implicit */int) arr_5 [i_9]))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_34 [i_10] = ((/* implicit */short) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((int) (short)21709));
            var_16 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)21709))));
            arr_38 [9LL] [i_11] [i_11] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))));
        }
        /* LoopSeq 1 */
        for (int i_12 = 3; i_12 < 7; i_12 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                arr_44 [i_10] [i_13] [i_10] [i_10] = ((/* implicit */unsigned short) ((unsigned int) (+(262146U))));
                var_17 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)21705)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (16777215U))) > (((/* implicit */unsigned int) arr_13 [i_10] [i_12 + 1] [i_13]))));
                var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                arr_47 [i_10] [i_12] [i_12] = ((/* implicit */int) arr_4 [i_12 + 3] [i_12]);
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    var_19 = ((/* implicit */int) ((9582825971582328871ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_45 [i_10]))))));
                    arr_50 [i_10] [i_12] [i_10] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_23 [i_10] [i_12 + 3] [3LL] [i_15] [i_12]))));
                }
                for (unsigned short i_16 = 2; i_16 < 8; i_16 += 3) 
                {
                    var_20 = var_3;
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65528))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_10] [i_12])) ? (((var_2) >> (((arr_21 [i_16]) - (706451777406309456LL))))) : (((/* implicit */unsigned int) (~(1870902710))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(arr_21 [i_14]))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((unsigned int) (~(-1))));
                        var_25 = ((/* implicit */unsigned int) 5567886259153849471LL);
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_13 [i_16] [i_12] [i_10])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) (short)-31815))));
                    }
                }
                for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned int) var_0)))));
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_54 [10ULL] [i_12 + 4] [i_12] [i_12] [i_12])) || (((/* implicit */_Bool) arr_7 [10])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24155)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21709)))))));
                }
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) || ((!(((/* implicit */_Bool) var_8))))));
                arr_58 [(short)9] [i_14] [i_14] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) (unsigned short)3241))));
                arr_59 [i_10] [i_10] [i_12] [i_14] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_18 [i_10]))))));
            }
            arr_60 [(_Bool)1] [i_10] [0ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_12 + 1] [i_12])))))) ^ (max((((/* implicit */unsigned long long int) arr_6 [i_12 - 3] [i_12 - 3])), (8863918102127222745ULL)))));
        }
    }
}
