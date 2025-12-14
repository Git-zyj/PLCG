/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197039
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
    var_15 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) ^ (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >= (((/* implicit */int) (unsigned short)65535)))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_3 [(signed char)6]))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [(unsigned short)8]), (((/* implicit */short) (_Bool)1)))))))))))));
                            var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0])))))))));
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-9905))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (short)-373))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) (unsigned short)27244)) != (((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)12] [i_1 - 1]))))))));
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */_Bool) arr_8 [i_0]);
            arr_16 [(signed char)4] &= ((_Bool) (unsigned short)35993);
        }
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [(_Bool)1] [i_5])) << (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned short) max((var_9), ((!(((((/* implicit */int) arr_17 [i_5] [i_5])) < (((/* implicit */int) (short)-25213))))))));
        arr_20 [i_5] |= ((/* implicit */signed char) max((((/* implicit */int) max((arr_5 [i_5] [(unsigned short)6] [i_5]), (arr_7 [i_5] [(short)12] [i_5])))), (((arr_5 [i_5] [(unsigned short)10] [i_5]) ? (((/* implicit */int) arr_5 [i_5] [(short)6] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [(signed char)9]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6] [i_5])) ^ (((/* implicit */int) arr_22 [i_5] [i_5]))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned short) arr_29 [(unsigned short)12] [(unsigned short)12]);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((((/* implicit */int) arr_27 [i_6] [i_7])) * (((/* implicit */int) (unsigned short)36476))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)9906)))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_9] [i_6] [i_7] [i_6] [i_5]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_8]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_5]))));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_10 [(unsigned short)5] [i_6] [(unsigned short)7] [i_10] [i_10]))));
                var_32 += var_10;
                var_33 &= ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                var_34 = ((/* implicit */signed char) (unsigned short)62203);
            }
            var_35 = ((/* implicit */_Bool) (unsigned short)19030);
            var_36 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
        }
        for (signed char i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            arr_39 [i_11] = ((/* implicit */signed char) (_Bool)0);
            arr_40 [i_5] [i_11] [i_11] = ((((/* implicit */int) ((short) (_Bool)1))) >= (max((((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (short)5059)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                arr_44 [i_11] [i_12] = ((/* implicit */short) arr_28 [(signed char)10] [(signed char)10] [i_11 + 2] [i_11] [i_11 + 2]);
                var_37 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_11] [i_11] [(_Bool)1])) & (((/* implicit */int) arr_30 [i_11 + 2] [i_11 + 2] [i_12 + 1] [i_12] [i_12 + 1]))));
            }
            for (signed char i_13 = 2; i_13 < 12; i_13 += 3) 
            {
                arr_47 [i_13] [(_Bool)1] [i_13] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((arr_26 [i_5] [i_11 - 2] [i_11] [i_13 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_13] [i_5] [i_13] [i_11] [i_13 - 2]))))))) ? (min((((((/* implicit */int) (unsigned short)47212)) & (((/* implicit */int) var_9)))), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_43 [i_5])))))) : (((((/* implicit */int) arr_24 [i_11 - 2])) & (((/* implicit */int) var_6))))));
                arr_48 [i_13] [i_13] [i_13 - 1] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-1))))));
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                var_38 = var_12;
                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(signed char)10])) ? (((((/* implicit */_Bool) arr_17 [i_11] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9905)))) : (((/* implicit */int) var_12))));
                arr_51 [i_5] [i_5] [i_11] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (_Bool)0)))));
            }
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34002))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_11 + 2] [i_11] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_11] [(unsigned short)11] [i_5])))))))))));
            var_41 ^= ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned short)59003), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */int) arr_15 [i_11] [i_11 - 3] [i_11 + 2] [i_11 + 1] [i_11 - 2])) << (((((/* implicit */int) (short)-25207)) + (25230)))))));
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 1; i_15 < 11; i_15 += 3) 
        {
            var_42 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-52)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51567)))))));
            var_43 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_5] [i_15 + 2] [i_15 + 2])), (var_12)))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_3), ((unsigned short)65535)))) : (((((/* implicit */int) (unsigned short)6545)) - (((/* implicit */int) var_14))))))));
            var_44 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)-53)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_15 + 1] [i_15 + 2] [i_15 + 1] [i_15 + 2])))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                var_45 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_12))))));
                arr_56 [i_15] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned short)51465), (((/* implicit */unsigned short) (short)639)))))));
                var_46 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)2812)))) ? (((/* implicit */int) var_6)) : (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)45109))))))));
            }
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (~(((/* implicit */int) (short)2801)))))));
        }
    }
    var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (-((((-(((/* implicit */int) (unsigned short)6545)))) % (((((/* implicit */_Bool) (unsigned short)23030)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)3026)))))))))));
}
