/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199742
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [i_0 + 3] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)12)) <= (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1)))))));
        var_19 *= ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)0)))));
        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))));
        arr_6 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
    }
    for (signed char i_2 = 1; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) < (((/* implicit */int) arr_9 [i_2 + 1])))))))));
        arr_10 [i_2 + 2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)2)) || (arr_7 [i_2 + 1] [i_2]))))) ? (((((var_15) || (arr_5 [i_2] [i_2 - 1]))) ? (((/* implicit */int) max(((signed char)31), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) ((signed char) arr_5 [i_2 + 4] [i_2 + 4]))))) : ((~(((/* implicit */int) arr_4 [(_Bool)1] [i_2]))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 2] [i_3])) % (((/* implicit */int) max(((signed char)92), ((signed char)32))))));
                    var_23 = ((/* implicit */signed char) arr_0 [i_2] [(_Bool)1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-33)))))));
                    var_25 = arr_13 [i_5];
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((((/* implicit */int) (signed char)-93)) >= (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_0 [i_7 - 1] [(_Bool)1])))) > (((((/* implicit */int) arr_5 [i_6] [i_2])) & (((/* implicit */int) arr_12 [(signed char)12] [i_2 + 4]))))))));
                        var_27 = (_Bool)1;
                        var_28 = ((/* implicit */signed char) (!((_Bool)1)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_5] [(signed char)4] &= ((/* implicit */signed char) ((max((((((/* implicit */int) var_1)) >> (((/* implicit */int) var_1)))), (((((/* implicit */int) (signed char)91)) & (((/* implicit */int) (signed char)32)))))) > (((/* implicit */int) arr_2 [i_9]))));
                            var_29 *= ((((/* implicit */_Bool) (signed char)-92)) && ((_Bool)1));
                            var_30 *= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_15)))))) ? ((((((_Bool)0) ? (((/* implicit */int) arr_24 [(signed char)8] [(signed char)8])) : (((/* implicit */int) (signed char)55)))) % (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1]))));
                        }
                        for (signed char i_10 = 3; i_10 < 11; i_10 += 2) 
                        {
                            var_31 = arr_18 [i_10] [i_6] [i_6] [i_2];
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_5])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_18 [i_10] [(signed char)8] [i_6] [(signed char)14])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_2] [(signed char)4] [i_2] [(signed char)4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)55)) && (((/* implicit */_Bool) (signed char)55))))) : (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-92)))))) : ((+(((/* implicit */int) arr_14 [(_Bool)1] [(signed char)12] [i_10 - 3] [i_10])))))))));
                        }
                        arr_32 [i_8] [(signed char)7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-50), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [(signed char)3] [(signed char)3] [(signed char)3] [i_8])) <= (((/* implicit */int) arr_2 [i_8])))))))) ? (((/* implicit */int) ((((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_2] [i_5] [i_6] [(signed char)2])))) <= (((/* implicit */int) ((((/* implicit */int) arr_3 [i_8])) < (((/* implicit */int) arr_3 [(_Bool)1])))))))) : (((/* implicit */int) max((arr_26 [i_2] [i_2] [i_5] [i_2] [(_Bool)1]), (((_Bool) arr_8 [i_5])))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) arr_30 [i_11] [i_5] [i_2]);
                        var_34 *= ((/* implicit */_Bool) var_1);
                        var_35 = ((/* implicit */signed char) var_10);
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) max((((/* implicit */int) (signed char)-91)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2]))))) ? (((arr_30 [i_2] [i_2] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_2 + 1] [i_6] [i_2 + 1] [i_2 + 1] [i_2])))) : ((-(((/* implicit */int) arr_15 [i_6])))))))))));
                        var_37 = ((/* implicit */signed char) (!(max((((((/* implicit */_Bool) arr_17 [i_2 + 4] [(signed char)6] [(signed char)6])) || (((/* implicit */_Bool) var_8)))), (((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) <= (((/* implicit */int) (signed char)31))))))));
                    }
                }
            } 
        } 
        arr_35 [i_2 + 3] [i_2] = arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1];
    }
    var_38 = ((/* implicit */_Bool) var_4);
}
