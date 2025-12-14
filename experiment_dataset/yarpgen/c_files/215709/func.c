/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215709
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3829498774U), (((/* implicit */unsigned int) (short)-19860))))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0] [9U]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)19859)) + (((/* implicit */int) (unsigned char)112))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) 74625043U))), ((~(74625052U)))))), (max((-6177406779652645902LL), (1562150907698462133LL)))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((arr_3 [i_0 + 1] [i_1 + 3] [(unsigned char)3]), (((/* implicit */unsigned short) arr_2 [i_1 - 2]))));
                        arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [(unsigned char)5] [i_0 - 1] = ((/* implicit */unsigned int) var_13);
                        arr_15 [i_0] [i_4] &= ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2 - 3] [i_4]);
                        var_19 += ((/* implicit */unsigned short) min((((/* implicit */long long int) -2147483634)), ((~(((((/* implicit */long long int) 3829498763U)) + (var_0)))))));
                        arr_16 [i_4] [i_4] [i_2 + 1] [(unsigned char)8] &= ((/* implicit */long long int) (+((+(arr_11 [i_0] [i_4] [i_1 + 3] [i_1 + 2])))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) 3354652909645850161ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12136)) ? (((3829498751U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))));
                    arr_25 [i_5] [i_6] = ((/* implicit */unsigned short) min((((var_7) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_7])) ? (3829498761U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */long long int) 13U)) % (-2517835352515109962LL)))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (min((4220342268U), (((/* implicit */unsigned int) (signed char)42))))));
                    arr_26 [i_5] [(short)18] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(946442999)))) % (465468521U)))) ? (min((((/* implicit */unsigned long long int) var_0)), (min((arr_20 [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (3724080546U)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) max(((~(max((((/* implicit */long long int) var_13)), (-1562150907698462119LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2294145449034158814LL)) ? (((/* implicit */long long int) var_5)) : (-1562150907698462134LL)))))))));
}
