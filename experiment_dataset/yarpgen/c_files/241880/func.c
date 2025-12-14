/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241880
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) var_0);
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (unsigned short)53410);
                        arr_11 [i_2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)78))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned char) arr_14 [(unsigned char)1])), (var_11))), (((/* implicit */unsigned char) var_2))));
            arr_16 [i_0] [(unsigned char)1] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), ((unsigned char)222)));
                        arr_22 [i_0] [(unsigned char)6] [i_4] [i_5] [(unsigned short)6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)31609)) * (((/* implicit */int) (unsigned char)94))));
                    }
                } 
            } 
            arr_23 [i_4] [i_0] = ((/* implicit */unsigned char) (signed char)-102);
            var_17 = ((/* implicit */unsigned char) var_0);
        }
        var_18 ^= ((/* implicit */unsigned int) min(((signed char)-10), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            arr_30 [5U] [i_8 - 1] = ((/* implicit */unsigned short) ((signed char) max((arr_14 [i_8 - 2]), (arr_14 [i_8 - 2]))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)63420)) : (((/* implicit */int) min((arr_19 [i_7] [i_8] [i_8 - 2] [(unsigned char)6]), ((signed char)39)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 4; i_9 < 8; i_9 += 2) 
            {
                var_20 = (signed char)-105;
                var_21 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)15696));
                var_22 = ((/* implicit */unsigned char) max((var_22), ((unsigned char)135)));
            }
            arr_33 [i_7] = arr_19 [i_7] [i_7] [i_8 + 1] [i_7];
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-66)))) ? (((/* implicit */int) arr_5 [i_7])) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_0))));
                var_25 += var_2;
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                arr_42 [i_12] [(signed char)10] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (arr_8 [i_7] [i_10] [i_12])))) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_12])))))));
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 10; i_13 += 3) 
                {
                    for (signed char i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        {
                            arr_49 [(unsigned short)10] [(unsigned char)5] [(unsigned char)9] [i_13 - 1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)120))));
                            arr_50 [i_14 - 1] [(signed char)4] [i_13 - 2] [(signed char)9] [i_12] [i_10] [i_7] = var_5;
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)10))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */unsigned char) var_7);
            }
            for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                arr_54 [i_7] [i_10] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7]))));
                arr_55 [i_7] [i_10] = ((/* implicit */unsigned short) arr_48 [(signed char)2] [i_7] [i_15] [i_7] [i_7] [i_7] [i_10]);
            }
            arr_56 [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_40 [(signed char)8] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [(signed char)1])))))));
        }
        arr_57 [i_7] = ((/* implicit */unsigned char) (unsigned short)26029);
        arr_58 [i_7] = ((/* implicit */unsigned short) (((-(arr_35 [i_7] [i_7]))) > (arr_35 [i_7] [i_7])));
        /* LoopNest 2 */
        for (signed char i_16 = 2; i_16 < 10; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                {
                    arr_64 [(signed char)0] [i_16] [i_16] = ((unsigned char) min(((signed char)(-127 - 1)), ((signed char)-5)));
                    var_28 = ((/* implicit */unsigned short) max((arr_36 [i_7] [i_16]), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned char) arr_14 [(unsigned char)9])), (arr_28 [(signed char)2])))))));
                }
            } 
        } 
    }
    var_29 = var_10;
    /* LoopNest 3 */
    for (unsigned short i_18 = 1; i_18 < 18; i_18 += 4) 
    {
        for (unsigned int i_19 = 3; i_19 < 17; i_19 += 1) 
        {
            for (unsigned char i_20 = 1; i_20 < 18; i_20 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        arr_76 [(signed char)1] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_67 [i_18 + 1])), ((-(var_6)))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_19 - 2] [i_18])))))) - (var_0)));
                        arr_77 [i_18] [(signed char)16] [i_19] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_18 + 1])) ? (((/* implicit */int) arr_66 [i_20 + 1])) : (((/* implicit */int) arr_66 [i_18 - 1]))))) : (max((3843387847U), (((/* implicit */unsigned int) arr_66 [i_21]))))));
                    }
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned char) max(((~(((/* implicit */int) (signed char)56)))), (((/* implicit */int) max(((signed char)16), ((signed char)32))))))))));
                }
            } 
        } 
    } 
}
