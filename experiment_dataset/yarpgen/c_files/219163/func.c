/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219163
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
    var_15 *= ((/* implicit */unsigned int) (+(584398184)));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), ((~((+(var_4)))))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : (var_9)))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))))))), (((long long int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (_Bool)1);
                        var_21 = ((/* implicit */unsigned long long int) min(((~(4063232U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 - 2])) ^ (((/* implicit */int) var_3)))))));
                        var_22 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_3]))))));
                    }
                } 
            } 
            var_23 += ((/* implicit */signed char) ((((/* implicit */int) min((((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) var_7)))), (((_Bool) arr_1 [i_1]))))) == (((/* implicit */int) min((arr_2 [i_1 - 1] [i_1]), (var_6))))));
            var_24 &= var_2;
        }
        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_4] [i_4]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? ((+(arr_6 [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (var_1)))), (var_8)))));
            var_26 -= ((/* implicit */unsigned long long int) var_7);
        }
        var_27 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)0]))) - (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5] [(signed char)8]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)231))))) : (((((/* implicit */_Bool) (signed char)80)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))))));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [(signed char)18]))) : (min(((-9223372036854775807LL - 1LL)), (17179869183LL)))))))));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 21; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    {
                        var_30 -= ((/* implicit */unsigned char) (+((+(arr_16 [i_8])))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((long long int) arr_18 [i_6 - 2] [i_6 - 2] [i_5]))));
                        var_32 = ((/* implicit */unsigned char) (signed char)-1);
                    }
                } 
            } 
        } 
    }
}
