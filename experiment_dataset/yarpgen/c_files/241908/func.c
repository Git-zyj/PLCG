/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241908
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
    var_20 = var_5;
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_19)))) + (2147483647))) << (((((((/* implicit */int) var_18)) + (((/* implicit */int) var_13)))) - (59052))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) arr_2 [i_0])))) ? (((((((/* implicit */_Bool) (unsigned short)967)) ? (((/* implicit */int) (unsigned short)64583)) : (((/* implicit */int) arr_1 [i_0])))) >> ((((~(((/* implicit */int) var_15)))) + (112))))) : (((/* implicit */int) arr_0 [i_0 + 3]))));
    }
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((-(((/* implicit */int) var_6)))) | (((/* implicit */int) (unsigned short)15253)))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_6 [i_1]))) << (((((((/* implicit */int) ((signed char) ((unsigned short) (signed char)-77)))) + (102))) - (11)))));
    }
    for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = (unsigned short)64568;
        var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) ((unsigned short) var_16)))));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((arr_8 [i_2 - 2]), ((unsigned short)64568))))) ? ((-(((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_11 [i_2])))))) : ((-(((/* implicit */int) arr_9 [i_2 - 2]))))));
    }
    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_25 *= arr_15 [(signed char)2];
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            var_26 += ((/* implicit */unsigned short) (signed char)113);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_23 [(unsigned short)12] [(signed char)3] [i_4] [(signed char)9])) : (((/* implicit */int) (signed char)58))))) ? (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) (unsigned short)65501)))) : ((-(((/* implicit */int) var_18)))))) : ((+(((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) var_8))))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned short)18613)) : (((/* implicit */int) (signed char)14)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_9 [i_4 + 1])) : ((+(((/* implicit */int) arr_26 [i_7 - 3] [(unsigned short)22] [i_5] [i_4] [i_3])))))))))));
                            arr_27 [i_3] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) (signed char)-61))))), (((unsigned short) (unsigned short)13442))));
                            arr_28 [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_18 [i_3 - 3])))) < (min((((((/* implicit */int) arr_26 [i_3] [i_4 + 4] [i_5] [i_5] [i_7])) << (((((/* implicit */int) var_10)) - (51883))))), (((((/* implicit */int) arr_18 [(signed char)17])) % (((/* implicit */int) var_5))))))));
                            var_29 = ((/* implicit */signed char) min((((((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) arr_22 [i_7 + 1] [i_6] [i_5] [i_4])))) / ((+(((/* implicit */int) arr_25 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7])))))), (min((((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_4])))), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_23 [i_4] [(signed char)20] [i_6] [i_7 - 2])))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) (unsigned short)31041);
                        var_31 *= var_18;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4 - 2])) ? (((/* implicit */int) arr_31 [i_3 - 3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_4 + 2]))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-53)) ? ((+(((/* implicit */int) (unsigned short)65533)))) : ((+(((/* implicit */int) (signed char)67)))))))));
                            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_3 - 2] [i_3] [i_3 - 2] [i_3]))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_11] [i_11] [i_4] [i_8] [(unsigned short)21] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) arr_6 [i_8])) ? (((((/* implicit */int) (unsigned short)39255)) - (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_16 [i_3 + 1]))))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-8)))))))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)65514)))) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25)) - (((/* implicit */int) var_14))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)56)))))));
                            var_36 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_26 [i_8] [i_4] [i_8] [i_9] [i_11]), (var_16)))) / (((((/* implicit */int) arr_39 [i_11 - 1] [i_11] [(unsigned short)17] [(signed char)19] [i_8] [i_4] [i_3 + 1])) ^ (((/* implicit */int) (unsigned short)26)))))) % (((/* implicit */int) max((var_4), (arr_26 [i_3] [(signed char)0] [(unsigned short)8] [i_11 + 1] [i_11]))))));
                            var_37 = arr_18 [i_3];
                        }
                        arr_40 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_10 [i_3 - 3]))) << (((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_13)))))) - (57)))));
                        arr_41 [i_3] [i_3] [i_3 + 1] [i_4] [i_3 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_4] [i_4 - 3]))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_45 [(signed char)20] [i_12] = ((signed char) ((signed char) var_12));
            var_38 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (unsigned short)65535)))));
        }
        var_39 -= ((/* implicit */signed char) (((-(((/* implicit */int) var_3)))) | (((/* implicit */int) ((signed char) arr_22 [i_3] [i_3 - 1] [i_3 + 1] [i_3])))));
    }
    var_40 = ((unsigned short) (+(((/* implicit */int) var_6))));
    var_41 *= ((/* implicit */unsigned short) (signed char)82);
}
