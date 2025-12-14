/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234242
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) min((313169399U), (min((((((/* implicit */_Bool) (signed char)31)) ? (1041667133U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31177))))), (((/* implicit */unsigned int) (short)-31177))))));
        var_16 ^= ((((/* implicit */int) arr_3 [i_0 - 1])) >= (((/* implicit */int) min((((/* implicit */short) arr_0 [(signed char)7])), (((short) 3253300163U))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_14 [i_0 + 2] [i_1] [(unsigned short)8] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_3]);
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((max((((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)31164))))), (min((var_2), (((/* implicit */short) var_3)))))), (arr_1 [i_2]))))));
                        }
                        var_18 -= ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) arr_3 [i_2])))), (arr_10 [i_0 + 3] [i_1] [i_1 - 4] [i_3]))) > (arr_2 [(unsigned short)12] [i_1])));
                        arr_15 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */short) arr_0 [i_2]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) arr_3 [i_0]))))), (min((((/* implicit */long long int) (short)31164)), (-8807823224937067879LL)))))))))));
                        arr_16 [i_1] [i_1 - 3] [i_0 + 3] [i_3] = ((/* implicit */_Bool) min(((-(arr_5 [i_0] [i_1 - 2]))), (((/* implicit */unsigned int) ((_Bool) 16218628198284180074ULL)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        arr_26 [i_8] [i_7] [i_6] [i_5] = ((/* implicit */short) min((min((((/* implicit */long long int) (_Bool)0)), (-1665131590999642449LL))), (arr_25 [(unsigned short)12] [9U])));
                        arr_27 [i_8] [i_7] [i_7] [i_7] [i_5] [i_5] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_6 - 1] [i_6 - 3])), (max((-877648042742851050LL), (((/* implicit */long long int) (signed char)-80))))))));
                        var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_6)), (arr_11 [i_6] [i_6 + 1] [6ULL] [i_6 - 3] [i_6 - 3] [i_8]))), (min((arr_11 [i_6] [(unsigned char)5] [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3]), (((/* implicit */unsigned long long int) (short)31177))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_0), (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) >= (min((((/* implicit */long long int) arr_22 [i_5] [i_5])), (arr_25 [i_5] [i_5])))))));
            var_22 = ((/* implicit */signed char) min((12518325943198987198ULL), (((/* implicit */unsigned long long int) 3253300163U))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 2; i_10 < 12; i_10 += 3) /* same iter space */
            {
                arr_32 [i_5] [i_9] [i_10 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) max((((unsigned int) -1337924174)), (((/* implicit */unsigned int) arr_20 [i_5] [i_5])))))));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) arr_12 [i_5] [i_9] [i_10] [i_11] [i_11 - 1] [(_Bool)1] [i_12])), (arr_25 [9] [9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) ((_Bool) (short)-15701))), (min((arr_6 [i_10 + 1]), (((/* implicit */unsigned int) (short)-20220))))))));
                            arr_39 [i_5] [i_9] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_35 [i_11 + 2] [i_11 + 3] [i_10 - 2] [i_9 + 2] [i_9 - 1])) : (((/* implicit */int) arr_35 [i_11 + 2] [i_10 + 1] [i_10 + 1] [i_9 + 2] [i_9 + 1])))) >= (((/* implicit */int) max((arr_37 [i_11 - 1] [i_9] [0] [i_11] [i_9]), (arr_37 [i_11 + 2] [i_9 + 1] [i_11 + 2] [i_10 + 1] [i_9]))))));
                            var_24 = ((/* implicit */unsigned short) arr_35 [i_12] [i_11 + 1] [i_5] [i_5] [i_5]);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((((/* implicit */int) arr_35 [i_9 + 1] [12LL] [i_9] [i_9 + 2] [i_9 + 1])) >> (((/* implicit */int) arr_35 [1U] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1])))), (((arr_35 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1]) ? (((/* implicit */int) arr_35 [i_9 + 2] [i_9] [i_9] [i_9 + 1] [i_9 + 2])) : (((/* implicit */int) arr_35 [i_9] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 1])))))))));
                            var_26 -= ((/* implicit */signed char) ((unsigned int) ((short) (unsigned char)252)));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) /* same iter space */
            {
                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-80)), ((short)30151)))) ? (min((arr_10 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1]), (var_14))) : (1216452360)));
                var_28 = ((/* implicit */int) (short)13312);
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((_Bool) (+(((/* implicit */int) arr_36 [i_15] [i_14] [i_14] [i_13] [i_9] [i_5] [i_5]))))) ? (3087932906U) : (((/* implicit */unsigned int) (+(min((var_14), (((/* implicit */int) var_2))))))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((int) var_11)), (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_5] [i_13 - 1] [i_14] [i_15])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */int) arr_31 [i_5] [i_9]))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20))) : (((((/* implicit */_Bool) 31LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30169))) : (arr_41 [i_9] [i_13] [i_14] [i_15]))))), (((/* implicit */unsigned long long int) var_12)))))));
                            arr_47 [i_9] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = (signed char)36;
                        }
                    } 
                } 
                var_32 &= arr_25 [i_5] [i_5];
            }
            for (unsigned char i_16 = 2; i_16 < 12; i_16 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */int) var_2);
                arr_50 [i_9] [5LL] [i_9] [i_16] = max((min((var_5), (arr_6 [i_9 - 1]))), (((/* implicit */unsigned int) arr_20 [i_5] [i_16 + 1])));
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min(((unsigned char)0), (var_7)))), (((arr_41 [i_5] [i_9] [i_16] [i_16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((var_6), (((/* implicit */int) var_7)))) : (703358301)))))))));
                arr_51 [(signed char)10] [i_9] [i_16] |= ((/* implicit */int) arr_37 [i_5] [i_9] [i_9] [(short)0] [(signed char)8]);
            }
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_35 += ((int) (+(max((0ULL), (((/* implicit */unsigned long long int) -768998340))))));
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (+(((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) * (((arr_18 [i_17]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (5162399567198777707LL))))))))));
        arr_54 [i_17] |= ((((unsigned long long int) ((short) (unsigned char)171))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(unsigned char)0]))));
    }
    var_37 = ((/* implicit */short) var_11);
    var_38 = ((/* implicit */unsigned char) ((unsigned short) (-(((((/* implicit */_Bool) 31LL)) ? (var_6) : (((/* implicit */int) (short)8)))))));
}
