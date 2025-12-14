/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43844
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
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) var_10)) >> (((((var_17) ^ (((/* implicit */int) var_1)))) + (990894861))))), (((((/* implicit */int) var_11)) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (3951253593U))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min(((+(343713703U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) << (((var_4) + (1037765289)))))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0]), (var_5))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29880))) ^ (var_14)))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) * (0LL))) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((var_4) < (((/* implicit */int) var_2))))) >> (((((/* implicit */int) var_6)) - (30836)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)35655)) << (((((/* implicit */int) (unsigned short)29880)) - (29867))))) >> (((((/* implicit */int) var_10)) - (50148)))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_11 [i_3] [i_2] [i_2 + 1])), (arr_13 [i_2] [i_2 - 1])))) * (((/* implicit */int) arr_11 [i_3] [i_3] [i_2 - 1]))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) var_6)))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
                    arr_16 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((3633695401184406813ULL), (((/* implicit */unsigned long long int) (short)617))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_29 [i_5] [i_5] &= ((/* implicit */signed char) var_14);
                            var_23 = var_3;
                            arr_30 [i_6] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */int) ((3633695401184406812ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                    } 
                } 
            } 
            arr_31 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((14813048672525144804ULL) | (arr_21 [i_4] [i_5]))))));
            arr_32 [i_4] = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_4]);
            var_24 += ((/* implicit */unsigned int) ((arr_21 [i_5] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            arr_44 [i_10] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) << (((var_0) - (3933768283U)))));
                            arr_45 [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) (unsigned char)254);
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) - (((14813048672525144802ULL) - (((/* implicit */unsigned long long int) var_14))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((4094912906U) << (((((/* implicit */int) var_3)) - (52))))))));
                        arr_52 [i_4] [i_4] [i_9] [i_13] [i_14] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_9))));
                        var_27 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)226))));
                        var_28 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_4) + (1037765309))))) % (((/* implicit */int) var_1))));
                    }
                } 
            } 
            arr_53 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1))));
            arr_54 [i_9] [i_4] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_55 [i_4] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_6))))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)-1))))) | (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)9))))))));
    }
}
