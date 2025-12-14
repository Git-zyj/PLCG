/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201502
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
    var_18 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((var_17) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-47)))))))), (max((var_2), (((/* implicit */unsigned long long int) var_11))))));
    var_19 = ((/* implicit */signed char) max((2047U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-67)) : (149067402))) : ((-(-149067404))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 += ((((/* implicit */_Bool) max((412316860416ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((3465636942U) + (arr_8 [i_2] [i_1]))) : (((4294967276U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 = (~(((/* implicit */int) (unsigned short)65535)));
                        arr_12 [5U] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) - (var_14)));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_15 [i_0] [(short)8] [i_2] [5U] [i_4] = ((/* implicit */unsigned long long int) var_13);
                            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [(signed char)1]))));
                            arr_16 [i_0] [5ULL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((-171747738) - (((/* implicit */int) (unsigned short)65535))));
                        }
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            var_24 = ((/* implicit */signed char) (-(4294967295U)));
                            var_25 -= ((/* implicit */unsigned int) var_1);
                        }
                        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [4U] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (signed char)-117)), (arr_17 [i_7 - 2] [i_7 + 1] [i_7 - 2]))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (signed char)-24)))))));
                            var_26 = ((/* implicit */unsigned short) (+(15331663230135036023ULL)));
                            arr_25 [i_0] [i_5] [(signed char)0] [i_0] = ((/* implicit */_Bool) (short)384);
                            var_27 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_20 [i_7 - 1] [(unsigned char)3] [i_7] [i_7] [i_7] [i_7 - 1] [i_2])))) >> (((max((((/* implicit */unsigned long long int) 0U)), (3115080843574515580ULL))) - (3115080843574515563ULL)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) -1477248545)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_5])))), ((-(479484722))))), (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (signed char)46)))) : (((/* implicit */int) arr_13 [(signed char)9] [i_1] [i_1] [i_8 + 1]))))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-388))));
                            arr_30 [i_2] [i_5] [i_2] [i_1] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)7] [i_0]))))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-1)), (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_10 [(unsigned char)3] [(unsigned char)3] [i_2] [i_2]))))))) : (var_6)));
                        }
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((13635512423376095620ULL), (((/* implicit */unsigned long long int) 1502105283))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_0] [i_5]))) : ((+(-1LL)))));
                        arr_31 [i_5] [i_0] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)3124))))) ^ ((-(arr_23 [i_0] [i_0] [i_2] [i_2] [i_5])))));
                    }
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) ((_Bool) (signed char)1))) : (arr_11 [i_0] [i_1] [i_2])))) : (min((var_8), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0]))))));
                    var_32 = ((/* implicit */unsigned long long int) max((((max((var_8), (4095LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (2273962949U))))));
                }
            } 
        } 
    } 
    var_33 -= ((/* implicit */int) ((var_9) >> (((((/* implicit */int) var_15)) + (92)))));
}
