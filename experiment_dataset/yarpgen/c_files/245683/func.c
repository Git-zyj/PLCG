/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245683
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_14 += var_7;
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~((~(((/* implicit */int) (signed char)-88)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            var_15 &= ((signed char) (!(((/* implicit */_Bool) var_0))));
            var_16 |= (signed char)83;
            var_17 = ((/* implicit */signed char) (((((~(((/* implicit */int) (signed char)47)))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) >= ((-(((/* implicit */int) min(((signed char)-105), (var_10))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-86)) != (((/* implicit */int) (signed char)47))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_19 = (signed char)-61;
                var_20 = (signed char)0;
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) var_5))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), ((~(((/* implicit */int) var_11))))));
                        var_21 = (signed char)-11;
                        var_22 = var_11;
                    }
                    var_23 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_11 [i_0 - 1])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_0 [i_1] [i_1 + 1])))) + (97))) - (2)))));
                }
                for (signed char i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)47)))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_0])))), (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_8 [i_0] [i_5])))))))));
                    var_25 = ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((min((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_5]))), ((signed char)2))))));
                }
                for (signed char i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                    arr_19 [i_0] = (signed char)0;
                    var_27 = ((/* implicit */signed char) min((min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min((arr_16 [i_0] [i_2]), ((signed char)-61)))))), ((~((~(((/* implicit */int) var_5))))))));
                    arr_20 [i_6] [(signed char)0] [i_0] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_8)))))))));
                    var_28 = arr_3 [i_6];
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-78))));
                    var_30 = (signed char)47;
                    var_31 -= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) (signed char)-4)))), ((!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_7]))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        var_32 = var_8;
                        var_33 = ((signed char) (((~(((/* implicit */int) arr_1 [i_8])))) ^ (((/* implicit */int) min(((signed char)2), (var_0))))));
                    }
                }
                var_34 = arr_14 [i_2] [i_1] [i_1] [i_0] [i_0];
            }
        }
    }
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_35 = var_0;
        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
        var_37 = ((/* implicit */signed char) max((var_37), (max(((signed char)-9), (min((var_12), (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_38 |= ((/* implicit */signed char) min((min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) var_2))));
    }
    for (signed char i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        var_39 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (signed char)-76))) + (2147483647))) >> (((/* implicit */int) min(((signed char)108), ((signed char)0))))));
        var_40 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-4)), (max((((/* implicit */int) var_10)), (((((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_10] [i_10])) % (((/* implicit */int) var_2))))))));
    }
    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_4))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-55))))))) : ((+(((/* implicit */int) var_6))))));
}
