/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45285
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((var_0) / (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))))));
                var_14 = ((/* implicit */unsigned long long int) 4U);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) 4281240335U);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_13);
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((-1814375972) - (-2022066697)))) > (min((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_2))), (((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    /* LoopSeq 2 */
    for (int i_2 = 4; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned int) (~(((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 2147483647)))))))))));
            var_18 += ((((/* implicit */_Bool) (-(min((var_8), (((/* implicit */unsigned long long int) -2022066697))))))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) arr_2 [i_3 + 1] [i_3]))))) : (((((int) 821678009)) << (((/* implicit */int) ((((/* implicit */_Bool) 703143047)) || (((/* implicit */_Bool) arr_11 [i_2 - 2] [i_3]))))))));
        }
        for (int i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) -458019191))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */unsigned int) -806487287)) - (arr_4 [i_2] [i_4] [i_2 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_11 [i_2] [i_2])) < (((var_2) >> (((arr_3 [i_2] [11]) + (662233002))))))))));
            var_20 = ((/* implicit */int) min((((min((var_2), (((/* implicit */unsigned int) var_5)))) > (((/* implicit */unsigned int) -1)))), (((((/* implicit */unsigned long long int) ((806487287) - (-1)))) != (max((arr_5 [i_4]), (((/* implicit */unsigned long long int) 1871616980))))))));
            arr_16 [i_4] [i_4] = ((((((/* implicit */int) ((-538876566) >= (var_7)))) >> ((((~(16300934496382448547ULL))) - (2145809577327103041ULL))))) < (min(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((arr_0 [i_4]) >= (((/* implicit */int) (_Bool)1))))))));
        }
        for (int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5] [13] [i_6] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) var_1);
                            arr_27 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (3583549301U))), (((/* implicit */unsigned int) (-(arr_19 [i_2 - 2] [i_5 + 1]))))));
                            arr_28 [i_5] [i_5] [i_5] [i_8] [i_8] [i_5] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((int) var_12))), ((-(16300934496382448547ULL))))) - (((/* implicit */unsigned long long int) ((2958233183U) << (((3905695136U) - (3905695118U))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_21 = ((/* implicit */_Bool) 15976438484720520608ULL);
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    var_22 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9])))))));
                    arr_34 [i_2] [i_2] [i_5 + 2] [i_5 + 2] [i_9] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) ((int) -806487287)))), (min(((-(((/* implicit */int) (_Bool)0)))), (806487286)))));
                    arr_35 [i_10] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */int) arr_31 [i_2 - 4] [i_2 - 4] [i_2 - 4]);
                    arr_36 [i_5] [i_9] [i_5] = ((((arr_29 [i_5]) % (arr_29 [i_5]))) & (((2147483647) - (arr_29 [i_5]))));
                    arr_37 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) arr_10 [i_5])))))))))) > (((min((((/* implicit */unsigned int) var_0)), (1588662217U))) - (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_3)))))))));
                }
            }
        }
        var_23 = ((/* implicit */int) ((arr_10 [i_2]) - (arr_30 [i_2] [i_2] [i_2] [i_2])));
    }
    for (int i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_24 = (((-(var_12))) ^ (((/* implicit */int) ((arr_5 [i_11]) > (arr_5 [i_11])))));
        arr_41 [i_11] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) var_13)))))), (arr_0 [i_11])));
        arr_42 [6U] [i_11] = ((/* implicit */unsigned int) (+(((max((9371040260704364151ULL), (((/* implicit */unsigned long long int) 2057532262)))) | (((/* implicit */unsigned long long int) arr_3 [i_11] [i_11]))))));
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */int) ((arr_1 [i_11]) || (((/* implicit */_Bool) arr_2 [i_11] [(_Bool)1])))))))) ? (max((((arr_5 [i_11]) << (((var_5) + (1378927376))))), (((/* implicit */unsigned long long int) (+(-350203894)))))) : (arr_5 [i_11])));
    }
}
