/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236433
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
    var_15 ^= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(arr_0 [i_0] [i_1])))));
            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((((arr_6 [i_0] [i_0] [i_0]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) >> ((((-(((arr_6 [i_2] [i_2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))) : (arr_0 [10] [i_0]))))) + (18LL)))));
            var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3575438035U))))) * (((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)124)), (3575438042U))) >= (max((((/* implicit */unsigned int) var_1)), (3575438025U))))))));
            var_19 = ((arr_6 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) -8827189837306247317LL)), (arr_3 [(unsigned short)6] [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))) >= (arr_0 [i_2] [i_0]))))))))) : (arr_3 [4ULL] [(short)2]));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3235)) == ((+(((/* implicit */int) (short)-3214))))));
            var_21 = ((/* implicit */long long int) ((unsigned long long int) ((int) 0ULL)));
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_22 = (((-(17001975643334270315ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) min((1178889885U), (719529262U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [(unsigned short)4] [i_6 - 1]) < (arr_0 [i_0] [i_6 - 1]))))) : (((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4 + 1] [i_7] [i_7] [i_7] [i_7] [6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 + 2]))) : (arr_11 [i_4 + 3] [i_6 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(var_3)));
                            var_25 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4 + 3] [i_5] [i_6 - 1]))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) arr_1 [i_0]);
                            var_27 = ((/* implicit */int) var_6);
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((+(-6457364306725975885LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 3] [i_0])))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_6))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) (~(arr_26 [i_0] [i_4] [i_5] [6] [i_10] [i_10])));
                            var_31 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (6543345385812033599LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18477))))))));
                        }
                        arr_28 [0] [(short)7] [i_5] = ((/* implicit */short) arr_1 [i_0]);
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */signed char) var_9);
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)18)), (719529262U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_14)))) : (var_8)))));
    var_34 = ((/* implicit */unsigned int) ((short) 2486873439U));
}
