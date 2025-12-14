/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216425
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned char) (unsigned char)164))) : ((~(((/* implicit */int) var_14)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned char)5)))))) && (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)1])))), (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_7))))))))));
                    var_20 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) (unsigned char)205)), (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)129))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            arr_11 [i_0] [(unsigned char)13] = var_14;
            /* LoopSeq 3 */
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                arr_16 [i_0] = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)4)))))));
                arr_17 [i_4] = ((/* implicit */unsigned char) min((max((((/* implicit */int) (unsigned char)244)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)139))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 17; i_5 += 1) 
                {
                    arr_20 [i_5] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)46))) ? (((/* implicit */int) min((arr_9 [i_5 - 4] [i_5 + 4]), (var_15)))) : (((/* implicit */int) min(((unsigned char)242), ((unsigned char)95))))));
                    var_21 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_5 - 1] [i_5] [i_5])))))));
                    arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)55)) < (((/* implicit */int) (unsigned char)32))));
                }
                var_22 += ((unsigned char) min((max((var_12), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_10 [i_0] [i_4])))))));
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_23 = (unsigned char)24;
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_6])) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)163))) : ((+(((/* implicit */int) arr_9 [i_3] [i_3]))))));
                arr_24 [i_6] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_1)))))) ? ((+(((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_3] [i_6]))))) : (min((((/* implicit */int) arr_22 [i_0] [i_0] [i_6])), (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))))));
                var_25 -= ((unsigned char) ((((((/* implicit */int) var_12)) + (((/* implicit */int) arr_13 [i_3])))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_4 [i_0] [i_3] [i_0] [i_6]))))));
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_10))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_0] [i_3] [i_6])) : (((/* implicit */int) arr_22 [i_0] [i_3] [i_6])))))))) : (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)216)))), (((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0] [i_0])))))));
            }
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) || (((/* implicit */_Bool) ((unsigned char) ((unsigned char) (unsigned char)180)))))))));
                    arr_30 [i_0] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)238)), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)248))))));
                    arr_31 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_0] [i_3] [i_7])) << (((((/* implicit */int) var_18)) - (187)))))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_28 [i_8] [i_3] [i_3] [i_0]), ((unsigned char)176))))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_13 [i_7])))) * (((/* implicit */int) min((arr_13 [i_0]), ((unsigned char)102))))));
                }
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        arr_37 [i_0] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_7])) : (((/* implicit */int) arr_10 [i_0] [i_0]))))));
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_0]))));
                        var_29 |= ((/* implicit */unsigned char) (((+(((/* implicit */int) max((var_0), (var_16)))))) == (((((/* implicit */int) min(((unsigned char)49), (arr_2 [i_3] [i_10])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) == (((/* implicit */int) (unsigned char)5)))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) (unsigned char)254);
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned char)24), (arr_27 [i_0] [i_3] [i_7] [i_9] [i_11]))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_23 [i_0] [i_0] [i_0]), (var_14)))) <= ((~(((/* implicit */int) arr_35 [i_0] [i_3] [i_7] [i_0]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_0] |= (unsigned char)191;
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)217))) : ((-(((((/* implicit */int) (unsigned char)11)) - (((/* implicit */int) (unsigned char)245))))))));
                        arr_48 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) min((arr_43 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17]), (arr_6 [i_9] [i_3] [i_3])))))));
                    }
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)10] [i_7] [i_9])) ? (((/* implicit */int) arr_15 [i_9] [i_3] [i_0])) : (((/* implicit */int) (unsigned char)117))))) ? (((/* implicit */int) max((var_18), (var_10)))) : (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_18))))));
                }
                arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(unsigned char)18] [i_3] [i_3] [i_3] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_3] [(unsigned char)18]))))) : (((/* implicit */int) (unsigned char)133))))) || (((/* implicit */_Bool) ((unsigned char) ((unsigned char) (unsigned char)183))))));
            }
            var_34 |= ((unsigned char) ((unsigned char) (unsigned char)84));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_14])) != (((/* implicit */int) var_6)))) ? (((((/* implicit */int) (unsigned char)237)) + (((/* implicit */int) (unsigned char)179)))) : (((/* implicit */int) (unsigned char)67))));
            var_36 += ((unsigned char) arr_5 [i_13]);
        }
        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            arr_58 [(unsigned char)0] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)248)) - (((/* implicit */int) (unsigned char)247)))), (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)34))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)45)) >> (((((/* implicit */int) (unsigned char)127)) - (111))))))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
            var_37 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_52 [i_15] [(unsigned char)5]), ((unsigned char)35)))) ? (((/* implicit */int) arr_52 [i_13] [i_13])) : ((~(((/* implicit */int) (unsigned char)180))))));
            arr_59 [i_13] [(unsigned char)10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)245))));
        }
        var_38 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_43 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        arr_60 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_36 [i_13] [i_13] [i_13] [(unsigned char)18] [i_13] [i_13] [i_13]), (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_26 [i_13] [i_13] [i_13] [i_13])))) : (((((/* implicit */_Bool) max((var_16), (var_7)))) ? (((/* implicit */int) min((var_5), ((unsigned char)176)))) : (((/* implicit */int) ((unsigned char) arr_56 [i_13] [i_13])))))));
    }
}
