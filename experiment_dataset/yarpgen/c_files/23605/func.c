/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23605
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
    var_10 = ((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)-26)))) != ((-(((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    var_11 = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) : (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 &= ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) arr_1 [i_0]))))));
        var_13 -= (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) <= (arr_4 [i_0])))) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_3)));
            arr_5 [i_0] = ((/* implicit */unsigned char) -6137382854770764468LL);
            arr_6 [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 4294967295U)) : (3673201812846276648LL)));
        }
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0]))))))) ? (var_4) : ((+(((/* implicit */int) (signed char)-26))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (((/* implicit */int) arr_15 [i_0] [i_2 - 2] [(signed char)18] [(signed char)18] [i_5])))))) : ((+(arr_0 [i_5]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                            arr_20 [i_0] [i_2 - 2] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), ((~(4294967295U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_2] [i_0]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            arr_24 [i_0] [1ULL] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_7 = 4; i_7 < 19; i_7 += 4) 
            {
                arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_7]) : (var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                /* LoopSeq 1 */
                for (long long int i_8 = 4; i_8 < 19; i_8 += 2) 
                {
                    arr_33 [i_6] [i_0] [i_6] [i_7 - 4] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(19U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_0] [(short)17] [(short)17]))))) : (arr_12 [i_7 - 1] [i_7 + 1] [i_7 - 4] [i_7 - 4])));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_7 - 3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(signed char)5] [(signed char)5] [10LL] [i_8 + 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))) : (arr_34 [i_6] [i_8 - 4] [i_7 - 4] [i_6 + 1] [i_6])));
                        arr_38 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_9] [i_0] [i_0]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) | ((-(arr_12 [i_10] [i_8 - 3] [i_7 + 1] [i_0]))))))));
                        arr_43 [(signed char)16] [i_10] [(signed char)1] [i_0] [i_0] [i_0] [i_0] = arr_39 [i_0] [i_0] [i_7] [i_0] [i_0];
                        arr_44 [i_0] [19LL] [19LL] [(short)4] [19LL] = ((/* implicit */unsigned int) ((var_3) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))));
                    }
                    var_17 = ((/* implicit */_Bool) 4294967288U);
                }
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (19U)));
                arr_45 [i_0] [i_6 + 2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 3]))) == (((((/* implicit */_Bool) 403849214)) ? (-8579942980050885775LL) : (-3646274136230677829LL)))));
            }
            /* vectorizable */
            for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
            {
                arr_49 [i_0] [i_6 + 1] [i_6 + 1] [i_11 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_35 [i_0] [i_0] [i_6 + 3] [i_11 + 1] [i_11 + 1])) ^ (((/* implicit */int) var_7)))) % (((/* implicit */int) (_Bool)1))));
                arr_51 [15] [15] [15] [15] = ((/* implicit */signed char) arr_42 [i_11 + 1] [i_6] [i_0] [i_0] [i_0]);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [1U])) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) arr_35 [i_0] [i_0] [i_6 + 1] [(_Bool)1] [i_6 + 1]))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)1) ? (((var_2) ? (((/* implicit */long long int) var_4)) : (var_3))) : (((/* implicit */long long int) var_4)))))));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        arr_60 [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-12))))) ? ((+(arr_13 [i_0] [(signed char)7] [i_12] [i_13] [(signed char)7] [0LL]))) : (((/* implicit */int) arr_41 [i_0] [i_12] [i_14] [i_13])))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1454077841147445872LL))))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
    }
}
