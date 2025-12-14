/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213164
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62726))) ^ (1505148167U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_1))))))));
                        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-46))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((arr_9 [(unsigned short)11] [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_0])))) : (((/* implicit */int) (signed char)76))))));
        var_16 = ((/* implicit */unsigned int) (signed char)-38);
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            {
                var_17 -= var_8;
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_5 [i_7] [(_Bool)1] [(_Bool)1]);
                            var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-90)) : (((((/* implicit */int) arr_0 [i_7])) * (((/* implicit */int) arr_2 [16U])))))), (((((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_5] [i_5 + 1] [i_5] [(unsigned short)11])) ? (((/* implicit */int) arr_5 [i_4] [i_4] [13U])) : ((-(((/* implicit */int) var_8))))))));
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_4] [i_5] [i_6]))));
                        }
                    } 
                } 
                arr_21 [i_4] [i_5] [i_5] = var_8;
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) 
    {
        var_21 -= ((/* implicit */_Bool) (signed char)24);
        arr_25 [i_8 + 1] [i_8] = (signed char)80;
        /* LoopSeq 4 */
        for (signed char i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            arr_28 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_8 [(signed char)15] [i_9 + 1] [i_9] [5U] [15U] [5U])) : (((/* implicit */int) arr_3 [(signed char)4] [i_8 - 2] [i_9 - 1]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_9] [i_9 + 1] [(_Bool)1])) < (((/* implicit */int) ((unsigned short) var_1)))));
            var_23 |= arr_26 [i_8] [i_8];
        }
        for (unsigned int i_10 = 4; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_33 [(_Bool)1] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned short) var_4));
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 17; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (-(((unsigned int) var_7))));
                            arr_42 [i_11] = ((/* implicit */_Bool) ((unsigned int) (!(var_8))));
                            arr_43 [i_8] [i_8] [i_8 - 2] [(_Bool)0] [i_11] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8] [i_11 + 1]))) : (var_4)))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_36 [i_10 - 2])) : (((/* implicit */int) arr_36 [i_10 - 2]))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) (-(var_10)));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)118)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [10U]))) > (2U))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [(_Bool)1])))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 2; i_16 < 17; i_16 += 2) 
                        {
                            var_29 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_49 [i_8 - 1] [i_8 + 1] [i_10 + 1] [i_14] [i_15] [i_16 - 1]))));
                            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_45 [i_16])))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_17 = 4; i_17 < 16; i_17 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_66 [i_8 - 2] [i_17] [i_8 - 2] [(unsigned short)11] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_8] [i_19] [i_18]))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_8] [i_17] [(_Bool)1] [i_19] [i_19] [11U]))))) ? (((/* implicit */int) arr_59 [(signed char)10] [i_8 - 2] [i_8 - 2])) : (((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((((((/* implicit */int) var_0)) + (85))) - (23))))))))));
                            var_32 &= ((/* implicit */_Bool) var_0);
                            var_33 *= arr_54 [i_20] [4U] [i_17];
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_21 = 2; i_21 < 17; i_21 += 1) 
            {
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (unsigned short i_23 = 1; i_23 < 16; i_23 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2U)))) ? (((((/* implicit */_Bool) 2789819128U)) ? (var_4) : (2789819128U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))));
                            var_35 = ((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_24 = 4; i_24 < 16; i_24 += 4) /* same iter space */
        {
            var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_8 - 2] [i_24 - 4] [i_8] [i_24 - 3]))));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) 651776327U)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)0)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            for (signed char i_26 = 0; i_26 < 18; i_26 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 18; i_27 += 3) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) (((+(((/* implicit */int) var_11)))) - (((/* implicit */int) (signed char)-72))));
                                var_39 += ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) && (arr_57 [i_25] [i_26] [(unsigned short)1])));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) 4294967280U))));
                    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        arr_86 [i_8] [i_8 + 1] = ((/* implicit */_Bool) ((arr_36 [i_8]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58)))));
    }
    var_44 = ((/* implicit */_Bool) var_10);
    var_45 = ((((/* implicit */_Bool) (signed char)-81)) ? (var_4) : (((var_11) ? ((~(2U))) : (((unsigned int) 1206181516U)))));
}
