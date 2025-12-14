/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195535
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [7U]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) (unsigned char)28))))))))) + (arr_2 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((signed char) ((max((var_15), (((/* implicit */unsigned int) arr_5 [i_0])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))));
                    arr_9 [i_0] [i_0] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_6 [(_Bool)0] [i_1 + 1] [i_2])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_6 [(unsigned short)4] [i_1] [i_1])) : (arr_0 [(short)6])))), (min((((/* implicit */long long int) (unsigned char)227)), (arr_8 [i_0] [i_1] [i_0]))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (_Bool)0))))))));
                    var_21 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((var_5) <= (arr_1 [i_0] [5U])))))), (((/* implicit */int) ((_Bool) ((unsigned short) var_3))))));
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_2]), (((/* implicit */unsigned int) ((var_10) || (((/* implicit */_Bool) arr_0 [i_1])))))))) ? (min((-6184202527102014320LL), (((/* implicit */long long int) 4294967295U)))) : (var_0)));
                    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [0])))))))) : (max((((/* implicit */long long int) 1673308942U)), (arr_8 [i_2] [i_0] [i_0]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))))))));
    }
    for (short i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (-(arr_11 [(unsigned char)10])))) && (((/* implicit */_Bool) arr_11 [i_3]))))), (((-970869059) ^ ((~(((/* implicit */int) (unsigned char)28))))))));
        arr_14 [(_Bool)1] = arr_11 [(signed char)11];
        var_24 *= ((/* implicit */unsigned int) arr_12 [i_3 + 2]);
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_17) <= (((/* implicit */unsigned long long int) var_15))))), (min((1894865195U), (((/* implicit */unsigned int) var_4)))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min(((+(2621658354U))), (((((/* implicit */_Bool) arr_20 [i_4 - 1])) ? (arr_20 [i_4]) : (arr_20 [i_4])))));
                        arr_26 [i_4] [(_Bool)1] [13] [i_7] [i_4] [23U] = ((/* implicit */short) (unsigned char)201);
                        arr_27 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_5 + 2])) << (((var_5) - (1421431738U))))))));
                    }
                } 
            } 
        } 
        arr_28 [(_Bool)1] &= ((/* implicit */long long int) ((unsigned char) -564038430));
    }
    var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (var_3)));
}
