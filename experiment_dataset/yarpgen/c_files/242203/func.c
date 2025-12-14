/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242203
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_3)), ((unsigned short)63657))))) << ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)13459)) < (-66969762))))))));
    var_13 *= ((/* implicit */unsigned short) (((+(max((((/* implicit */int) (unsigned short)44114)), (-15))))) + (min((((var_6) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((_Bool)1), (var_11))))))));
    var_14 -= ((/* implicit */unsigned short) var_10);
    var_15 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned short)21423);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)58779))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)21438)))))))));
            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (unsigned char)10)) / (((/* implicit */int) arr_0 [i_0]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((/* implicit */int) var_4))));
            var_19 |= (+(((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))));
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_5 [i_0] [i_0]));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43492)) ? (((/* implicit */int) (unsigned short)21420)) : (((/* implicit */int) var_9))));
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_21 = var_0;
            var_22 = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_0]));
            var_23 *= ((/* implicit */int) (!(arr_3 [i_0])));
            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_3])) > (((/* implicit */int) (unsigned char)240))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_25 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)));
                arr_18 [i_4] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)64786))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    arr_22 [(unsigned char)8] [i_4] = ((/* implicit */unsigned short) ((arr_3 [i_5]) ? (((/* implicit */int) arr_10 [i_0] [(signed char)6] [i_4])) : (var_6)));
                    var_26 *= ((/* implicit */unsigned short) ((var_8) ? (89095528) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))));
                    var_27 = ((/* implicit */_Bool) var_7);
                }
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_28 = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_16 [i_6])));
                    var_29 = ((/* implicit */_Bool) ((arr_15 [i_0]) | (((/* implicit */int) arr_24 [i_6]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 2; i_7 < 8; i_7 += 4) 
                    {
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64870)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_27 [(_Bool)1] [i_3] [i_4] [i_7] [i_7]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [i_7 - 2])));
                        arr_30 [i_6] [i_6] [i_4] [i_6] [i_7 + 3] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                        var_31 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_7 + 3]))));
                    }
                    var_32 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)44098));
                    var_33 = ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)4)));
                }
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_34 = (+(89095528));
                    arr_34 [i_3] [i_3] [i_3] [(_Bool)1] = ((((_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_0] [(unsigned char)10] [i_4] [i_4] [i_8])) : (((/* implicit */int) var_1))))));
                    arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_6);
                }
                var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)15574))));
                arr_36 [(unsigned short)6] [i_3] [i_4] = (((!((_Bool)1))) || (((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (103)))))));
            }
            for (unsigned short i_9 = 2; i_9 < 7; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_26 [i_0] [i_9] [i_9]))));
                    var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_9] [i_9 + 2] [i_9])) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_11))));
                    var_39 = ((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9] [i_11] [i_9 - 1] [i_3] [(signed char)2])) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned short)32512)));
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65523)) + ((+(-89095528))))))));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_38 [i_9 - 2] [i_9 - 2] [i_9])));
                }
                arr_45 [i_0] [i_3] [i_9] [(unsigned short)5] = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) ((unsigned char) (unsigned short)4))) : (((/* implicit */int) arr_28 [i_0] [i_3] [i_3] [i_9] [i_9] [i_3] [(unsigned short)7]))));
                var_41 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_9 + 4]))));
                var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_20 [(unsigned short)2] [i_0] [i_9 - 2] [i_0]))))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1440216612)) ? (((/* implicit */int) (unsigned short)56333)) : (((/* implicit */int) (unsigned char)182))));
            }
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */_Bool) max((var_44), ((((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_4))))));
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (_Bool)0))));
            var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) -218977140))))));
        }
        var_47 = ((/* implicit */signed char) var_3);
        var_48 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_5))));
    }
    for (unsigned short i_13 = 1; i_13 < 7; i_13 += 3) 
    {
        var_49 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned char)165)) >> (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (signed char)-117)))))));
        var_50 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (2147483647) : (((/* implicit */int) var_4)))) < (min((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)27)), ((unsigned short)65532))))))));
        var_51 = ((/* implicit */_Bool) min((((arr_26 [i_13] [i_13] [i_13 - 1]) ? (((/* implicit */int) arr_26 [i_13] [(signed char)0] [i_13 + 3])) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (unsigned char)118))))));
        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_13])) / (((/* implicit */int) (unsigned short)17011))))) ? (var_6) : (((/* implicit */int) ((_Bool) var_9)))))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)9904)))) : (((/* implicit */int) var_8))));
    }
}
