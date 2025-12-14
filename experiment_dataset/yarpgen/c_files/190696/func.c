/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190696
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
    var_14 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */long long int) var_12);
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_1] [i_2] |= var_6;
            arr_7 [(_Bool)1] = ((/* implicit */unsigned short) (+(var_13)));
            var_18 = ((/* implicit */long long int) arr_5 [i_1] [i_2] [i_2]);
            var_19 = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_2]);
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) arr_4 [i_3] [i_2] [i_1])) : (((/* implicit */int) var_6))));
                arr_10 [i_1] [i_2] [(short)6] [i_3] = ((short) min((((unsigned short) arr_9 [i_1] [i_2] [4LL])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((short) (~((-(((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((short) ((short) var_2)));
                            var_23 ^= ((/* implicit */unsigned char) arr_13 [i_5] [i_5] [i_2]);
                            arr_18 [i_1] [i_1] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_13)) : (var_5))), (((/* implicit */long long int) max((arr_3 [i_6] [i_6]), (((/* implicit */short) arr_11 [i_1] [i_4 + 1] [(signed char)13] [(unsigned short)8])))))))) ? (((((/* implicit */_Bool) (-(arr_9 [(signed char)7] [6LL] [i_4])))) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [1ULL] [i_5])) : (min((arr_9 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_5])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                            var_24 = ((/* implicit */long long int) ((signed char) (+(min((var_11), (((/* implicit */unsigned long long int) var_8)))))));
                        }
                    } 
                } 
                arr_19 [i_4] [i_1] [i_1] [(unsigned char)0] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_2] [i_4])))))));
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                arr_23 [i_1] [(short)8] [(unsigned char)6] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_9))), (max((arr_20 [(_Bool)1]), (var_8))))))));
                arr_24 [i_7] [i_7] [i_2] [12LL] = ((/* implicit */_Bool) var_13);
                arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_4)), (var_13)))))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_2] [i_7]) ? (((/* implicit */int) arr_20 [i_1])) : (((/* implicit */int) ((unsigned short) (unsigned short)49156)))))) : (arr_17 [i_1] [i_1] [i_1] [i_1] [(_Bool)1])));
                var_25 = ((/* implicit */unsigned short) var_7);
            }
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [9LL] |= ((/* implicit */int) arr_17 [i_1] [i_8] [i_9] [i_1] [0U]);
                            var_26 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_3)))));
                            arr_36 [i_1] [i_1] [5U] [i_1] [i_11] [(unsigned char)1] [i_1] = ((/* implicit */unsigned short) ((var_7) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) var_6);
            var_28 = ((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_8] [i_8]);
        }
        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_1] [(unsigned short)7] [i_1] [i_1] [i_1] [14])) : (((/* implicit */int) arr_16 [i_1] [(unsigned short)1] [i_1] [i_1] [12LL] [i_1]))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))));
    }
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_8))))))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_1))))))));
        var_31 = ((/* implicit */long long int) arr_30 [(short)1]);
        arr_39 [i_12] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((short) var_12))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12] [i_12] [i_12]))) : (arr_30 [i_12]))), (((/* implicit */unsigned int) arr_29 [i_12])))))))));
    }
    var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11)))));
}
