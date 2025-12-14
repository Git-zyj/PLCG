/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24159
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
    var_20 = var_17;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 ^= ((((/* implicit */_Bool) (signed char)-78)) ? (1166970524) : (((/* implicit */int) (signed char)-42)));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1166970524)) ? (min((-541982355), (((/* implicit */int) (signed char)-28)))) : (((((/* implicit */_Bool) (signed char)36)) ? (-541982355) : (-541982380)))))) ? (-230365094) : (((/* implicit */int) (signed char)-114))));
                    var_23 ^= ((signed char) arr_7 [i_1]);
                    var_24 = arr_0 [i_1];
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_1] [i_4] = ((signed char) (+(((/* implicit */int) (signed char)78))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (signed char)9)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_15))))));
                        var_26 *= var_12;
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_5] [i_6] [i_6 - 1] [i_6] [i_6 + 1]))));
                            var_27 = ((/* implicit */int) max((var_27), ((+(arr_17 [i_1] [i_2] [i_3] [i_5] [i_6 - 2])))));
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((int) arr_1 [i_2])))))));
                            var_29 ^= ((/* implicit */signed char) 943764767);
                            var_30 += ((((/* implicit */int) ((signed char) -541982345))) >> (((((int) var_2)) - (28))));
                            arr_23 [i_1] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */signed char) (-(arr_21 [i_7] [i_1] [i_3] [i_7] [i_7])));
                        }
                        for (int i_8 = 4; i_8 < 11; i_8 += 3) 
                        {
                            var_31 = (signed char)(-127 - 1);
                            var_32 = ((signed char) ((((/* implicit */_Bool) (signed char)22)) ? (var_13) : (arr_17 [i_1] [i_1] [10] [i_5] [i_8])));
                            arr_28 [i_1] [i_2] [i_2] [i_3] [i_5] [i_8] = (+(((arr_10 [i_1] [i_1] [i_1] [i_1]) | (arr_13 [i_1] [i_1] [i_3] [i_5] [i_1]))));
                        }
                        var_33 = var_3;
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_6 [i_1] [i_3] [i_1]), (arr_6 [i_1] [i_1] [i_1])))) / (((((/* implicit */_Bool) arr_16 [i_3] [i_9])) ? (((/* implicit */int) arr_16 [i_3] [i_9])) : (((/* implicit */int) arr_16 [i_2] [i_9]))))));
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), ((signed char)-25)))) ? (((/* implicit */int) arr_19 [(signed char)8] [i_3] [(signed char)5] [i_1] [i_1])) : ((~(-541982357)))))))))));
                        var_35 = ((/* implicit */int) arr_3 [i_2]);
                        var_36 = ((signed char) (~(((/* implicit */int) arr_15 [i_2] [i_2] [(signed char)4] [i_2]))));
                        arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((330956841), (((/* implicit */int) (signed char)(-127 - 1))))))))) << ((((((-(((/* implicit */int) arr_24 [i_1] [i_1] [i_2] [i_2] [i_3] [i_9] [i_9])))) / (((int) var_4)))) + (30)))));
                    }
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        arr_35 [i_1] [i_1] [i_3] [i_10] = ((/* implicit */int) (signed char)105);
                        arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((((/* implicit */int) (signed char)78)) >> (((arr_30 [i_1] [i_2] [i_3] [2]) - (923127343))))) % (arr_21 [2] [i_1] [i_3] [i_1] [i_3])))));
                        arr_37 [i_1] [i_2] [i_3] [i_10] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)78)) + (((/* implicit */int) (signed char)64))));
                    }
                }
            } 
        } 
        arr_38 [i_1] = min((((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((signed char) (signed char)64))));
        arr_39 [i_1] = ((/* implicit */signed char) (-(var_8)));
    }
}
