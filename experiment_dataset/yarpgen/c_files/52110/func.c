/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52110
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
    var_19 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))) : (var_10)))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22725))) : (var_6)))))));
    var_20 = ((/* implicit */long long int) (unsigned short)59537);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_14))) : (arr_1 [i_0]))) - (((unsigned long long int) ((((/* implicit */_Bool) 1801524783U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))) : (var_10)))));
        arr_4 [i_0] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 0ULL))) ? ((-((+(var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [9ULL]))))))))));
        var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54609))) < ((+((~(var_11)))))));
        var_22 = ((/* implicit */unsigned long long int) (signed char)106);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((max(((-(var_14))), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((4058930666U), (((/* implicit */unsigned int) (signed char)-104))))), (-3499852990473577234LL))))))));
        arr_7 [i_1] = min(((-(((unsigned int) -3499852990473577222LL)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 352671547212881094LL)) - (arr_6 [i_1])))) ? (((unsigned int) (signed char)91)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [8ULL])), (arr_2 [0]))))))));
        var_24 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned short)21525)) : (((/* implicit */int) (unsigned char)255)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_11 [(signed char)0] [i_2] = ((/* implicit */unsigned char) -5424096887864896600LL);
        arr_12 [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [9U]));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 3] [12LL]))) / ((-(arr_13 [i_3 - 3]))))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_3 - 2] [10LL]);
    }
    for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    var_26 *= ((/* implicit */unsigned long long int) arr_14 [i_4] [12LL]);
                    var_27 -= 7411556269560245886ULL;
                    arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((17126210093160476380ULL) & (arr_16 [i_4] [i_4 - 4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)44474)), (arr_18 [i_6] [i_6]))) == ((-(5424096887864896597LL))))))) : (arr_16 [i_4 - 4] [i_4 - 4])));
                    arr_24 [14] [i_5] [(unsigned short)3] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_20 [i_4 + 1])))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) arr_14 [i_4 + 2] [i_4 - 2]))))) ? (((/* implicit */int) arr_19 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))));
    }
    var_29 = ((/* implicit */unsigned int) var_18);
}
