/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214587
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
    var_18 = ((/* implicit */_Bool) (signed char)38);
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-17))))) < (13194139533312ULL)));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1809015993658284046LL) << (((((/* implicit */int) var_7)) - (135)))))) ? (((unsigned long long int) (unsigned char)79)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
        var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446730879570018286ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            var_25 ^= ((/* implicit */unsigned long long int) (unsigned char)143);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~((~(var_3))))))));
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_27 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(var_5)))))) | (max((((unsigned int) arr_9 [i_4] [i_3] [i_1])), (((/* implicit */unsigned int) (unsigned char)255))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    var_28 = ((/* implicit */int) 9946965997577909892ULL);
                    arr_15 [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((arr_7 [i_1]) ? (((2036002571) - (((/* implicit */int) arr_7 [i_1])))) : (((((/* implicit */_Bool) (short)30478)) ? (((/* implicit */int) (unsigned short)57761)) : (((/* implicit */int) arr_10 [i_1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1])) | (((/* implicit */int) arr_10 [i_6]))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_4])) : (var_8))))))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) (+(9164175921544589288ULL)));
                        arr_24 [i_1] [i_1] [(unsigned short)6] [i_1] [7ULL] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)113)) || (((/* implicit */_Bool) arr_2 [i_1] [i_3])))) && (((var_12) && (((/* implicit */_Bool) var_15))))));
                    }
                    var_32 = ((/* implicit */unsigned int) var_11);
                    var_33 -= ((/* implicit */unsigned char) (+(((unsigned long long int) arr_2 [i_6] [i_6]))));
                }
            }
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3] [i_1] [i_1] [i_1])) >= (((/* implicit */int) min((arr_13 [(unsigned char)7] [i_3] [i_3] [(signed char)11]), (arr_13 [i_1] [i_1] [i_3] [i_3]))))));
            arr_25 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) var_6));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            arr_29 [i_1] [i_1] = ((/* implicit */unsigned int) min((((1659352503845071962ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))))), (((/* implicit */unsigned long long int) 1321364231))));
            arr_30 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((-450493514), (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned char)79))))) && (((/* implicit */_Bool) 9282568152164962328ULL))));
            arr_31 [i_9 + 1] [8ULL] [4U] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_27 [i_1] [1ULL] [1ULL]))) || (((/* implicit */_Bool) arr_21 [(unsigned char)9] [i_9 + 1]))))) | (((/* implicit */int) arr_28 [i_1] [i_9] [4U]))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) (signed char)-75))));
            var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
            arr_35 [i_1] [i_1] = ((/* implicit */_Bool) min(((signed char)-65), ((signed char)10)));
        }
        arr_36 [(short)3] [(short)3] = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (864691128455135232ULL)))) >> ((((~(((/* implicit */int) var_14)))) - (30010)))));
        arr_37 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_1] [i_1])), ((-(((/* implicit */int) (signed char)-11))))));
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 4; i_14 < 9; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_14 [i_11] [i_12] [i_13] [i_14 - 3])))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (arr_14 [i_11] [i_12 + 2] [i_13 - 1] [i_15])))) - (152)))));
                                var_38 *= ((/* implicit */unsigned char) ((((unsigned long long int) arr_49 [6ULL] [(_Bool)1] [i_14 - 2] [i_14 + 1] [(unsigned char)8] [i_14])) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11])))));
                                var_39 = ((/* implicit */short) max((arr_39 [i_11] [i_11]), (((/* implicit */unsigned long long int) (~(((int) 13194139533330ULL)))))));
                                var_40 &= ((/* implicit */unsigned char) (signed char)57);
                                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_33 [i_13 - 1] [i_12 + 2] [i_13]), (((/* implicit */int) arr_16 [i_13 - 1] [i_13] [(signed char)7] [i_14] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_13 - 1] [i_15] [i_13] [(unsigned char)6] [i_15])) + (arr_33 [i_13 - 1] [i_12 - 1] [i_12 + 1])))) : (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57651))) : (3437082224374189550ULL)))));
                            }
                        } 
                    } 
                    var_42 |= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)53)))) ^ (((int) (signed char)-1))));
                    var_43 *= ((/* implicit */signed char) (((-(-312557515))) ^ (((/* implicit */int) (unsigned char)56))));
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) max((var_44), ((unsigned char)1)));
        var_45 = ((/* implicit */unsigned char) var_10);
        arr_51 [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6)))))))), (((unsigned int) var_9))));
        var_46 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) 4611685880988434432ULL))), (arr_8 [i_11] [i_11] [i_11])))), (min((((/* implicit */int) arr_45 [i_11])), ((-(((/* implicit */int) var_14))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)61375)))))));
        var_48 &= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)6), ((unsigned char)38)))) / ((-(((/* implicit */int) ((unsigned char) -1886141407458173997LL)))))));
    }
}
