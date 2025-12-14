/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213521
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((long long int) arr_2 [i_0]))));
        var_16 = ((/* implicit */_Bool) var_7);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [13U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_11)))) && (((_Bool) -6721978918059724054LL))));
            var_17 = ((/* implicit */long long int) arr_0 [i_0]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) var_6);
                            var_19 = ((/* implicit */unsigned int) arr_16 [i_3] [i_3]);
                            var_20 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_12)))));
                            arr_18 [i_0] [i_0] [i_3] [i_3] [11U] [i_4] = ((arr_11 [i_3] [i_3] [18] [i_0 - 1]) + (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])));
                            var_21 = (+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (arr_8 [13U] [i_2]))));
                        }
                    } 
                } 
                arr_19 [i_3] = ((/* implicit */unsigned char) (~(((int) arr_12 [i_0] [(_Bool)1] [(_Bool)1]))));
                var_22 = arr_15 [i_3] [i_2] [i_3] [13LL];
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) ((_Bool) ((long long int) var_11)));
                arr_22 [i_0] [i_6] = ((/* implicit */unsigned int) ((arr_20 [i_0 + 2] [15U] [(_Bool)1]) > (((/* implicit */long long int) ((/* implicit */int) (!(arr_15 [9LL] [i_2] [2U] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_28 [i_6] [i_6] = ((/* implicit */short) (-(var_5)));
                            var_24 = arr_2 [i_2];
                            var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(_Bool)1]))) % (var_8)))));
                            arr_29 [i_0] [i_2] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) arr_2 [i_0 + 2]);
                        }
                    } 
                } 
            }
            arr_30 [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_0 + 2] [18U] [i_0 + 1] [i_0 + 2]))));
            var_26 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_5)))));
            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)0] [(_Bool)0]))) : (arr_11 [(short)16] [i_0] [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6721978918059724053LL) ^ (3881811786042722197LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((arr_35 [i_0] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))));
                            var_29 += ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0] [i_0] [i_0]));
                            arr_39 [i_0] [i_9] [i_9] [(_Bool)1] [(_Bool)1] [2U] = (i_9 % 2 == zero) ? (((arr_1 [i_0 - 2]) >> (((arr_37 [i_9] [i_2] [13ULL] [4U] [0U] [i_10] [i_11]) - (754265457U))))) : (((arr_1 [i_0 - 2]) >> (((((arr_37 [i_9] [i_2] [13ULL] [4U] [0U] [i_10] [i_11]) - (754265457U))) - (832157684U)))));
                            arr_40 [i_9] [17ULL] = ((/* implicit */_Bool) ((arr_4 [i_9] [i_10] [i_10]) - (((/* implicit */int) ((_Bool) arr_25 [i_0])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
        {
            var_30 = (!(((/* implicit */_Bool) ((max((-6721978918059724054LL), (((/* implicit */long long int) 1085637287)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    {
                        var_31 = ((/* implicit */int) arr_45 [i_0] [i_13] [(_Bool)1]);
                        var_32 = ((/* implicit */short) arr_25 [i_0]);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) == (arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned int) (~(arr_21 [i_12] [i_0] [(_Bool)1])));
        }
        for (short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    {
                        arr_58 [i_15] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(min((arr_56 [i_0 + 1] [i_0] [i_15] [i_0 - 1] [i_0]), (arr_56 [i_0 + 2] [i_0] [i_15] [i_0 + 2] [i_0 + 2])))));
                        arr_59 [i_0] [i_15] [i_15] [9U] [i_17] [i_15] = ((/* implicit */long long int) (+(((unsigned int) (!(((/* implicit */_Bool) arr_5 [i_15])))))));
                        arr_60 [i_15] = max((min((1153245510U), (4294967295U))), (((/* implicit */unsigned int) ((_Bool) 524287U))));
                        var_35 = ((/* implicit */unsigned long long int) (-(max((arr_20 [i_0] [i_17] [i_16]), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        {
                            arr_71 [i_15] [i_15] [16U] [9] [17] [i_20] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_65 [i_15] [(_Bool)1]))))));
                            var_36 = ((/* implicit */_Bool) (+((+(((/* implicit */int) max((var_4), (arr_67 [6] [i_15] [(_Bool)0] [i_18] [15LL] [i_15]))))))));
                            var_37 = ((/* implicit */int) ((max((((/* implicit */long long int) ((_Bool) var_13))), ((-(arr_38 [i_0] [i_0] [i_0] [i_0] [i_15]))))) < (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                            var_38 -= ((/* implicit */_Bool) ((unsigned int) arr_62 [7U] [i_19]));
                        }
                    } 
                } 
            } 
        }
        var_39 = (!((!(((/* implicit */_Bool) (unsigned char)0)))));
    }
    for (short i_21 = 2; i_21 < 18; i_21 += 1) /* same iter space */
    {
        var_40 += ((/* implicit */unsigned char) (((~(((arr_11 [(_Bool)1] [i_21 - 1] [i_21 - 1] [(_Bool)1]) << (((var_1) + (4101079047012448875LL))))))) ^ (((/* implicit */unsigned long long int) max(((+(arr_54 [(_Bool)1] [i_21 + 2]))), ((-(((/* implicit */int) var_14)))))))));
        arr_74 [i_21] = ((/* implicit */long long int) var_4);
        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (arr_0 [i_21]))))));
    }
    for (short i_22 = 2; i_22 < 18; i_22 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
        var_43 = ((/* implicit */unsigned long long int) ((((long long int) (~(((/* implicit */int) var_14))))) ^ (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (short i_23 = 2; i_23 < 18; i_23 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_12)))));
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_24 [i_23] [i_23] [i_23] [i_23])))) && (((/* implicit */_Bool) arr_77 [i_23 - 2]))));
        var_46 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
        arr_79 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_15 [i_23] [i_23] [i_23] [i_23]))))) : (((var_8) / (arr_9 [i_23] [i_23])))));
    }
    var_47 |= (!(((/* implicit */_Bool) ((long long int) var_0))));
    var_48 = ((/* implicit */_Bool) var_14);
    var_49 = ((/* implicit */_Bool) (-(((/* implicit */int) ((1363955819008048698LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) var_1))));
}
