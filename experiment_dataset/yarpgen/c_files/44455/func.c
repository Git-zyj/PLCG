/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44455
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) arr_0 [i_0 - 1] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)47);
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) arr_4 [i_1]);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) ((883611220) / (((/* implicit */int) arr_4 [i_3]))))) ? (((((/* implicit */int) (unsigned short)65528)) / (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) (unsigned char)225)))))) : (((((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) (unsigned char)0)))) ? (((((/* implicit */_Bool) -883611220)) ? (883611220) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (unsigned short)0)))))))))));
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [i_1]))))) ? (((((((/* implicit */_Bool) -883611240)) || (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (11332871612743320497ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (signed char)26))))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_5 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) var_4);
                            var_17 = ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) arr_16 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 2])) - (((/* implicit */int) arr_15 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 2])))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_4])) != (((/* implicit */int) var_1))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) -1806489417)) && (((/* implicit */_Bool) arr_19 [i_6]))))) + (((/* implicit */int) arr_17 [i_6])))))));
        /* LoopNest 3 */
        for (signed char i_7 = 4; i_7 < 12; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_20 = (+(((/* implicit */int) (_Bool)0)));
                        arr_27 [i_7] = ((/* implicit */_Bool) (unsigned short)0);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_21 = arr_28 [i_10 + 1];
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_10])) ? (((/* implicit */int) arr_23 [i_6] [i_12] [i_10])) : (((/* implicit */int) arr_23 [i_10] [i_11] [i_10]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        var_24 = (+(((/* implicit */int) arr_33 [i_13] [i_13] [i_13] [i_13])));
        var_25 += ((/* implicit */short) var_7);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (int i_15 = 3; i_15 < 12; i_15 += 3) 
            {
                {
                    var_26 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_40 [i_13] [i_13] [i_13]), (2305843008945258496ULL)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_34 [i_15 - 1] [i_15 - 3] [i_15 - 3] [i_15]))))), (max((max((((/* implicit */unsigned long long int) arr_33 [i_13] [i_14] [i_13] [i_13])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_27 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) var_5);
    var_29 |= ((/* implicit */signed char) ((((/* implicit */int) var_5)) > ((~(((/* implicit */int) ((short) (signed char)-41)))))));
}
