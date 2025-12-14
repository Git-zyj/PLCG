/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193127
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_12)))), (((((var_1) / (((/* implicit */unsigned int) -924789617)))) + (((/* implicit */unsigned int) var_14)))))))));
                    var_20 = ((/* implicit */int) arr_2 [i_1]);
                    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (max((var_16), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_15)), (arr_2 [i_1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 966329958U)) ? (((/* implicit */int) arr_8 [i_0] [(unsigned char)18] [i_0])) : (((/* implicit */int) arr_8 [i_3] [i_1] [i_0]))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1]))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((966329958U) > (((/* implicit */unsigned int) 1044480)))))) + (15953027620909836077ULL)));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_2 - 1] [i_1]), (arr_4 [i_1] [i_2 - 1] [i_1])))) ? (2493716452799715540ULL) : (((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) (_Bool)0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) + (var_6)))))));
                        var_27 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((int) 966329958U))) + (min((((/* implicit */unsigned int) var_9)), (var_1))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) (~(var_9)));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 13503350877263109067ULL)) ? (((/* implicit */long long int) 336551454)) : ((-9223372036854775807LL - 1LL))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (arr_17 [i_1] [i_2 - 1] [i_1] [18LL])));
                        var_31 = var_10;
                        var_32 = ((/* implicit */_Bool) arr_13 [i_6] [9] [i_0]);
                    }
                }
            } 
        } 
    }
    for (int i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_33 = max((var_14), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (496)))) ? ((~(var_9))) : (var_4))));
                        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_7 - 3])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (181434337) : (((/* implicit */int) (unsigned short)10718))))), (-5482155024625081338LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) min((-322667114), (((/* implicit */int) (_Bool)1))))) ^ (min((((/* implicit */unsigned int) var_5)), (966329958U))))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */int) ((15953027620909836069ULL) & (((/* implicit */unsigned long long int) -5482155024625081336LL))));
        var_36 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) max((var_14), (((/* implicit */int) (unsigned char)127))))) ? (min(((-2147483647 - 1)), (((/* implicit */int) arr_2 [(unsigned char)14])))) : (((var_17) / (var_13))))), (((/* implicit */int) var_15))));
        var_37 = ((int) var_3);
        var_38 &= ((/* implicit */int) ((unsigned char) max((arr_2 [4]), (((/* implicit */unsigned char) ((8123848350212162935LL) > (((/* implicit */long long int) 2121873033))))))));
    }
    var_39 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) ((var_3) + (var_2)))), (max((((/* implicit */unsigned int) var_3)), (var_7)))))));
}
