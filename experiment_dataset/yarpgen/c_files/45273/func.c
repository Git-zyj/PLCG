/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45273
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
    var_20 = ((/* implicit */unsigned int) ((var_18) ? (((/* implicit */unsigned long long int) (+(((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4)))))) : (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))))));
    var_21 ^= ((/* implicit */unsigned char) (-((-(var_19)))));
    var_22 &= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [8U] [i_2 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2] [i_2 - 1])) * (((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) && (((/* implicit */_Bool) var_0))));
                            var_23 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [(short)1] [i_0 - 1])), (((4575657221408423936ULL) >> (((((/* implicit */int) arr_10 [i_3] [(signed char)6] [i_1 + 1] [i_0])) + (23))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)16)) > ((+(((/* implicit */int) (signed char)39)))))))) != (min((((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                    arr_16 [0U] [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [2ULL] [i_0] [i_1 - 3] [i_4])) ? (var_9) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]))));
                }
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)215)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))));
                    var_27 |= ((_Bool) ((((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [(unsigned char)7] [(unsigned char)7])) ? (((/* implicit */int) (short)22860)) : (((/* implicit */int) arr_1 [1U])))) - (22860)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1])) ? (1315720684) : (((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [0U] [0U])) : (((/* implicit */int) (unsigned char)25)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_5)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_0]))))), (var_10))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_5] [i_1] [i_5] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_8 [i_0 - 1])))) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 2])) : (((((((/* implicit */int) arr_9 [i_0] [i_0])) + (2147483647))) >> (((arr_8 [i_1 + 1]) + (5255771731925649845LL))))))), (((/* implicit */int) (short)31))));
                        var_30 = ((/* implicit */signed char) ((var_19) / (var_13)));
                        arr_26 [i_5] = ((/* implicit */short) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_1 [i_0 + 1]))));
                        arr_27 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((min(((+(var_1))), (((/* implicit */unsigned int) ((short) arr_21 [i_0] [(_Bool)1] [i_1] [i_0]))))) ^ ((((!(((/* implicit */_Bool) (short)32765)))) ? (min((2U), (((/* implicit */unsigned int) (signed char)12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                        var_31 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)7] [i_0]))) ^ (var_0)))) ? (721848960U) : (((8U) << (((arr_18 [i_7] [i_7 - 2] [i_5] [7U]) - (3726716568918920375LL)))))))) > (arr_18 [i_0 + 2] [i_0 + 2] [i_0] [i_0]));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((arr_19 [i_1] [i_1] [i_1 - 1] [i_1 - 3]) == (arr_19 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1 - 1]))) ? (((unsigned int) arr_24 [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                    var_33 = ((/* implicit */signed char) 3048413474U);
                }
                arr_28 [i_0] [(signed char)6] = ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0 + 1]))) ? ((~(min((((/* implicit */unsigned long long int) arr_4 [4LL] [4LL] [i_1 - 3])), (9007199254740480ULL))))) : (((/* implicit */unsigned long long int) -32978110)));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_34 [i_0] [1U] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 1])))) + (2147483647))) << (((((unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_14 [(unsigned char)4] [(_Bool)1] [(unsigned char)4] [3U])) - (5206)))))) - (511ULL)))));
                            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) arr_31 [i_9 + 3] [i_9 + 3] [i_9 + 1] [4U]))))) != (((var_14) >> (((/* implicit */int) (_Bool)1))))));
                            arr_35 [i_9] [i_9 - 1] [i_9 - 1] [i_8] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -8397825949997816327LL)) ? (((/* implicit */int) min(((short)8160), (((/* implicit */short) arr_22 [14LL] [i_1 - 2] [i_9] [i_9 + 1]))))) : (((/* implicit */int) var_16))))) / (((((((/* implicit */_Bool) (signed char)32)) ? (var_9) : (-4682041790249748931LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_8] [(short)9])))))))));
                            var_35 = ((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0 + 1] [3ULL] [i_8] [i_9]);
                            arr_36 [i_8] [i_8] = ((/* implicit */short) 721848954U);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)-21564)), (16383LL)));
                    arr_46 [i_10] [i_11] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_41 [(signed char)11] [i_10] [i_10 + 1])) : (((/* implicit */int) arr_41 [i_10 + 1] [i_10 + 1] [i_10 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [(_Bool)0] [i_10 + 1] [i_10 + 1])) && (((/* implicit */_Bool) arr_41 [i_10 + 1] [i_10] [i_10 + 1])))))) : (((((/* implicit */_Bool) (signed char)111)) ? (arr_45 [i_10] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10] [i_10] [i_10 + 1])))))));
                }
            } 
        } 
    } 
}
