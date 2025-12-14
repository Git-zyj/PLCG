/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205447
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((min((var_14), (((/* implicit */long long int) 459076003)))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_0 [i_0])))))))) & (max((min((((/* implicit */unsigned long long int) var_12)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (var_7))))))));
        var_17 ^= ((/* implicit */_Bool) min((((unsigned long long int) -3390832472281558466LL)), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_1 [(signed char)7])))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */signed char) var_3);
            arr_4 [7] [7] [7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            arr_5 [i_0] &= arr_3 [i_0] [i_1];
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2007692966U)) > (853089531835248600ULL)));
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned long long int) min((max((var_5), (arr_3 [i_2 + 1] [i_2 + 1]))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
            arr_8 [i_0] |= ((/* implicit */signed char) var_9);
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((~(((var_6) | (14854832344071263860ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_0)) & (var_7))), ((~(((/* implicit */int) var_4))))))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [(signed char)6] |= ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_6 [5LL] [i_3] [i_3])) : (17593654541874303015ULL));
        arr_12 [(signed char)18] &= ((/* implicit */unsigned int) ((((var_7) ^ (((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) 562949953421311ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_3]))))));
        arr_13 [2ULL] [10LL] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (arr_6 [i_3] [i_3] [i_3])));
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_3])))))));
            var_23 ^= ((/* implicit */int) arr_10 [i_4]);
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_24 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-9)) ? (1006632960LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))));
            var_25 *= ((/* implicit */unsigned int) var_15);
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_5])) || (((/* implicit */_Bool) var_14))))) + (((/* implicit */int) (signed char)24))));
            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4120108817584207474ULL)) || (((/* implicit */_Bool) var_2)))))) : (arr_10 [4LL])));
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned int) 17593654541874302999ULL)))));
            /* LoopNest 2 */
            for (long long int i_7 = 4; i_7 < 19; i_7 += 3) 
            {
                for (int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((((((/* implicit */_Bool) (signed char)-30)) && ((_Bool)1))) && ((!(((/* implicit */_Bool) 17593654541874302999ULL))))))));
                        var_30 &= ((/* implicit */_Bool) (+(arr_7 [i_7] [i_6])));
                        var_31 ^= ((/* implicit */unsigned int) ((signed char) var_2));
                        var_32 &= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) var_0))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (var_15))))))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (signed char i_11 = 4; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3] [i_12 + 4] [i_12])) || (((/* implicit */_Bool) var_15))));
                            var_35 ^= ((var_12) ^ (var_12));
                            var_36 *= ((/* implicit */unsigned char) ((var_3) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-29895))) & (arr_15 [i_3] [i_9] [(unsigned char)11]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-57)) ? (var_5) : (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_15 [(signed char)11] [i_3] [i_3]))));
            arr_37 [i_3] [i_9] [0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [16ULL] [16ULL] [i_3])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_25 [(_Bool)1] [i_9] [(_Bool)1]))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        var_38 += ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
        var_39 -= ((/* implicit */int) (-(((var_14) / (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))));
    }
}
