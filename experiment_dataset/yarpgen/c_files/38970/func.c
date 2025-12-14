/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38970
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
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) 16744448U)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18))))), (var_11)))));
    var_20 *= ((min((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_5)))))) >= (((/* implicit */int) var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4609)) >= (((/* implicit */int) (unsigned char)254))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2])) : (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0 - 1] [i_0 + 1]) - (1152805246)))))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) var_14);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] = ((/* implicit */_Bool) (short)25908);
                        arr_16 [i_4] [8] [8] [i_1] |= ((/* implicit */short) (-(((unsigned int) arr_7 [(unsigned short)8] [(signed char)10] [0ULL]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20590)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (-7488598383961205815LL))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((878556807) | (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_14 [i_1 + 2] [i_1 + 1] [i_1] [(short)10]))) / (((/* implicit */long long int) (-(((/* implicit */int) min((arr_11 [i_1 - 1] [i_1]), (((/* implicit */short) (signed char)73))))))))));
    }
    for (int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (signed char i_8 = 2; i_8 < 8; i_8 += 3) 
                {
                    for (short i_9 = 4; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned long long int) ((arr_28 [i_5] [i_6] [i_5 - 1] [i_9 + 2] [i_9]) <= (arr_28 [(signed char)5] [i_9] [i_5 + 2] [i_9 + 2] [(unsigned short)3])));
                            arr_29 [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30726)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [(signed char)2] [i_7]))) : (var_11))))));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [i_6] [i_5 + 1] [i_8 + 1]))));
                            arr_30 [(short)9] [(unsigned char)7] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) arr_0 [i_6]);
                        }
                    } 
                } 
            } 
            var_28 -= var_0;
        }
        arr_31 [i_5] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4239840831U), (((/* implicit */unsigned int) -878556808))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_5] [i_5 + 2] [i_5])) <= (((/* implicit */int) arr_8 [1U]))))) : (((/* implicit */int) min(((unsigned char)142), (((/* implicit */unsigned char) (_Bool)1)))))))) * ((-(2582145582U))));
        arr_32 [i_5] = ((/* implicit */unsigned short) var_18);
    }
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (unsigned char)113)), (2157968083967381550ULL))))))));
                var_30 = (~((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) arr_35 [(signed char)0] [0])))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) 1367145782);
}
