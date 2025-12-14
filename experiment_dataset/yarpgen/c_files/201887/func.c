/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201887
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_6 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2])), (((((/* implicit */long long int) arr_0 [i_0])) - (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (3LL)))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */long long int) max((1935510971U), (((/* implicit */unsigned int) arr_4 [i_2] [i_0] [i_0])))))))) ? (min((arr_0 [i_1]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    arr_10 [i_0] [15] [(unsigned char)4] = ((/* implicit */unsigned short) arr_2 [i_3] [i_1] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_4]))))));
                        arr_14 [i_0] [10U] [i_3 - 1] [i_4] = ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned short)26355)));
                        arr_15 [i_0] [i_1] [i_3] [i_4] &= ((/* implicit */unsigned char) ((arr_11 [i_4] [i_3] [(unsigned short)13] [i_0]) == (arr_11 [i_0] [0] [i_3 + 1] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_19 [(_Bool)1] [i_3 - 3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 1])) % (((/* implicit */int) arr_17 [11U]))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) + ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_3] [i_6] = ((/* implicit */unsigned short) (~(arr_18 [i_0] [16U] [i_0] [i_1] [i_3 - 3] [i_6])));
                        var_17 -= ((/* implicit */long long int) ((signed char) arr_17 [i_0]));
                        var_18 &= ((((/* implicit */int) (unsigned char)10)) + (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3] [i_6])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_7])) << (((var_0) - (2011657635U))))) % (((/* implicit */int) arr_21 [i_7] [i_1] [i_0] [i_0]))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (((+(((/* implicit */int) arr_21 [i_0] [i_1] [i_7] [i_7])))) - (((/* implicit */int) max(((unsigned short)19412), (((/* implicit */unsigned short) (unsigned char)255))))))));
                    arr_27 [i_0] [i_1] [21ULL] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_7])))) % (((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_7])) : (((/* implicit */int) arr_21 [i_0] [16] [i_7] [i_7]))))));
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_20 &= ((/* implicit */int) (unsigned char)2);
                    var_21 = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [(short)9]);
                    arr_31 [(signed char)7] [i_1] [0] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (var_5)));
                }
                arr_32 [i_0] [i_1] = ((/* implicit */int) max((arr_8 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_30 [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_22 = (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)19441)) : (((/* implicit */int) var_12)))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (1935510971U))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_0))))) - (2011657626U))));
}
