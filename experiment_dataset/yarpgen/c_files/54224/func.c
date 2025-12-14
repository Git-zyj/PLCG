/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54224
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((2276682138281584233LL), (((/* implicit */long long int) (short)-12543)))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1879048192)))) - (((/* implicit */long long int) ((arr_4 [(unsigned char)13] [(unsigned char)13]) / (((/* implicit */int) (signed char)81)))))))));
                    var_15 &= ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) var_10);
                        arr_19 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [16ULL] [2]))) || (((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 - 2] [(short)0] [i_6 - 1] [i_6 + 1] [i_4]))));
                        arr_20 [i_3] [i_5] [i_3] &= ((/* implicit */unsigned char) ((arr_8 [i_3] [i_6 - 1] [i_6 - 1] [i_3]) <= (arr_8 [i_6] [i_6 - 1] [10U] [i_3])));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        var_17 = ((short) ((unsigned char) var_5));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_25 [i_3] [i_4] = ((/* implicit */long long int) (+(1879048186)));
                            var_18 = ((/* implicit */_Bool) ((signed char) var_0));
                        }
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (9223372036854775807LL)))) != (10751563942940063245ULL))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        arr_30 [(signed char)8] [i_4] [i_5] [i_9 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5] [i_9] [i_9 + 1]))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (unsigned short)2921))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    arr_33 [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)6223))));
                    var_21 = ((/* implicit */unsigned char) (-(134261293U)));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 994077220))));
                }
                var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3] [i_4] [i_3]))))) ? ((+((((-2147483647 - 1)) / (((/* implicit */int) arr_31 [i_3])))))) : (((((/* implicit */_Bool) arr_29 [i_3])) ? (((int) arr_16 [i_3] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_32 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)32))))))));
                arr_34 [i_4] = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 2; i_11 < 20; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 21; i_13 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)218))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_13))))) : (((arr_39 [i_11 - 2] [i_11 - 2]) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                    var_25 = ((/* implicit */unsigned char) ((unsigned int) 895195093));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned char)73))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_3))));
}
