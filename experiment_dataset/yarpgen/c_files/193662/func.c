/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193662
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
    var_10 ^= ((unsigned long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 34359738367ULL)) ? (65380429) : (((/* implicit */int) (short)-12006))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1294528322U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (var_7)))) : (arr_9 [i_2] [i_2] [i_2])));
                            var_13 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) 1577851926U)) + (18446744073709551615ULL)))));
                            arr_13 [i_4] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((arr_11 [i_4] [i_3] [i_2] [i_1] [i_2] [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 10827874805425491382ULL))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((unsigned long long int) arr_10 [i_0] [i_0] [(unsigned short)8] [(signed char)10] [i_4] [(signed char)10]))));
                        }
                    }
                    arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) (~(-93992908)))) : (((((/* implicit */_Bool) 34359738344ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62304))) : (arr_0 [i_0])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) arr_12 [i_0] [18ULL] [i_0] [i_5])) : ((+(arr_7 [(short)4] [(short)4] [(short)4])))));
            arr_17 [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)12002)) ? (((/* implicit */int) (unsigned short)14193)) : (((/* implicit */int) (!(((/* implicit */_Bool) 7618869268284060231ULL)))))));
        }
        for (signed char i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)90)))));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)18])) ? (((/* implicit */int) arr_18 [i_0] [(unsigned short)15] [i_7])) : (((/* implicit */int) var_1)))))));
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */signed char) (unsigned char)131);
                            arr_27 [6ULL] [i_6] [6ULL] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [11ULL] [i_6] [i_0] [i_0]);
                        }
                        for (unsigned short i_10 = 1; i_10 < 16; i_10 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) (-(2589866516U)));
                            var_19 = ((/* implicit */_Bool) arr_11 [(_Bool)1] [i_10] [i_6] [i_8 + 1] [i_6] [i_6] [i_6 - 2]);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned int) var_7)))));
                        }
                        arr_31 [i_8 - 1] [(short)4] [(short)4] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1])) : (((/* implicit */int) (signed char)-68))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            arr_34 [(signed char)18] [i_6] [i_6] [i_6] [i_7] [i_8] [i_11] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 364003045U)))));
                            var_21 += ((/* implicit */unsigned long long int) (unsigned short)55221);
                        }
                    }
                } 
            } 
            arr_35 [(unsigned short)15] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)28))) ? (((((/* implicit */_Bool) 364003044U)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)40194)) == (((/* implicit */int) (signed char)116)))))));
        }
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            var_22 = ((/* implicit */_Bool) var_3);
            /* LoopNest 2 */
            for (long long int i_13 = 2; i_13 < 15; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (signed char)44))));
                        var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)42)))))));
                    }
                } 
            } 
            arr_45 [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_12] [i_12])) ? (((/* implicit */int) arr_4 [i_0] [i_12])) : (((/* implicit */int) arr_4 [i_0] [i_12]))));
            arr_46 [i_0] = ((/* implicit */unsigned int) ((int) -65380416));
        }
    }
}
