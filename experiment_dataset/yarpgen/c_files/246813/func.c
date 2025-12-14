/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246813
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~((+(11750590269029594734ULL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 &= ((/* implicit */long long int) var_10);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [12ULL] [i_0])))))));
                }
            } 
        } 
        var_22 = ((arr_6 [i_0] [i_0]) | (min((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_8))))), (var_16))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0 + 2]) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) + ((~(((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((var_4) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (short)63)))))));
                            var_26 -= ((/* implicit */unsigned int) arr_21 [(_Bool)1] [i_4] [i_7] [i_6] [i_7] [i_7] [i_6 + 1]);
                            arr_22 [i_3] [i_6 - 2] [i_5] [i_4] [4LL] [i_3] = ((unsigned long long int) var_6);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) -599639331);
        }
        for (short i_8 = 3; i_8 < 10; i_8 += 3) 
        {
            var_28 = ((((/* implicit */int) var_7)) % (((/* implicit */int) var_8)));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (0ULL)));
        }
        var_30 *= ((/* implicit */unsigned long long int) ((short) var_0));
        var_31 = ((/* implicit */int) var_0);
        var_32 = ((/* implicit */int) ((var_2) ^ (((/* implicit */unsigned long long int) 419486631U))));
        var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_24 [i_3 + 1])) : (((/* implicit */int) arr_24 [i_3 + 1]))));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_9] [i_9] [2] [i_9])) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_12 [(signed char)6])))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        var_35 &= ((/* implicit */long long int) max((((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_18))))))))), (max((((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)12)))), (((/* implicit */int) ((var_16) < (((/* implicit */int) var_1)))))))));
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_6 [i_9] [i_9]) != (arr_6 [i_9] [i_9])))) ^ (((/* implicit */int) var_3))));
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
    {
        var_37 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_26 [i_10])) ? (var_17) : (((/* implicit */long long int) arr_26 [i_10]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (int i_12 = 3; i_12 < 8; i_12 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        var_38 |= ((/* implicit */unsigned short) ((((arr_26 [i_12 - 2]) <= (arr_29 [i_10] [i_12 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_16))))))) : (((int) ((((/* implicit */_Bool) 3154249208U)) ? (-1LL) : (((/* implicit */long long int) 252U)))))));
                        var_39 -= ((/* implicit */_Bool) (((((+(var_19))) > ((~(((/* implicit */int) (_Bool)1)))))) ? (arr_11 [(unsigned short)10] [(_Bool)1]) : ((~(min((arr_25 [i_13] [i_11]), (((/* implicit */unsigned long long int) arr_10 [i_10] [i_11] [i_11]))))))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((((arr_13 [i_10] [i_11] [9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned long long int) var_16)))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 4611684918915760128LL)) && (((/* implicit */_Bool) var_15)))))))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_41 -= ((/* implicit */_Bool) var_16);
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (+(arr_6 [i_10] [14U]))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        arr_41 [i_10] [i_11] [i_11] [i_12 + 2] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) != (arr_18 [i_11]))))));
                        arr_42 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (0ULL)));
                    }
                    var_43 *= ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? (var_14) : (((/* implicit */long long int) ((var_18) ? (1326209792) : (var_19))))))) ? (((((/* implicit */unsigned long long int) var_0)) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4503599593816064LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)25391))))) : (((((/* implicit */_Bool) var_16)) ? (-4503599593816065LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */int) var_18)) == (((/* implicit */int) (_Bool)1)))))));
}
