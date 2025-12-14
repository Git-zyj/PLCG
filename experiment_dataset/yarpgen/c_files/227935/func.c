/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227935
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            arr_5 [i_0] [i_0] = ((((((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (9223372036854775807LL))) << (((arr_2 [i_0] [i_0]) - (2647006741U))));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) (_Bool)1);
            var_22 = ((/* implicit */unsigned int) arr_4 [i_2] [i_0] [i_0]);
        }
        for (int i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 4; i_4 < 8; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_3] [i_4] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)37222)) == (1336139568))));
                            var_23 = ((/* implicit */unsigned short) arr_2 [i_0] [i_3]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                arr_22 [i_3] = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_15)))));
                arr_23 [i_0] [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-123)) : (1411609288));
                var_24 = ((_Bool) ((((/* implicit */long long int) var_5)) <= (3113832992374580606LL)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 4; i_9 < 8; i_9 += 4) 
                {
                    var_25 = ((/* implicit */long long int) arr_28 [i_0] [i_0] [i_8] [i_9]);
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) > (var_13)));
                    var_27 = ((/* implicit */_Bool) arr_1 [i_0]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] = arr_8 [i_9] [i_3];
                }
                for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
                {
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((int) arr_17 [i_10] [i_3] [i_8] [i_10] [i_10] [i_0])) : (arr_18 [i_10 - 1] [i_10] [i_0] [i_10 + 2])));
                    var_29 -= (~(arr_26 [i_8] [i_8] [i_0]));
                    var_30 |= ((/* implicit */unsigned char) var_6);
                }
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)8176)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))) >= (2940849160072242857LL)));
                    var_33 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 1411609273)) : (arr_13 [i_0] [i_0])))));
                }
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_34 = ((/* implicit */long long int) var_6);
                    var_35 = ((/* implicit */long long int) ((_Bool) arr_34 [i_3] [i_3] [i_3] [i_3] [i_3 - 2] [i_3]));
                }
                var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) 1336139567)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-2147483647 - 1)))))))));
            }
        }
        arr_41 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_37 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) var_13))))));
    /* LoopNest 2 */
    for (unsigned int i_13 = 1; i_13 < 21; i_13 += 4) 
    {
        for (unsigned short i_14 = 3; i_14 < 23; i_14 += 4) 
        {
            {
                arr_48 [i_13] [i_14] [i_14] = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) arr_45 [i_13])))))))));
                var_38 = ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4398046511088LL)))))));
                var_39 |= ((/* implicit */unsigned long long int) ((var_13) > (min((((((/* implicit */_Bool) arr_47 [(unsigned char)16] [i_14] [i_14])) ? (((/* implicit */int) arr_45 [0ULL])) : (((/* implicit */int) arr_46 [(unsigned short)2] [i_14])))), (((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)37229))))))));
                var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_14 - 2])) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) : (arr_47 [i_13] [i_14] [i_13]))) : (((/* implicit */long long int) ((int) var_17))))))));
            }
        } 
    } 
}
