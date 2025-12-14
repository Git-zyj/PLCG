/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33720
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) var_6)))))))) : (((/* implicit */int) var_10))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(signed char)19])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (arr_1 [(unsigned char)9])))));
    }
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))));
        var_22 *= ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */_Bool) (short)21811)) ? (arr_3 [15U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */unsigned int) arr_2 [i_1]))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_23 += ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_0 [i_2 + 1]))))));
            var_24 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((signed char) arr_3 [i_2] [(short)11]))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_1 [(unsigned char)18]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21799)) ? (((/* implicit */int) (short)-21802)) : (((/* implicit */int) (short)21792)))))));
        }
    }
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_11 [i_3] = (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)219)))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_26 += ((/* implicit */unsigned char) arr_0 [i_4]);
        var_27 = arr_6 [i_4] [i_4];
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_28 += ((/* implicit */unsigned char) var_0);
        var_29 ^= ((/* implicit */signed char) (unsigned char)246);
    }
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3178016404U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_6]))))) ? (arr_3 [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [15U] [i_8]))))), (((/* implicit */long long int) ((short) arr_21 [i_6] [i_7 + 2]))))))));
                    var_31 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) max((arr_14 [i_7 + 3] [(unsigned char)2]), (((/* implicit */unsigned short) arr_7 [i_7])))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_32 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)216))));
                        arr_30 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-34)))), (((/* implicit */int) arr_13 [(_Bool)1] [i_6])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)179)), ((short)12885)))) : (((/* implicit */int) (!(arr_22 [i_6] [i_9]))))))) || (((/* implicit */_Bool) ((signed char) arr_27 [i_7 + 2] [i_7 + 3] [i_7 + 1] [i_7 + 1])))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)12606)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        var_36 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_7 - 1]))));
                        arr_33 [i_10] [i_8] = ((/* implicit */int) arr_29 [i_6] [i_8] [i_6] [i_6]);
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) ((1569904454357225932ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))))))))));
                    }
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_8]))))), (((3004157507U) << (((((/* implicit */int) (unsigned char)135)) - (124)))))))), (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_6] [i_6]))) : (((unsigned long long int) var_0)))))))));
                }
            } 
        } 
    } 
}
