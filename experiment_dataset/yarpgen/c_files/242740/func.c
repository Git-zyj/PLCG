/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242740
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
    var_17 = ((/* implicit */signed char) ((short) var_7));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) var_10);
                    var_19 = (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) max(((unsigned short)63), (((/* implicit */unsigned short) var_0))))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0 - 2] &= ((/* implicit */short) ((((/* implicit */_Bool) max((var_13), (var_11)))) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)31084)) : (((/* implicit */int) var_11))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)11288))));
            var_20 = ((/* implicit */short) (unsigned short)52347);
            var_21 &= ((/* implicit */unsigned int) ((signed char) (signed char)127));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)55941), (((/* implicit */unsigned short) (short)-453))))))))));
            arr_17 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (short)29083))));
        }
    }
    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) var_6);
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30673))))) ^ (max((arr_7 [(unsigned short)10] [(unsigned short)10]), (var_12)))));
        var_25 ^= ((/* implicit */unsigned short) ((_Bool) (signed char)104));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        var_26 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_7)))));
        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_0))) >> (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) ((_Bool) var_16))) : (((/* implicit */int) max((((/* implicit */short) var_7)), (var_3))))))));
            var_29 |= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)55299)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((signed char) (unsigned short)11272)))));
            var_30 = ((/* implicit */signed char) min(((short)-30668), (((/* implicit */short) (signed char)-104))));
            /* LoopSeq 3 */
            for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                arr_28 [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)27)), ((unsigned short)26526)));
                var_31 ^= ((/* implicit */unsigned short) var_7);
            }
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) (short)-29100)))))))));
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (!(((((/* implicit */int) (short)29088)) < ((+(((/* implicit */int) (signed char)-118)))))))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_12))));
                            var_35 = ((signed char) (-(((/* implicit */int) arr_33 [(unsigned short)12] [i_8 - 1] [i_11 + 2] [i_10 - 2] [i_7]))));
                        }
                    } 
                } 
                arr_35 [(unsigned short)2] [i_7] [i_10] = ((/* implicit */_Bool) var_12);
            }
            for (signed char i_13 = 1; i_13 < 21; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((short) 184009806U))) ? (((((/* implicit */_Bool) (short)30113)) ? (((/* implicit */int) (unsigned short)28687)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_6)))))) * (((/* implicit */int) max(((short)-453), (((/* implicit */short) var_16)))))));
                    var_37 = ((signed char) (signed char)82);
                }
                for (unsigned int i_15 = 3; i_15 < 23; i_15 += 2) 
                {
                    arr_45 [i_7] [i_8] [i_13] [i_7] = ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned short) min(((((-(((/* implicit */int) var_1)))) & (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_13)))))));
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) ((_Bool) var_3))) / (((/* implicit */int) max((min((var_1), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) max((((/* implicit */short) var_0)), ((short)32767))))))))))));
                        arr_48 [i_7] [i_7] [i_7] [i_13 + 2] [i_15] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((var_16), (var_16))))));
                        var_40 &= ((/* implicit */signed char) min(((unsigned short)28683), ((unsigned short)52261)));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_52 [i_7] [i_7] [i_7] [i_15] [i_17] = ((/* implicit */signed char) min((((((/* implicit */int) (short)453)) + (((/* implicit */int) arr_38 [i_8 + 3] [i_17])))), (((/* implicit */int) var_11))));
                        var_41 = ((/* implicit */signed char) arr_38 [i_7] [i_8 + 3]);
                        arr_53 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)243)) - (((/* implicit */int) (unsigned short)36849))));
                    }
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_42 = ((/* implicit */short) (+((-(((/* implicit */int) (short)6218))))));
                    var_43 = ((/* implicit */short) ((_Bool) ((unsigned char) (unsigned char)156)));
                    var_44 = (signed char)-14;
                    /* LoopSeq 3 */
                    for (signed char i_19 = 3; i_19 < 22; i_19 += 4) 
                    {
                        arr_60 [i_7] [i_7] = ((/* implicit */unsigned short) (short)-1);
                        var_45 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (var_10)))), (((unsigned short) (unsigned short)54248))));
                        arr_61 [i_7] [(signed char)11] [(signed char)11] [i_18 - 1] [i_7] = ((/* implicit */short) var_12);
                        arr_62 [i_7] [i_18] [i_13 + 2] [i_8 + 2] [i_8 + 2] [(short)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((min((((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_33 [i_7] [i_8 - 1] [i_8 - 1] [i_18 - 1] [i_19]))))), (((((/* implicit */int) (unsigned short)28683)) | (((/* implicit */int) (short)5178)))))) - (29731)))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 23; i_20 += 4) 
                    {
                        var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))));
                        arr_67 [i_8] [i_7] [i_13] [i_8] [i_20 - 1] [i_20] [i_8 + 2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)5178))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((1912373007U), (((/* implicit */unsigned int) (unsigned short)45355)))))));
                        arr_70 [i_21] [(unsigned short)22] [i_21] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36853)) ? (((/* implicit */int) (unsigned short)52261)) : (((/* implicit */int) (short)-22981))))), (max((((/* implicit */unsigned int) (short)5178)), (773759969U)))));
                        var_48 = ((/* implicit */short) ((_Bool) (signed char)-30));
                        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((unsigned short) (_Bool)1)))));
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36869)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3521207326U)));
                    }
                    var_51 = ((/* implicit */short) ((3939151584U) << (((((/* implicit */int) (unsigned short)42768)) - (42742)))));
                }
                arr_71 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) arr_40 [i_7] [i_7] [i_8 - 1] [(_Bool)1]);
            }
        }
        for (signed char i_22 = 1; i_22 < 21; i_22 += 3) /* same iter space */
        {
            var_52 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)36869))), (var_15)))), ((~(((/* implicit */int) (signed char)58))))));
            arr_74 [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_16))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_12)))));
            var_53 = ((/* implicit */unsigned short) min(((-(((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))))), ((-(((/* implicit */int) (short)2275))))));
        }
        for (signed char i_23 = 1; i_23 < 21; i_23 += 3) /* same iter space */
        {
            var_54 = ((/* implicit */_Bool) ((unsigned short) 3490795858U));
            arr_77 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 3521207336U))));
            /* LoopSeq 1 */
            for (signed char i_24 = 4; i_24 < 22; i_24 += 4) 
            {
                var_55 = ((/* implicit */short) (((~(((/* implicit */int) var_4)))) * (max((((/* implicit */int) ((short) var_10))), (((((/* implicit */_Bool) arr_75 [i_7] [i_7] [(unsigned short)3])) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) var_15))))))));
                var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) var_6))));
                var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) (unsigned char)210))));
            }
        }
        var_58 = ((/* implicit */_Bool) var_5);
        arr_80 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((short) var_4)))) && (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] [(signed char)17])))));
    }
}
