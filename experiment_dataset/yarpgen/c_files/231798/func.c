/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231798
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])))), (((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))))) && (((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2])) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_1] [i_0])))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))));
                                var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2]))))))) ? (((unsigned long long int) arr_11 [i_0] [i_4 + 1] [i_2] [i_1 + 1])) : (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) (unsigned char)14))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 3] [i_1 - 2])) && (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3])))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned int) (-2147483647 - 1))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)16)) && (var_2))) ? (((((/* implicit */int) arr_16 [i_0])) ^ (((/* implicit */int) (signed char)96)))) : (((/* implicit */int) arr_6 [i_0])))))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_5])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)9] [i_5])))) && (((/* implicit */_Bool) (short)4185))))))));
                        var_16 = (((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_2)) : (arr_12 [i_0]))))) / ((+(((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((signed char) arr_13 [i_2] [i_1] [i_1 - 3] [i_1] [i_2])))));
                        arr_20 [i_0] [i_2] [i_0] [i_6] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [(unsigned char)8] [i_2] [(short)4])) ? (((((/* implicit */_Bool) 1991577852)) ? (2147483647) : (arr_12 [i_6 - 2]))) : (2147483647)));
                        arr_21 [i_0] = ((/* implicit */int) ((short) (unsigned char)247));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_18 *= ((/* implicit */short) (-((~((~(((/* implicit */int) (unsigned char)103))))))));
                        arr_24 [i_0] [i_2] [(unsigned char)6] [i_0] = arr_9 [i_0] [i_1];
                        var_19 = ((/* implicit */int) (short)-4201);
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4201)) * ((-(((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0] [i_0])))))));
        var_20 = ((/* implicit */int) (-(((unsigned long long int) ((_Bool) (_Bool)0)))));
        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_0])), (arr_7 [i_0] [i_0] [i_0] [6])))) ? ((+(arr_7 [i_0] [i_0] [i_0] [i_0]))) : ((+(((/* implicit */int) (short)15))))));
    }
    for (short i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (signed char i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) (short)-16794)), (arr_10 [i_9] [i_8] [i_11])))) && (((/* implicit */_Bool) arr_29 [i_8] [i_10 + 1] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8] [i_9] [i_10 + 1])) && (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) ((signed char) (short)6683))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-12317)) && (((/* implicit */_Bool) arr_34 [i_8] [(signed char)11] [i_8])))))) : (max((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_27 [i_9])))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-((-(arr_31 [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_11]))))) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_37 [i_8])))))))));
                        var_23 ^= ((/* implicit */unsigned long long int) arr_9 [4] [i_11]);
                    }
                } 
            } 
        } 
        arr_39 [i_8] = ((/* implicit */int) var_0);
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 4; i_14 < 7; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) (signed char)-2))) && (((/* implicit */_Bool) -131072)))) && (((/* implicit */_Bool) (short)-6700)))))));
                            arr_50 [i_12] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_4 [i_14 - 2] [(unsigned char)11] [(unsigned char)11])) && (((/* implicit */_Bool) arr_4 [i_14 - 3] [i_14] [i_14]))))));
                            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) var_2))))) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                        }
                    } 
                } 
                var_27 = (short)16380;
            }
        } 
    } 
}
