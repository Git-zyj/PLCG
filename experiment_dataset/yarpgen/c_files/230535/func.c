/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230535
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
    var_14 += ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned long long int) (short)-31352))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0]))));
                        var_15 = ((/* implicit */int) var_10);
                        var_16 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)11]))));
                        var_17 = ((/* implicit */unsigned char) arr_7 [i_0] [(_Bool)1] [i_0] [i_0]);
                        arr_10 [i_0] [1] [i_2] [i_3] [7U] = ((/* implicit */long long int) (~((~(8988888367641504556ULL)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61314))) != (2365738497289960482LL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */short) -447110218501946660LL);
                            var_19 ^= ((unsigned int) var_0);
                            var_20 = ((/* implicit */unsigned long long int) (signed char)103);
                        }
                        var_21 = ((/* implicit */signed char) (+(((int) (short)29166))));
                        arr_17 [i_4] |= ((/* implicit */signed char) var_13);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29955)) != (((/* implicit */int) (signed char)-95))));
                            var_23 = ((/* implicit */unsigned long long int) (-(var_6)));
                        }
                        for (short i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_5)))))), ((+((-(arr_13 [i_0] [i_1] [i_2] [i_2] [10] [i_4]))))))))));
                            var_25 *= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-5))))), (-447110218501946667LL))) != (((/* implicit */long long int) 19684077))));
                            var_26 *= ((/* implicit */short) 13284339581972901595ULL);
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_2] [12]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 4; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) (unsigned char)95);
                        var_29 += ((/* implicit */signed char) (-(((/* implicit */int) ((arr_20 [i_2] [i_2] [i_2] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_8] [i_2]))))))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)7308)))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */int) min((arr_20 [i_9] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) ((arr_20 [i_0] [i_1] [i_2] [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [12] [i_2] [12]))))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_9]);
                        var_32 ^= (signed char)-84;
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_33 ^= min((((/* implicit */int) min((((short) var_5)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29323))) != (-1478392737362973398LL))))))), (var_6));
                        var_34 = arr_19 [i_0] [i_1] [i_2] [i_2] [(unsigned short)9];
                    }
                }
                for (short i_11 = 2; i_11 < 21; i_11 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [10U] [15LL] [i_11])), (arr_4 [i_0] [i_11 - 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (var_6))))) != (min((((/* implicit */unsigned long long int) arr_0 [4ULL])), (var_9))))))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((3321243536U) != (((/* implicit */unsigned int) ((/* implicit */int) ((-1237142228) != (-2091849896))))))))));
                                var_37 *= ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)65535)))) ^ ((~(((/* implicit */int) arr_6 [i_12]))))));
                            }
                        } 
                    } 
                }
                for (short i_14 = 2; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [(unsigned short)13] [i_0] = ((/* implicit */int) var_7);
                    var_38 *= ((/* implicit */unsigned long long int) min((arr_0 [i_14 - 1]), (min((((/* implicit */int) (unsigned char)118)), (arr_0 [i_14 - 2])))));
                    var_39 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (-1237142225) : (arr_30 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3])))) != (min((((/* implicit */long long int) -1073741824)), (var_10))));
                }
                arr_41 [i_0] = ((/* implicit */unsigned int) ((-1237142211) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                var_40 ^= ((((/* implicit */_Bool) -649507327)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)105)));
                arr_42 [i_0] [i_0] = 67108848U;
            }
        } 
    } 
}
