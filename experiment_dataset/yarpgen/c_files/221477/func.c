/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221477
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
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12860041804673001886ULL)));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) (signed char)87))), ((+(arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((_Bool) var_14)))))));
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_3 [i_1 - 2]))))))), ((~((+(18302684452031847389ULL)))))));
        }
        /* LoopSeq 3 */
        for (int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) (-(max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))));
            var_23 *= max((((((/* implicit */_Bool) 3553337622745620228LL)) ? (2658596280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned char)130), (((/* implicit */unsigned char) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0 - 4] [i_0 - 4] [i_0 - 4]))) % (min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)254))), (min((arr_5 [i_0] [(unsigned short)0]), (((/* implicit */unsigned long long int) (unsigned char)128))))))));
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)139)) / (((int) (-(-3553337622745620228LL))))));
                        arr_14 [i_0 - 2] [i_4] [i_0 - 2] [8ULL] = ((/* implicit */_Bool) arr_3 [i_2]);
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 - 3] [i_0 - 4])) ? (((/* implicit */unsigned long long int) arr_1 [i_2 + 1])) : (arr_9 [i_0 - 2] [i_0 - 4] [i_0 - 3])))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_2 + 1]), (arr_1 [i_2 - 2])))) : (max((var_2), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2])))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_27 ^= ((/* implicit */unsigned short) min((((int) ((signed char) arr_2 [i_0]))), (arr_17 [i_0])));
            /* LoopSeq 2 */
            for (int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                arr_20 [i_0 - 3] [i_0 - 3] [i_5] = ((/* implicit */int) (((((_Bool)0) ? (-3553337622745620228LL) : (((/* implicit */long long int) 2658596280U)))) - (((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_16)))))));
                var_28 = (~(arr_12 [i_5] [(unsigned short)12] [i_6 - 2] [i_5] [i_5] [i_5]));
                var_29 *= ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)8521))) : (-13LL))));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned char) min(((signed char)-93), (((/* implicit */signed char) (_Bool)0))))), (var_14)))))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) (unsigned short)7306)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) (+(arr_15 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0 - 1] [i_0])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) arr_7 [18LL] [i_5]))))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3]))))) ^ (((/* implicit */int) max((arr_22 [i_0] [i_5] [i_5] [i_5] [i_5] [i_0]), (arr_22 [i_0 + 1] [i_5] [i_5] [i_5] [i_8] [i_8]))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)119))))), (((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [3] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [9LL] [17]) : (arr_18 [i_0 - 2] [(_Bool)1] [i_6 - 3] [i_8])))))));
                    var_33 = (unsigned short)30720;
                    var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)126))))))))));
                    arr_26 [i_8] [i_5] [i_5] [i_0] = (+((~(arr_23 [i_6 - 3] [i_6 - 3] [i_5]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_25 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_5] [i_5])) : (((/* implicit */int) arr_25 [i_0 - 3] [i_0 - 1] [i_0 - 4] [i_5] [8])))))));
                    var_36 = ((/* implicit */unsigned int) ((long long int) var_18));
                    arr_30 [i_0 + 1] [i_5] [i_5] [i_9] [(_Bool)1] [i_9] = ((/* implicit */long long int) min((((int) arr_6 [i_0 - 4] [i_0 - 1])), (arr_11 [i_5] [i_5] [i_6 + 1] [i_9])));
                    arr_31 [i_9] [i_5] [i_6] [i_6] [i_5] [13LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) min(((_Bool)1), ((!(((/* implicit */_Bool) 1279365597604378386ULL))))));
                        arr_34 [i_5] [i_9] [3] [i_6 - 2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_0] [i_5] [i_6 - 3] [i_9] [i_10]))));
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) var_13);
                        arr_37 [i_0 - 3] [i_9] [i_6] [i_9] [i_5] [i_5] = ((/* implicit */signed char) arr_17 [i_5]);
                    }
                    for (unsigned short i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        var_39 &= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_18 [i_12] [i_12 + 2] [i_12 + 2] [i_12 + 3]), (((/* implicit */unsigned int) arr_0 [i_9]))))))) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_5] [i_6 + 1] [i_9])) : (min((((/* implicit */unsigned long long int) arr_22 [(signed char)8] [i_0] [i_0] [i_9] [i_9] [i_0])), (min((12860041804673001886ULL), (((/* implicit */unsigned long long int) arr_33 [i_0 - 3] [i_5] [i_6 - 1] [i_6 - 1] [i_12 + 3]))))))));
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9864457534359136604ULL))));
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_41 &= ((/* implicit */int) ((unsigned int) ((signed char) min((((/* implicit */unsigned int) -2133216919)), (arr_13 [12U] [i_0] [12U] [(unsigned short)0] [i_14 - 1])))));
                        var_42 = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned short) (((-(arr_5 [i_13] [i_13]))) <= (min((0ULL), (((/* implicit */unsigned long long int) (signed char)-93)))))))));
                        var_43 &= ((/* implicit */unsigned int) min((max((0LL), (((/* implicit */long long int) arr_18 [i_6 - 2] [i_6 - 2] [i_0 - 3] [i_0 - 2])))), (max(((~(arr_42 [i_5]))), (((/* implicit */long long int) max((15U), (((/* implicit */unsigned int) (unsigned short)896)))))))));
                        arr_45 [i_5] [i_13] [i_5] = ((/* implicit */long long int) (-(max(((~(((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) ((unsigned short) 3197275182474504552LL)))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_15] [i_5])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536838144)) ? (((/* implicit */int) (_Bool)0)) : (2112882111)))))))));
                        var_45 = ((/* implicit */unsigned int) arr_42 [i_0 + 1]);
                        arr_48 [(_Bool)1] [i_5] [i_5] [i_13] [i_15] = arr_13 [i_0] [i_5] [i_6 - 3] [i_13] [(signed char)15];
                        var_46 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned short)39979)), (max((((/* implicit */unsigned long long int) arr_23 [i_5] [i_6 - 2] [i_5])), (14830838646875853555ULL))))));
                        var_47 = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_18))) ? (((/* implicit */int) arr_19 [i_6 + 1] [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) max((arr_32 [i_15] [i_13] [i_5] [i_6 - 3] [i_5] [(signed char)14]), (((/* implicit */signed char) var_16)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        arr_52 [i_5] [i_5] [i_6 - 3] [i_5] [i_16] = ((unsigned short) (~(((/* implicit */int) arr_46 [i_6 - 3] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2]))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3553337622745620228LL)) || (((/* implicit */_Bool) 1462517842U))));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_5] [i_0 - 2]))) ? (1875344825) : (((/* implicit */int) ((_Bool) arr_51 [i_5] [i_6 - 2] [i_6] [i_13])))));
                        arr_53 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [8] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_51 [i_5] [i_6] [i_5] [i_5])))) || (((/* implicit */_Bool) (+(arr_2 [7])))))))));
                    }
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_49 [i_6 - 1]))));
                        var_51 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_38 [i_5] [i_5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0 - 3] [i_0 - 3] [i_6 + 1] [i_13] [i_17])) ? (arr_51 [i_5] [i_13] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)137)))) : (arr_5 [i_6 - 1] [i_0 + 1]))));
                    }
                    var_52 *= ((/* implicit */_Bool) (unsigned char)124);
                }
                var_53 = ((/* implicit */unsigned long long int) arr_28 [i_0 + 1] [i_0 - 3] [i_5] [i_5] [i_0 + 1] [i_6 - 1]);
            }
            for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                var_54 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_18] [i_5])) ? (arr_3 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 - 2] [i_0 - 4] [i_5] [i_18] [i_18] [i_18]))))), (((/* implicit */unsigned long long int) max(((unsigned short)24234), ((unsigned short)63099))))));
                var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_19 [i_0 - 3] [i_0 - 2] [i_18])), (min((var_7), (((/* implicit */unsigned char) arr_0 [i_18]))))))), (max((((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_18] [i_18] [i_18]))), ((+(4480918798494531684ULL))))))))));
                var_56 = ((/* implicit */unsigned long long int) (+(max((arr_13 [i_18] [i_5] [i_0 - 4] [i_18] [i_5]), (arr_13 [i_0 - 2] [i_5] [i_0 + 1] [i_5] [i_18])))));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            arr_62 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) -2112882086)), (64232750U)));
            arr_63 [i_0] [(signed char)2] = min(((-(min((var_12), (arr_55 [i_0] [i_0 + 1] [i_0 - 1]))))), (((/* implicit */int) ((signed char) min((arr_35 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_19]), (((/* implicit */long long int) var_14)))))));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 1) 
    {
        arr_66 [i_20] [(signed char)4] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_65 [i_20] [i_20])) ? (arr_65 [i_20] [(unsigned short)8]) : (arr_65 [i_20] [i_20])))));
        var_57 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) arr_65 [i_20] [(signed char)19]))), (arr_64 [i_20] [i_20])))), (min((min((arr_65 [(signed char)12] [i_20]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))));
    }
    for (int i_21 = 1; i_21 < 11; i_21 += 2) 
    {
        arr_69 [i_21 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_14)), (var_1))))) ^ (((/* implicit */int) ((unsigned short) arr_42 [6])))));
        var_58 = ((/* implicit */unsigned int) var_6);
        var_59 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)896))));
    }
    for (short i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        var_60 = ((/* implicit */signed char) min(((unsigned short)49416), ((unsigned short)2451)));
        var_61 = ((/* implicit */unsigned char) 444320707);
    }
    var_62 = ((/* implicit */unsigned int) max((var_62), (((/* implicit */unsigned int) (-(1875344808))))));
    var_63 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_64 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)114))))))), ((!(((/* implicit */_Bool) (+(arr_39 [i_23] [i_23] [i_23] [i_23] [i_23]))))))));
        arr_77 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) -1043570305)), (max((arr_71 [i_23]), (((/* implicit */unsigned short) var_17)))))))) % (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)896))))), (min((3461118447698910950LL), (((/* implicit */long long int) (unsigned char)15))))))));
        var_65 *= arr_36 [i_23] [i_23] [i_23] [i_23] [i_23];
        var_66 = ((/* implicit */int) ((((/* implicit */int) var_0)) > (((int) arr_70 [i_23]))));
        var_67 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (14478789835935132672ULL) : (((/* implicit */unsigned long long int) 2668419284U)))))));
    }
}
