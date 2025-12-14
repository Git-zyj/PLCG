/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2920
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9))))) | (arr_0 [i_0]));
                    arr_7 [i_0] = ((/* implicit */int) ((_Bool) (short)0));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) var_7));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3])))))));
                            arr_20 [i_6] [i_5] [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) ((_Bool) var_6))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)0))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_4])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_5] [i_7]))) : (var_4)));
                            var_24 *= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_5])) | (((/* implicit */int) arr_6 [i_5]))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (!(arr_11 [i_3] [i_0])));
                        arr_23 [i_5] [i_5] [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) arr_15 [i_0] [i_3] [i_4] [i_4] [i_4] [i_0])))));
                        var_26 = ((/* implicit */unsigned char) ((long long int) ((long long int) var_16)));
                        arr_24 [i_5] [i_4] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_11)) : (arr_21 [i_0] [i_3] [i_3] [i_5] [i_0])))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        arr_34 [(short)12] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_18 [i_8] [i_9])) + (2147483647))) << (((((((/* implicit */int) var_13)) + (6581))) - (5))))) - (((/* implicit */int) arr_9 [i_11] [i_8]))));
                        var_28 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) + (var_4)))) || (((((/* implicit */_Bool) -321776979)) || (((/* implicit */_Bool) 321776979)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7))) * (524287U)))) : (((long long int) arr_1 [i_9])))) : (var_7)));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (arr_28 [i_8] [i_9] [1LL])))) ^ (((/* implicit */int) var_0))))) > (min((((/* implicit */long long int) (_Bool)1)), (min((var_16), (var_7)))))));
                        arr_35 [i_11] [i_10] [i_9] [i_8] [i_8] = var_2;
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-(((arr_14 [i_11] [i_10] [i_9] [i_9] [i_9] [i_8]) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_10] [i_8] [i_10] [i_9])) : (((/* implicit */int) arr_14 [i_8] [i_9] [i_10] [i_11] [i_11] [i_11])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (signed char i_15 = 4; i_15 < 16; i_15 += 2) 
                        {
                            {
                                var_31 ^= (-(min((((/* implicit */long long int) ((signed char) arr_2 [i_8] [i_8]))), (((long long int) var_13)))));
                                arr_45 [i_8] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    arr_46 [i_13] [i_12] [i_8] = ((/* implicit */short) var_5);
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            {
                                var_32 = min(((short)11697), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_52 [i_8] [i_12] [i_16] [i_16] [i_17]), (((/* implicit */unsigned long long int) arr_50 [i_8] [i_12] [i_13] [i_8] [i_17] [i_17])))))))));
                                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
                                var_34 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_17]))))), (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_11)) : (arr_49 [i_17] [i_16] [i_16] [i_8]))))));
                                var_35 += ((/* implicit */_Bool) min((min((2650910695441581197LL), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_37 [i_8] [i_8] [i_8])), (min((arr_3 [i_17]), (((/* implicit */unsigned int) arr_29 [i_8] [i_8] [i_8] [i_8])))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_12] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-476883966237142339LL)));
                }
            } 
        } 
    }
}
