/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221761
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_14))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((arr_1 [i_0] [8LL]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_1 [i_0 - 1] [(unsigned char)6]), (((/* implicit */long long int) var_13))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [15] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) : ((~(var_3))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) != (min((((unsigned long long int) (short)-32753)), (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) (unsigned short)1920)) ? (((/* implicit */int) (unsigned short)1928)) : (((/* implicit */int) (unsigned short)1928)))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1900))) < (18446744073709551610ULL)));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) ((arr_4 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (min((arr_12 [i_3] [i_2]), (var_12)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((arr_7 [i_1] [i_3] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1022))))), (((((/* implicit */int) var_2)) <= (((/* implicit */int) var_14))))))), (arr_4 [i_1])));
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */int) var_7);
        var_23 = var_3;
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(var_13))))));
                        var_25 = ((/* implicit */long long int) var_6);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~((+(((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) arr_9 [i_1] [i_6])))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            arr_28 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 262143)) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_10])) ? (((/* implicit */int) (unsigned short)63598)) : (((/* implicit */int) (_Bool)1)))))));
            var_27 = ((/* implicit */signed char) ((short) var_2));
            var_28 *= ((/* implicit */long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
            var_29 *= ((/* implicit */unsigned long long int) (~(arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_10])));
            var_30 -= ((/* implicit */unsigned long long int) ((int) var_7));
        }
        var_31 ^= ((long long int) var_9);
        var_32 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9]))) : (arr_20 [i_9])));
        arr_29 [i_9] = ((/* implicit */signed char) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9 - 1])))));
        var_33 = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_14)))));
    }
    var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 2; i_11 < 24; i_11 += 2) 
    {
        for (int i_12 = 2; i_12 < 23; i_12 += 3) 
        {
            {
                var_35 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) << (((((unsigned long long int) (unsigned short)8191)) - (8191ULL))))) << (((((((/* implicit */_Bool) arr_32 [i_12 - 2] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) - (57ULL)))));
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)63607)) ? (arr_32 [i_12 - 1] [i_11 + 1]) : (arr_32 [i_12 - 1] [i_11 - 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-2))))))))));
                arr_36 [i_12] [i_12 + 2] [i_12] = (-((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) >= (var_3)))))));
                arr_37 [i_12] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))) ? (var_5) : ((+(var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(18446744073709551615ULL)))))) : (((((/* implicit */_Bool) (~(var_12)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */int) var_2))))))))));
            }
        } 
    } 
}
