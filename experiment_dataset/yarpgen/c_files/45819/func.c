/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45819
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_14 ^= min((-7), (((/* implicit */int) (signed char)-34)));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = ((signed char) ((((/* implicit */_Bool) 1701840941)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-75))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-79)) | (((/* implicit */int) (signed char)124))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (signed char)-127))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-49)) ? (64) : (-1994970708)));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (64) : (((/* implicit */int) (signed char)45))))) ? (((/* implicit */int) (signed char)114)) : (((((((/* implicit */int) (signed char)-127)) <= (((/* implicit */int) (signed char)98)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)77)) >= (((/* implicit */int) (signed char)5))))) : (((/* implicit */int) (signed char)127)))))))));
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)127), (var_3)))) ? (((((/* implicit */int) (signed char)127)) - (var_1))) : (((/* implicit */int) (signed char)-106))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                arr_10 [i_0] [i_2] [(signed char)2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)117))));
                var_20 = ((/* implicit */int) var_7);
                arr_11 [i_3] [i_3] = ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (signed char)74)));
            }
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)91)) * (((/* implicit */int) (signed char)-114))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 7; i_5 += 3) 
                {
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)38))));
                    arr_17 [i_0 + 1] [i_0] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)95)) & (((/* implicit */int) (signed char)64))));
                }
                var_23 = ((signed char) (signed char)127);
            }
        }
        var_24 = ((/* implicit */signed char) var_11);
        var_25 += min(((signed char)94), ((signed char)-86));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_26 = ((((/* implicit */int) (signed char)127)) + (-60));
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) / (((/* implicit */int) (signed char)114))));
            /* LoopSeq 1 */
            for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-27)) > (((/* implicit */int) (signed char)95))));
                var_29 ^= (-(((/* implicit */int) (signed char)114)));
                arr_26 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)114)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (136)))));
            }
        }
        var_30 = ((/* implicit */int) ((signed char) (signed char)97));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)114)) : (1033954732))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_9 = 3; i_9 < 19; i_9 += 3) 
    {
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) / (((/* implicit */int) (signed char)-24)))))));
        var_33 &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-109))));
        /* LoopSeq 1 */
        for (signed char i_10 = 3; i_10 < 17; i_10 += 3) 
        {
            arr_32 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)91)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)31))))));
            arr_33 [14] &= ((/* implicit */signed char) ((-548620859) % (548620859)));
        }
    }
    for (signed char i_11 = 4; i_11 < 16; i_11 += 2) 
    {
        var_34 = ((((/* implicit */_Bool) -2058000521)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-75)));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97)))))));
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_36 += max(((signed char)46), ((signed char)90));
        arr_41 [i_12] [i_12] = ((/* implicit */int) (signed char)60);
        var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-2)) ? (((((/* implicit */_Bool) (signed char)-2)) ? (-230022818) : (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) (signed char)-14)))) <= (((((/* implicit */int) (signed char)-6)) + (((/* implicit */int) (signed char)113))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_13 = 4; i_13 < 17; i_13 += 3) 
        {
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-47)) || (((/* implicit */_Bool) (signed char)-32))))) : (((/* implicit */int) (signed char)87))));
            arr_44 [(signed char)8] [i_13] [i_13] &= var_12;
            var_39 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (signed char)-107))));
        }
        for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            arr_49 [i_12] = (-(((/* implicit */int) (signed char)-62)));
            var_40 = ((/* implicit */int) var_6);
            var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)90)) | (((/* implicit */int) (signed char)-52))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 18; i_15 += 3) 
            {
                var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-85)) ? (2110903201) : (((/* implicit */int) (signed char)53))));
                arr_52 [i_12] = var_9;
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    var_43 &= ((/* implicit */signed char) ((1111995270) + (702826821)));
                    /* LoopSeq 3 */
                    for (signed char i_17 = 4; i_17 < 16; i_17 += 1) 
                    {
                        arr_57 [i_12] [i_14] [i_15] [i_12] [i_17] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)15))) >= (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_58 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)90))));
                        var_44 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) (signed char)-121)) : (((((/* implicit */int) (signed char)121)) % (-869551085)))));
                        arr_59 [(signed char)18] [i_14] [i_15] [i_16] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                    }
                    for (int i_18 = 3; i_18 < 18; i_18 += 1) 
                    {
                        arr_64 [i_12] [13] [i_12] [i_12] [i_18] = var_12;
                        arr_65 [i_12] [i_12] = ((/* implicit */signed char) ((869551091) / (284745536)));
                        arr_66 [i_12] [i_12] [i_12] = ((/* implicit */signed char) (-(869551085)));
                    }
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        var_45 &= ((/* implicit */int) ((signed char) (signed char)-121));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) -1210247703)) || (((/* implicit */_Bool) (signed char)-121)))))));
                    }
                }
                for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        var_47 = ((/* implicit */signed char) (+(1111995270)));
                        arr_76 [i_12] [i_21] [i_15] [i_20] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-24)) ? (1304480079) : (((/* implicit */int) (signed char)121)))) == (((/* implicit */int) (signed char)117))));
                        var_48 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) == (1111995270)));
                        var_49 = ((((/* implicit */int) (signed char)121)) * (((/* implicit */int) (signed char)-107)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        var_50 = ((/* implicit */signed char) (~(1304480094)));
                        var_51 &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) (signed char)75)) - (55)))));
                        arr_79 [i_12] [i_14] [i_15] [i_12] [i_22] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)6))));
                        arr_80 [i_12] [i_20] [i_15 + 1] [i_20] [i_22] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)89)) == (((/* implicit */int) (signed char)75))));
                    }
                }
                for (signed char i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    var_52 &= ((/* implicit */int) ((((/* implicit */int) (signed char)-87)) == (((/* implicit */int) (signed char)0))));
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)122))));
                    var_54 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)70)) / (-1304480099)));
                    var_55 += var_12;
                }
            }
        }
        /* vectorizable */
        for (signed char i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            var_56 = ((((/* implicit */int) (signed char)-27)) % (((/* implicit */int) (signed char)-120)));
            /* LoopSeq 1 */
            for (signed char i_25 = 1; i_25 < 18; i_25 += 4) 
            {
                var_57 = ((/* implicit */signed char) var_5);
                var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)30)))))));
            }
            /* LoopSeq 3 */
            for (signed char i_26 = 0; i_26 < 19; i_26 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_27 = 1; i_27 < 17; i_27 += 3) 
                {
                    arr_91 [i_27] [i_12] [i_24] [i_24] [i_12] [i_12] = ((/* implicit */signed char) 1304480081);
                    var_59 ^= ((((/* implicit */_Bool) (signed char)-63)) ? (-1157075752) : ((+(((/* implicit */int) (signed char)4)))));
                }
                arr_92 [i_12] [i_24] [i_12] = ((signed char) (signed char)-32);
                var_60 += ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-75))));
                /* LoopSeq 1 */
                for (signed char i_28 = 0; i_28 < 19; i_28 += 3) 
                {
                    var_61 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)21)) <= (((/* implicit */int) (signed char)61))));
                    arr_96 [i_24] &= ((/* implicit */int) ((((/* implicit */int) (signed char)32)) == (((/* implicit */int) (signed char)-110))));
                }
            }
            for (signed char i_29 = 0; i_29 < 19; i_29 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_30 = 2; i_30 < 16; i_30 += 4) 
                {
                    arr_104 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */int) (signed char)35)) <= (((/* implicit */int) (signed char)40))));
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 19; i_31 += 3) 
                    {
                        var_62 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)39)) > (548011938)));
                        var_63 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) -277896689))));
                    }
                    var_64 = ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)40)) : (-1304480122));
                    var_65 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) * (((/* implicit */int) (signed char)6))));
                }
                for (signed char i_32 = 0; i_32 < 19; i_32 += 4) 
                {
                    var_66 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-57))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89)))))));
                    arr_110 [i_12] [i_24] [i_12] [i_29] [i_32] = ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)-45)));
                    var_67 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)0))));
                }
                for (signed char i_33 = 0; i_33 < 19; i_33 += 2) 
                {
                    var_68 ^= var_9;
                    var_69 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-122)) | (-1304480094)));
                }
                var_70 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)9)) + (((/* implicit */int) (signed char)-27))));
                arr_115 [i_29] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */int) (signed char)-118)) < (var_5)));
                var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-31)) ? (((((/* implicit */_Bool) -204035745)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) (signed char)91))));
                var_72 = var_9;
            }
            for (signed char i_34 = 0; i_34 < 19; i_34 += 4) /* same iter space */
            {
                var_73 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-9)) : (277896689)));
                var_74 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)116))));
            }
            var_75 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -763467553)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)(-127 - 1)))));
        }
    }
    for (int i_35 = 4; i_35 < 15; i_35 += 2) 
    {
        arr_122 [i_35] [i_35] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-6)) <= (((/* implicit */int) (signed char)-118))));
        arr_123 [i_35] &= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-118)) / (((((/* implicit */_Bool) 277896689)) ? (277896702) : (((/* implicit */int) (signed char)82))))))));
    }
}
