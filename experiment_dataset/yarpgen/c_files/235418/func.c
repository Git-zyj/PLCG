/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235418
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
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_10)), (min((var_11), (((/* implicit */unsigned long long int) var_8))))));
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8911494874064239568LL)) && (((/* implicit */_Bool) arr_2 [i_0]))))) : ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_9), ((signed char)0)))) & (((/* implicit */int) ((_Bool) (~(3638398819U)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)248)) ? (5945572913850208956LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
        arr_7 [6ULL] = ((/* implicit */unsigned char) (~(var_1)));
        var_15 = ((/* implicit */unsigned char) (-(5945572913850208956LL)));
    }
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_17 [5LL] [i_2] = ((/* implicit */unsigned int) 18013298997854208LL);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(var_0)))) - (5945572913850208956LL)))) <= (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (14223632897342044973ULL))), (min((14223632897342044973ULL), (((/* implicit */unsigned long long int) (signed char)-96))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        arr_20 [i_3] [i_4] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned char) (signed char)0))));
                        arr_21 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) var_2);
                        var_17 = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)255))) * (0U))), (((/* implicit */unsigned int) ((signed char) var_0))))))));
                        var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min(((short)255), ((short)15180)))), (min((((/* implicit */unsigned long long int) (unsigned char)8)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((long long int) ((var_11) - (4611686018427387904ULL)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_6))))))));
                        var_20 = ((/* implicit */_Bool) max((((-7697375111717422353LL) ^ (-7697375111717422353LL))), (((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) / (var_1)))))));
                        arr_25 [i_2] [i_2] = ((long long int) var_4);
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)248)), ((-(((/* implicit */int) (_Bool)1))))));
                        arr_26 [i_2] [i_2] [i_4] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15180)) ? (min((arr_12 [i_2]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_2] [i_2]), (var_9)))))));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_4))))))) : (min((var_11), (((/* implicit */unsigned long long int) var_10))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_2))))));
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (short)-15181))) ? (arr_16 [i_7] [(_Bool)1]) : (((/* implicit */long long int) (-(var_0))))));
        arr_30 [(unsigned char)10] = var_1;
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_37 [i_8] [i_8] [i_9] = (~(89191979606864361LL));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) (~(5945572913850208956LL)));
                            var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_1)))) >= (min((((/* implicit */unsigned long long int) var_5)), (var_2)))))), (arr_24 [i_11 + 2] [i_8])));
                            arr_44 [10U] [10U] [i_8] [i_10] [i_10] = min((((/* implicit */unsigned long long int) arr_40 [8ULL] [i_8] [(short)1] [i_10] [(short)1] [i_11])), (var_11));
                            var_27 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) var_7)), (var_3))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) >= (min((((/* implicit */unsigned long long int) var_7)), (var_2))))))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) (~(var_0)));
                            var_29 = ((/* implicit */unsigned char) arr_24 [i_9] [i_8]);
                        }
                        var_30 = ((/* implicit */long long int) (signed char)-101);
                        var_31 = var_3;
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (_Bool)0))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                    var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_43 [i_7] [i_7] [i_8] [(signed char)1] [i_8])) : (((/* implicit */int) var_7))))));
                    var_34 = ((/* implicit */_Bool) min((arr_45 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_8] [i_9]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)113)))))));
                    var_35 = ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) : (4294967295U));
                }
            } 
        } 
    }
}
