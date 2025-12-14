/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247350
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) (signed char)-114))));
            arr_11 [i_1] [i_2] = var_7;
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)121)) << (((((/* implicit */int) var_10)) - (104)))));
            arr_13 [i_1] = (signed char)110;
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)3))) ? ((-(((/* implicit */int) var_16)))) : ((-(((/* implicit */int) var_10)))))) | (((/* implicit */int) min(((!(((/* implicit */_Bool) var_16)))), (((((/* implicit */int) var_10)) < (((/* implicit */int) var_12)))))))));
            arr_17 [i_1] [i_1] = (signed char)-33;
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) min((var_17), (var_3)))))) : (((/* implicit */int) (signed char)-107))));
            arr_19 [i_1] = var_3;
        }
        for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            arr_22 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) min((var_13), ((signed char)-88)))) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_28 [i_1] [i_1] &= ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62))))) <= (((/* implicit */int) (signed char)123))))));
                        arr_29 [i_1] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_15 [i_1])))) <= (((/* implicit */int) arr_5 [i_1]))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_33 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_7] [i_1])) <= ((~(((/* implicit */int) max(((signed char)-21), (var_0))))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        arr_40 [i_1] [i_1] [i_8] [i_9] [i_8] = ((/* implicit */signed char) min((((/* implicit */int) max((var_8), (var_2)))), ((~(((/* implicit */int) var_13))))));
                        arr_41 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_1])))))));
                    }
                } 
            } 
            arr_42 [i_7] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_14)), ((~(((((/* implicit */int) (signed char)16)) << (((((/* implicit */int) (signed char)39)) - (20)))))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    {
                        arr_47 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) var_16))))))));
                        arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) max(((-(((/* implicit */int) ((signed char) var_17))))), (((((((/* implicit */int) arr_5 [i_11 + 3])) + (2147483647))) << (((((((/* implicit */int) arr_34 [i_11 + 1] [i_11 + 3] [i_11 - 1])) + (83))) - (11)))))));
                    }
                } 
            } 
        }
        arr_49 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_8 [i_1])))));
        arr_50 [i_1] = min(((signed char)39), ((signed char)15));
        arr_51 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
        arr_52 [i_1] = ((/* implicit */signed char) ((max((((((/* implicit */int) var_2)) - (((/* implicit */int) var_14)))), (((/* implicit */int) min((var_12), (arr_23 [i_1] [i_1] [i_1])))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_31 [i_1])))))));
    }
    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        arr_56 [i_12] = min((((signed char) (signed char)-49)), (var_0));
        arr_57 [i_12] = ((/* implicit */signed char) max((((/* implicit */int) arr_55 [i_12])), (max((((((/* implicit */int) var_18)) * (((/* implicit */int) arr_55 [i_12])))), ((~(((/* implicit */int) (signed char)-62))))))));
        arr_58 [i_12] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_54 [i_12])) & (((/* implicit */int) arr_53 [i_12] [i_12]))))));
    }
    /* LoopNest 2 */
    for (signed char i_13 = 4; i_13 < 12; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            {
                arr_63 [(signed char)5] [i_14] [i_14] = ((/* implicit */signed char) ((min(((-(((/* implicit */int) arr_44 [i_14] [i_14] [i_13])))), (((/* implicit */int) arr_30 [i_13] [i_14] [i_13 - 4])))) / (((/* implicit */int) var_8))));
                arr_64 [(signed char)1] [(signed char)7] = max((max((arr_46 [i_14] [i_13] [i_13] [i_13 - 3]), (arr_46 [i_13] [i_13] [i_13] [i_13 - 1]))), (((signed char) (signed char)-32)));
            }
        } 
    } 
}
