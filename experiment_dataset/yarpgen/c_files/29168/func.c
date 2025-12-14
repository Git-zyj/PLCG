/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29168
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
    var_20 |= ((_Bool) ((((_Bool) (signed char)73)) ? ((~(((/* implicit */int) var_17)))) : ((~(((/* implicit */int) (signed char)12))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_13);
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), ((signed char)-117)))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
            var_23 = ((_Bool) (_Bool)1);
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_24 = ((_Bool) ((((/* implicit */int) (!(var_12)))) >> (((/* implicit */int) ((_Bool) (_Bool)0)))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_25 -= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                var_26 = ((/* implicit */signed char) ((((_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)48))));
                var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [(signed char)0] [i_3])) * (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)0)))))) : (((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) ((_Bool) var_19))) : (((/* implicit */int) (!((_Bool)1))))))));
                var_28 ^= var_13;
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_2] [(_Bool)1] [(_Bool)1] [i_5] = var_13;
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */int) max((arr_2 [i_0] [i_0]), (var_1)))) >> (((((/* implicit */int) (signed char)127)) - (96))))) : (min((((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0] [i_5] [i_4] [i_5] [i_6]))), ((((_Bool)0) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) var_15))))))));
                            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)54)) - (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) (signed char)54)) >> (((/* implicit */int) (_Bool)1)))) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)87)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5] [i_2]))))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (signed char)25))))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))))))));
            }
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            arr_24 [(signed char)1] [i_7] = ((/* implicit */signed char) ((_Bool) (signed char)52));
            var_32 *= ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_33 -= ((/* implicit */signed char) ((_Bool) (((_Bool)0) ? (((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_8] [i_8])) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_0] [i_0])))));
            arr_28 [i_0] [i_0] [i_8] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_27 [i_0] [i_8])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_1)))) - ((~(((/* implicit */int) (signed char)-87)))))), ((((-(((/* implicit */int) (signed char)0)))) * (((/* implicit */int) arr_12 [i_0]))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_34 ^= arr_18 [(_Bool)1] [i_9] [i_8] [i_8] [(_Bool)1];
                        var_35 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) (_Bool)1))))), ((~(((/* implicit */int) min(((signed char)101), (((/* implicit */signed char) var_9)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_36 -= ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (min((((/* implicit */signed char) var_2)), (arr_38 [i_0] [i_11] [i_12]))))))));
                        var_37 *= ((/* implicit */signed char) min((max((((arr_35 [i_11] [i_11] [i_11] [i_11]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-50)))), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-59))));
    }
    var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((signed char) (_Bool)1)), (var_8))))));
}
