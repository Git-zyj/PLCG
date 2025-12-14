/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218752
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) | (var_12)))) : (arr_1 [i_0 - 2] [(_Bool)1])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) var_9);
                        var_17 = ((/* implicit */int) var_6);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_18 &= arr_9 [i_0];
                            var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1 - 3] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)7]))))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))))) ^ (arr_9 [i_0]));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) / (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_2))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_6 [i_3 - 3] [i_3 - 3] [i_2] [i_2])))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_7))));
                        }
                    }
                } 
            } 
            var_22 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 2] [(short)13] [i_1]))) <= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (arr_10 [i_0 + 4]))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_13))));
            var_24 = ((/* implicit */short) (!(((((arr_5 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 4]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (var_14)))))))));
        }
        for (unsigned int i_5 = 4; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (var_12))) == (((/* implicit */unsigned int) ((int) var_15))))))));
            var_26 = ((/* implicit */unsigned short) arr_4 [i_0]);
        }
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_17 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_6])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6])) && (((/* implicit */_Bool) arr_14 [(unsigned short)10] [i_6])))))));
        arr_18 [i_6] = ((/* implicit */short) max((var_5), (((/* implicit */unsigned int) min((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_22 [i_6] [i_6] [i_7] = (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_6])) >= (-1271469880)))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                var_27 = ((/* implicit */long long int) var_13);
                var_28 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_7] [i_8])) ? (((/* implicit */int) arr_13 [i_6] [i_8])) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((arr_13 [i_6] [i_6]), (((/* implicit */unsigned char) var_11)))))));
                arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min(((~(((/* implicit */int) arr_4 [i_6])))), (((/* implicit */int) var_8)))) : (((/* implicit */int) var_10))));
                var_29 *= ((/* implicit */unsigned long long int) ((min((arr_9 [(unsigned short)11]), (2423121686U))) + (arr_14 [i_6] [i_6])));
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    for (short i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_26 [i_7] [i_6] [i_10 + 1] [i_9] [i_7] [i_7])))));
                            arr_31 [i_8] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_12)))) ? (((/* implicit */int) arr_4 [i_9 - 1])) : (((int) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_20 [i_6] [i_7])) < (((/* implicit */int) arr_13 [i_7] [6]))))), (var_1)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                arr_35 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_23 [i_6]);
                var_31 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_13 [i_6] [i_7]))))));
            }
        }
        for (int i_12 = 2; i_12 < 15; i_12 += 4) 
        {
            var_32 = ((/* implicit */long long int) var_5);
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
            var_34 = ((/* implicit */unsigned char) (+(((arr_37 [i_6] [i_12 - 1]) - (((/* implicit */int) var_3))))));
        }
    }
    var_35 = ((/* implicit */unsigned char) var_6);
}
