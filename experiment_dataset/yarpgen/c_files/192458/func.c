/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192458
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
    var_15 ^= ((/* implicit */unsigned short) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_7))));
                        var_17 -= ((/* implicit */short) ((((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (short)-8083)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967295U)))) : (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [i_0])) ? (arr_2 [i_3 + 1]) : (arr_2 [i_3 - 1])))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            arr_11 [i_0] [(signed char)22] [(signed char)22] [i_0] |= (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 30U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_12 [(signed char)1] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3129856616U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            var_18 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)47217)) : (((/* implicit */int) (short)25))))) * (((/* implicit */long long int) 1165110680U))));
                            arr_13 [12U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_3 [i_0 - 2] [i_0 - 2] [i_2 - 2])))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0]);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_6))) * (((/* implicit */int) (unsigned short)7992))));
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_2 - 3] [19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 6942267404654277228LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) 0U);
                        arr_27 [(short)0] [i_7] [i_0] [i_6] [i_0] = ((/* implicit */short) (-(((int) var_8))));
                        arr_28 [1LL] [i_0] [i_0] = min((((/* implicit */unsigned int) (signed char)-123)), (619473132U));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_31 [(_Bool)1] [i_9] [i_0] = ((/* implicit */int) arr_30 [i_0 + 1] [i_0] [i_9]);
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned int) 2147483627)))));
        }
        for (signed char i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (signed char)127)))));
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((unsigned char) arr_1 [i_0])), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned char)141)))) >= (((/* implicit */int) (signed char)23)))))));
            arr_37 [i_0] [i_0] [i_10] = ((/* implicit */short) var_14);
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */int) max((var_25), (arr_0 [i_0 + 2] [i_11])));
            var_26 = ((/* implicit */signed char) min((var_26), ((signed char)-24)));
            arr_40 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)58202);
        }
    }
    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        arr_45 [(short)12] [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) << (((2147483647) - (2147483634)))));
        arr_46 [i_12] [i_12] = arr_0 [i_12] [i_12];
        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)10])) ? (((/* implicit */int) arr_4 [(short)10])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) : (918214227)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (((var_4) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((unsigned long long int) ((((/* implicit */int) (unsigned short)17788)) + (var_11))))));
        arr_47 [i_12] = ((/* implicit */short) (((~(((((/* implicit */int) (signed char)27)) + (((/* implicit */int) (short)32767)))))) | (((/* implicit */int) (signed char)-35))));
    }
}
