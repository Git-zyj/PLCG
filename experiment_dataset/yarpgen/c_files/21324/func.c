/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21324
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
    var_18 += ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1165754879497549441ULL)) && (((/* implicit */_Bool) (+(var_0))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) ((unsigned short) var_3))))));
        var_21 = ((long long int) var_9);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
            arr_5 [(_Bool)1] &= ((/* implicit */_Bool) var_8);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) -23))));
                var_24 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(signed char)9]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_25 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned long long int) var_0))))) ? (812986971U) : (var_17));
                            var_26 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_27 = ((/* implicit */long long int) var_17);
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 4294967287U))) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (4133562798903930043ULL))))));
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 12; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */int) ((unsigned long long int) (!((_Bool)1))));
                        var_30 = ((unsigned short) ((((/* implicit */_Bool) -969036039031473486LL)) ? (var_8) : (((/* implicit */int) (unsigned short)25883))));
                        arr_25 [i_0] = ((/* implicit */signed char) var_2);
                    }
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) -176401711333654375LL))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) - (1289386641960249366LL)))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_7] [i_9]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) var_14))));
                        var_34 = arr_7 [i_0] [(unsigned short)11] [i_0 + 1];
                    }
                    for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        arr_30 [i_10] [i_0] [i_3] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_0])))))));
                        var_35 = ((/* implicit */unsigned short) ((signed char) ((_Bool) (~(var_6)))));
                        arr_31 [i_10] [i_7] [i_0] [i_1] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                }
                for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_9))))));
                    var_37 = ((/* implicit */unsigned char) arr_28 [i_0]);
                    var_38 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_10))))));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_40 = ((/* implicit */unsigned short) (short)5257);
                    var_41 = arr_32 [i_0] [i_0] [i_0 - 1] [i_12];
                }
            }
            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_12))) <= (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_15)))))));
        }
        for (unsigned int i_13 = 4; i_13 < 11; i_13 += 2) 
        {
            var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_11))) + (2147483647))) >> (((((unsigned int) 2990643334944655072LL)) - (2638481103U)))));
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [11ULL] [i_13] [2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)-113)))) : (((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_10))))) << ((((-(var_17))) - (804131925U)))))));
            var_44 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) var_16)) ^ (var_0))) : (((/* implicit */long long int) var_16)))) < (((/* implicit */long long int) (-((+(0U))))))));
        }
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_45 &= ((/* implicit */unsigned char) var_9);
            var_46 ^= ((/* implicit */_Bool) var_2);
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_47 = (!(((/* implicit */_Bool) arr_38 [i_0] [i_0 + 1] [i_0])));
            var_48 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)41442))))));
            var_49 = ((/* implicit */unsigned char) arr_26 [8LL] [i_15] [i_15]);
            var_50 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (((-(var_11))) << (((((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0])) - (95)))))) : (((/* implicit */unsigned char) (((-(var_11))) << (((((((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0])) - (95))) + (45))))));
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
        }
        /* vectorizable */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) (~(var_13))))));
            var_52 = ((/* implicit */unsigned int) min((var_52), (var_12)));
        }
    }
    /* vectorizable */
    for (signed char i_17 = 2; i_17 < 11; i_17 += 1) /* same iter space */
    {
        var_53 = ((/* implicit */int) var_13);
        var_54 = (signed char)-6;
        /* LoopSeq 1 */
        for (int i_18 = 1; i_18 < 9; i_18 += 1) 
        {
            var_55 = (_Bool)1;
            arr_56 [i_18] [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)15))));
            /* LoopSeq 1 */
            for (int i_19 = 4; i_19 < 11; i_19 += 4) 
            {
                arr_60 [(signed char)12] [i_18] [i_19] = ((/* implicit */long long int) ((signed char) var_4));
                var_56 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 84882499)))));
                var_57 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-102))));
            }
        }
        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) (~(var_8))))));
    }
    for (unsigned char i_20 = 1; i_20 < 8; i_20 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_21 = 3; i_21 < 11; i_21 += 3) 
        {
            var_59 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_11) : (var_13)))));
            var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_8))))))));
            var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_11)) : (var_0)))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_22 = 3; i_22 < 11; i_22 += 3) 
        {
            for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
            {
                {
                    var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (566332666257177961LL)))))));
                    arr_72 [i_22] = (-(((/* implicit */int) var_15)));
                    var_63 = ((/* implicit */int) var_11);
                    var_64 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
        arr_73 [(_Bool)1] = ((/* implicit */long long int) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_53 [3ULL] [i_20])) ? (((/* implicit */unsigned long long int) var_8)) : (6ULL))))));
        var_65 = ((/* implicit */unsigned long long int) (unsigned short)65535);
        var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(308642896U))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_20] [i_20])) >> ((((~(9063835458474119772ULL))) - (9382908615235431843ULL)))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(var_16)))))));
    }
}
