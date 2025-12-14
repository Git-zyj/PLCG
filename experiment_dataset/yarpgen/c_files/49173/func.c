/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49173
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) var_6);
        var_13 = ((/* implicit */int) max(((signed char)-23), ((signed char)1)));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (short)8456)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-23))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) && (((/* implicit */_Bool) ((var_6) % (((1748211139U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((var_9) << (((((/* implicit */int) ((unsigned short) var_2))) - (28662))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)6))));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (signed char)23);
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_7 [i_2] [i_1]))))))) ^ (((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 + 2] [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) 978972349)) : (var_0))) + (((/* implicit */long long int) ((int) (_Bool)0)))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_19 |= ((/* implicit */_Bool) var_1);
                        arr_16 [i_1] [i_1] [i_3] = (~(((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (8730789475020209507LL)))));
                    }
                    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((-2109679341) != (((/* implicit */int) var_10))))) > (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (short)-11334))))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_11 [i_1] [i_1] [i_1] [i_3]))), (((/* implicit */long long int) (signed char)-79))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_11 [i_1] [(signed char)14] [i_1] [i_1])) == (max((((/* implicit */unsigned long long int) var_3)), (min((131941395333120ULL), (((/* implicit */unsigned long long int) (signed char)82))))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_7))));
            var_23 = ((/* implicit */short) (unsigned char)112);
        }
        /* vectorizable */
        for (short i_7 = 3; i_7 < 17; i_7 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_7] [i_7 - 1] [i_7 - 2] [1LL] [13LL] [i_1]))));
            /* LoopSeq 3 */
            for (signed char i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
            {
                var_25 -= ((/* implicit */short) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned int i_10 = 4; i_10 < 16; i_10 += 3) 
                    {
                        {
                            arr_31 [i_1] [i_7] [i_8 + 1] [i_9] [i_1] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_7] [i_7]))));
                            arr_32 [i_10 - 2] [i_7] [8LL] [i_7] [i_1] = ((/* implicit */int) var_1);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(arr_10 [i_8] [i_8 + 1] [i_9] [i_9]))))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 2; i_11 < 17; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) var_7);
                            arr_40 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5LL)))) : (arr_29 [i_1] [i_1] [i_12] [i_1])));
                            arr_41 [i_7] [4LL] [i_7] [i_1] [i_1] = ((/* implicit */int) ((signed char) var_1));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-79)) : (2109679339))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((-291759425) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-23))))))))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 5423275558392036619ULL))));
            }
            for (signed char i_14 = 2; i_14 < 17; i_14 += 3) /* same iter space */
            {
                var_31 = ((((/* implicit */_Bool) arr_33 [i_7 - 3] [i_7 - 3] [i_14 - 2])) ? (((/* implicit */int) arr_33 [i_7 - 2] [i_7 - 1] [i_14 + 1])) : (((/* implicit */int) (unsigned short)47052)));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-67))) && (((((/* implicit */_Bool) arr_38 [(signed char)3] [i_7 - 1] [(signed char)3] [i_7] [i_7 - 3] [(signed char)3] [i_7 - 3])) || (((/* implicit */_Bool) 1365145170U))))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_9)))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
            }
        }
        for (int i_15 = 3; i_15 < 17; i_15 += 4) 
        {
            var_34 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)8191)), (0ULL)))) ? (((((/* implicit */_Bool) (signed char)-12)) ? (-8310300396452085957LL) : (((/* implicit */long long int) -291759425)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_15] [i_15 + 1]))))));
            var_35 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-36)), (arr_2 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [(_Bool)1] [i_15 - 1] [i_15])) ? (var_8) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-24)))))))));
        }
    }
    var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min(((-(((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) (signed char)-43)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
}
