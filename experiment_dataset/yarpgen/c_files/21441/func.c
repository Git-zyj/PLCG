/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21441
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
    var_16 = ((/* implicit */signed char) min((var_16), ((signed char)4)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((((/* implicit */_Bool) ((unsigned int) (signed char)-4))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) <= (arr_0 [i_0])))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2]))) <= (arr_6 [i_1 + 2] [i_1 + 2]))))));
            var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((unsigned int) arr_7 [i_1])) > (((/* implicit */unsigned int) arr_4 [i_1 + 1]))))), ((~(((/* implicit */int) (signed char)4))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((arr_4 [i_2]), (((/* implicit */int) arr_5 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2])))))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((((unsigned long long int) arr_7 [i_1 - 1])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3])))))));
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) arr_7 [i_3]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)50164))))))))));
            var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-8)))), (min((arr_4 [i_1 + 2]), (arr_4 [i_1 - 1])))));
            var_22 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-4))))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            arr_15 [i_1 + 2] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_1]))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 1])) % (((/* implicit */int) arr_7 [i_1 + 1]))))) ? ((((!(((/* implicit */_Bool) arr_7 [i_1 + 2])))) ? (((/* implicit */int) arr_9 [i_1 + 2])) : (((/* implicit */int) (signed char)-4)))) : ((+(((/* implicit */int) arr_7 [i_1 + 2])))))))));
            arr_16 [i_1] [(unsigned char)16] [(_Bool)1] = ((/* implicit */unsigned char) arr_12 [i_1 - 1] [i_4] [i_4]);
        }
        for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            arr_20 [i_1] [i_5] [i_5] = ((/* implicit */_Bool) -740045402);
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1 - 1]))));
            var_25 = ((/* implicit */unsigned short) 1520176971U);
            var_26 = ((/* implicit */int) arr_10 [i_1] [i_5] [i_5 + 1]);
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_5 - 2]), (arr_9 [i_1 - 1])))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_1 + 2])), (arr_6 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((-9223372036854775807LL), (((/* implicit */long long int) -740045402)))))));
        }
        var_28 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2]))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_29 [i_1] [i_6] [i_7] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_8 + 1])) && (((/* implicit */_Bool) min(((unsigned short)58951), (((/* implicit */unsigned short) arr_5 [i_8 + 1])))))));
                        var_29 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((127350891U), (((/* implicit */unsigned int) arr_5 [i_7]))))) ? (((/* implicit */int) arr_28 [i_1] [i_7] [(signed char)13] [i_8 + 1])) : (arr_17 [i_1] [i_1] [i_1])))));
                        arr_30 [i_1] [i_6] [(unsigned char)3] [i_8] [i_8] [i_8 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_6] [i_1] [i_8])) ? (arr_17 [i_1 - 1] [i_6] [i_7]) : (arr_22 [i_6] [i_8 + 1])))), (min((arr_21 [i_1] [i_8 + 1] [i_7]), (((/* implicit */unsigned long long int) 4000931193U))))))) ? ((-(((((/* implicit */_Bool) arr_8 [2U] [2U])) ? (11420250980292342026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_7] [i_8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-16171))))))))))));
                        var_30 -= ((/* implicit */unsigned int) arr_12 [i_8] [(unsigned char)22] [i_8]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_9] [i_9])))) & (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (arr_21 [i_9] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(_Bool)1])))))));
                    arr_38 [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-4))));
                }
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((min((arr_17 [i_12] [i_12] [i_12]), (((/* implicit */int) ((((/* implicit */_Bool) (short)16170)) || (((/* implicit */_Bool) arr_34 [i_12]))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)176)) ? (-5060546859126006282LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16199))))) == (min((((/* implicit */long long int) arr_8 [13ULL] [i_12])), ((-9223372036854775807LL - 1LL))))))))))));
        var_33 = ((/* implicit */int) ((((unsigned int) ((int) 2361797421U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12]))))))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_34 [i_12]), (((/* implicit */unsigned char) arr_10 [i_12] [(signed char)20] [i_12])))))))) != (((/* implicit */int) ((((/* implicit */_Bool) 378744061021706342ULL)) || (((/* implicit */_Bool) (unsigned char)133)))))));
        var_35 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_5 [i_12])))) == (((/* implicit */int) (short)-16193))));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967282U)), (min((2335486278322457495ULL), (var_6)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)6585)) ? (var_2) : (((/* implicit */int) var_7)))))) : (((unsigned long long int) (+(var_15))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_45 [i_13] = arr_14 [i_13];
        arr_46 [i_13] = ((/* implicit */unsigned int) ((signed char) arr_21 [i_13] [i_13] [i_13]));
    }
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_37 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775784LL))));
        arr_50 [i_14] = ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_19 [i_14])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15267))) : (min((((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_14])) : (arr_43 [i_14] [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned short)58951)) : (arr_22 [i_14] [i_14])))))));
    }
    for (unsigned int i_15 = 2; i_15 < 21; i_15 += 4) 
    {
        arr_53 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)6603))))) - (((3135572520357558965LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_54 [0] [0] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_15 - 2]))))), (min((min((((/* implicit */unsigned short) arr_10 [i_15] [i_15] [i_15])), (arr_48 [i_15]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)6584)))))))));
    }
}
