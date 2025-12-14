/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201017
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) < (((/* implicit */int) (unsigned char)117)))))))), ((-(min((var_11), (((/* implicit */long long int) var_14))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_0] [16] [i_4 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)117))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 769721560)) : (var_11)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (var_5))))))));
                                arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 769721560))));
                                var_17 = ((/* implicit */int) (signed char)75);
                                arr_17 [(unsigned char)3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_15)))))), (max((min(((unsigned char)109), (((/* implicit */unsigned char) (signed char)120)))), (max(((unsigned char)1), ((unsigned char)147)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((((/* implicit */int) (signed char)120)) >> (((-4305141340027589775LL) + (4305141340027589792LL))))) << ((((~(((/* implicit */int) ((_Bool) var_12))))) + (19)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [3] [(signed char)0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_6] [(unsigned char)20] [(short)0] [i_6 - 1] [i_9] [i_9] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) : (10964028217071924726ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_11))))));
                                arr_34 [(unsigned char)2] [i_5] [0ULL] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (signed char)-76))));
                            }
                        } 
                    } 
                    arr_35 [i_5] [i_5] [i_5] [i_7 - 1] = ((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [i_6] [7] [i_6] [i_6] [(unsigned char)7] [i_6 - 1] [i_6])), (((unsigned short) max((0), (-1))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 13; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]), (arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]))))));
                                arr_41 [i_11 - 3] [i_5] [i_10] [i_7 - 1] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_4)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)164)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((var_4) + (min((var_4), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) var_3))));
}
