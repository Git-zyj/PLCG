/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210876
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */signed char) var_1)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) ((signed char) arr_2 [i_0]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))))))));
            }
            var_16 ^= ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0]))))))));
            var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_4 [i_0] [i_1]) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(_Bool)1] [i_0])))))))), ((-(((/* implicit */int) (_Bool)1))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)118)))) ? (((/* implicit */int) min((var_8), (min((var_8), (arr_8 [i_0] [(_Bool)1])))))) : ((((~(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)1))))))))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((signed char)-36), (((/* implicit */signed char) var_12)))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            arr_16 [i_3] = ((signed char) (signed char)-1);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
        }
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
                    {
                        arr_28 [i_8] [(_Bool)1] [(signed char)2] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */_Bool) ((signed char) (_Bool)0));
                        var_22 &= ((/* implicit */signed char) (!((_Bool)1)));
                        var_23 *= ((/* implicit */signed char) ((_Bool) arr_20 [i_6 - 1] [i_8] [i_8]));
                        var_24 = ((_Bool) (_Bool)1);
                    }
                    var_25 = ((/* implicit */signed char) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_5] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [i_5] [i_5] [i_6] [i_6 + 3] [i_5] [i_9]))));
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_6] [i_6] [i_6 + 4])) ^ (((/* implicit */int) (signed char)-1))));
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_27 = (!(((/* implicit */_Bool) (signed char)-70)));
                        var_28 = (!(var_3));
                    }
                }
            } 
        } 
        arr_35 [i_5] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
        arr_36 [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (signed char)127)))))))))));
    var_31 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)2)))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_7))))))));
    var_32 = var_2;
}
