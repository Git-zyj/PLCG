/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190528
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
    var_12 = ((/* implicit */signed char) var_11);
    var_13 = ((/* implicit */signed char) min((431760598U), (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-72)))) != (((var_0) - (var_0))))))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_11)) <= ((+(var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) : (var_5)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) var_3);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)95))) ^ (arr_2 [i_0])));
        var_17 &= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-72))))) ? ((-(((/* implicit */int) (unsigned short)54780)))) : (((/* implicit */int) (unsigned short)43396)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((_Bool) 418857801)) ? (((/* implicit */int) max((arr_6 [i_3] [i_0]), (arr_6 [i_2] [i_1 - 2])))) : ((+(arr_10 [i_0] [i_1 + 2] [i_1 + 2] [(signed char)19])))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned short)1] [(signed char)17] [i_0] [i_2] [i_2]))) <= (14813349807650629101ULL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max(((+(var_1))), (min((-892981638), (arr_15 [i_4])))));
        var_22 = ((((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_21 [i_4] = var_6;
            var_23 = ((/* implicit */unsigned int) min((((((var_0) + (2147483647))) << (((((/* implicit */int) var_3)) - (5820))))), (((/* implicit */int) var_3))));
        }
        var_24 = ((/* implicit */unsigned short) ((unsigned int) var_0));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_6 [i_6] [i_6])) ? (3460480861U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43396)) ? (((/* implicit */int) arr_26 [i_6] [i_7])) : (arr_24 [i_7])))))) + (arr_28 [i_7] [i_7] [i_7])));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_26 = ((/* implicit */_Bool) var_0);
                var_27 = ((/* implicit */unsigned short) max((arr_18 [i_6] [i_7] [i_8]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)9115)) : (var_6)))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (unsigned short)41384)) ? (var_9) : (((/* implicit */int) (unsigned char)167))))))));
            }
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                var_28 -= ((/* implicit */_Bool) var_2);
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) ((892981637) <= (((/* implicit */int) var_8))))), (((((-2086422590) + (2147483647))) >> (((/* implicit */int) arr_33 [i_6] [i_7] [i_6]))))));
                arr_35 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-91))));
            }
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
        {
            arr_39 [(unsigned short)0] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((var_0), (((/* implicit */int) (_Bool)1))))))) ? (min((((((/* implicit */_Bool) (unsigned short)33244)) ? (var_5) : (((/* implicit */unsigned int) -1244046205)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-3)), (arr_22 [i_6])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) -892981638);
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((-(var_6)))))), ((-(max((12227132191336862759ULL), (((/* implicit */unsigned long long int) (signed char)-14))))))));
                    var_32 = ((/* implicit */unsigned long long int) arr_34 [i_10] [i_10]);
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_13 = 1; i_13 < 19; i_13 += 3) 
                {
                    var_33 = ((/* implicit */unsigned short) ((-892981646) > (((/* implicit */int) arr_20 [i_13 + 1] [i_13 + 1]))));
                    arr_47 [i_6] [i_6] [7] [i_11] [i_6] = ((/* implicit */signed char) arr_1 [i_6]);
                    var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2016488917U)) ? (arr_46 [i_13 + 2] [i_10] [i_10] [i_13 + 2]) : (((/* implicit */unsigned int) 1410904782))));
                    arr_48 [i_10] [i_6] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (511411007U));
                }
                for (int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_35 *= min(((signed char)95), (arr_11 [i_6] [i_10] [i_11] [i_14]));
                    var_36 = (+(((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                    var_37 = 3778782697U;
                }
                for (signed char i_15 = 2; i_15 < 20; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 4) 
                    {
                        var_38 = ((/* implicit */signed char) 2601849663U);
                        arr_57 [i_6] [i_10] [i_11] = (-(max((((/* implicit */unsigned int) (+(2054728406)))), ((~(2656847414U))))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 18; i_17 += 1) 
                    {
                        arr_62 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_8 [i_6])) * (((/* implicit */int) (unsigned char)88)))));
                        arr_63 [i_6] [i_11] [i_11] [i_10] [i_6] [i_6] = ((/* implicit */unsigned short) (~(-2054728407)));
                        var_39 = ((/* implicit */unsigned long long int) ((_Bool) ((1900188571) >= (((((/* implicit */_Bool) 1177107619U)) ? (((/* implicit */int) arr_54 [i_6])) : (var_9))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        arr_68 [i_6] [i_6] [i_10] [i_11] [i_15] [(unsigned short)18] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)26122)) << (((/* implicit */int) ((((((/* implicit */_Bool) -1987000388)) ? (((/* implicit */int) var_10)) : (arr_2 [i_6]))) <= (((/* implicit */int) ((signed char) 4137036035U))))))));
                        arr_69 [i_6] [i_10] [i_11] [i_6] [i_11] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_15 + 1]))) ^ (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) 742387776U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_46 [i_6] [i_6] [i_15 - 1] [i_18 + 2]) > (arr_46 [i_6] [i_6] [i_15 - 2] [i_18 - 2]))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        arr_72 [i_6] [i_6] = ((/* implicit */unsigned short) (-(arr_25 [i_6])));
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) min((((signed char) arr_36 [i_10] [i_10])), (((/* implicit */signed char) ((1177107620U) != (((/* implicit */unsigned int) arr_2 [i_15 - 1]))))))))));
                        arr_73 [i_6] [i_6] [i_6] [i_11] [i_6] [i_6] [i_19] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)34)) ? (var_0) : ((+(2054728406))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_20 = 4; i_20 < 19; i_20 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_2)) ? (3117859676U) : (((/* implicit */unsigned int) var_6))))))));
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (10710688173859256161ULL)));
                }
            }
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
            {
                var_43 &= max((388205643), ((+(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) var_5))))))));
                var_44 = ((/* implicit */_Bool) arr_77 [i_21] [i_10] [i_6]);
                arr_79 [i_6] = ((/* implicit */unsigned int) (signed char)-92);
            }
            /* vectorizable */
            for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                var_45 = ((/* implicit */int) (-(246651329U)));
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_10] [i_22])) ? (arr_12 [i_6] [i_10] [i_22] [i_22]) : (((/* implicit */unsigned long long int) 2719119850U))));
            }
        }
        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) (unsigned char)89);
            arr_86 [i_6] [i_6] [i_23] = ((/* implicit */unsigned int) arr_0 [i_6]);
        }
        arr_87 [(signed char)14] [i_6] &= ((signed char) ((((/* implicit */unsigned int) -1770120521)) != (arr_27 [i_6] [i_6] [(unsigned short)8])));
    }
    var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_7)));
}
