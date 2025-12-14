/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224179
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
    var_20 = var_4;
    var_21 = ((/* implicit */unsigned short) ((((long long int) var_7)) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 1641327679U))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_4 [(unsigned char)15] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_16)))))) ? (((/* implicit */unsigned long long int) min((arr_3 [i_0 + 3]), ((~(var_0)))))) : (max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_8))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((max((arr_1 [i_0 + 1] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 - 1]))) ^ ((~(arr_1 [i_0 + 1] [i_0 - 1])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_23 -= min((min(((~(((/* implicit */int) (signed char)-108)))), (((/* implicit */int) ((signed char) (unsigned short)16793))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (+(var_0))))))));
            var_24 = ((/* implicit */unsigned char) 1487077265U);
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(15026471832063431938ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0 + 3])) != (var_8)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_2]) : (2807890031U))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((var_18), (((/* implicit */unsigned char) (signed char)108))))))))))))));
            arr_9 [i_0] = ((/* implicit */int) arr_0 [i_0]);
            arr_10 [i_2] [i_2] [2LL] = ((/* implicit */short) (~((((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [15LL])))) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_2] [i_0])))), ((+(((/* implicit */int) (signed char)51))))))) ? (min((3420272241646119677ULL), (((/* implicit */unsigned long long int) 5807435419329760042LL)))) : ((~((~(var_16)))))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_13 [i_0] [i_3] = (~((~(((/* implicit */int) arr_12 [i_0 + 3] [i_3])))));
            var_27 = ((/* implicit */unsigned int) (signed char)-108);
        }
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_28 |= ((/* implicit */unsigned char) var_10);
            arr_18 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_15 [i_4] [i_5])))) ? (-5807435419329760042LL) : (((/* implicit */long long int) ((int) (unsigned char)5)))));
        }
        for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)51))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3420272241646119678ULL)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)107)))))));
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            arr_26 [i_7] [(unsigned short)21] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)-89)) != (arr_14 [i_7] [i_4]))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_31 [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)107)) % (((/* implicit */int) (signed char)96))));
                        arr_32 [i_4] [i_7] [i_8] [i_8] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8806878890641955416LL), (((/* implicit */long long int) (unsigned char)255))))) ? (max((((/* implicit */unsigned long long int) arr_24 [i_4])), (6906724748876313314ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [2ULL] [8])) ? (((/* implicit */long long int) var_3)) : (var_2))))))) ? (min((min((((/* implicit */long long int) arr_14 [i_4] [i_7])), (var_11))), (((/* implicit */long long int) (unsigned char)57)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_27 [i_7] [(unsigned char)13] [i_9]), (arr_27 [i_9] [i_7] [i_4]))))));
                        arr_33 [i_4] [9] [i_8] [(signed char)21] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(var_0)))) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))) + (((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_7])), (((int) arr_29 [i_9] [i_9] [i_8] [i_7] [i_4])))))));
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned short) arr_23 [17])), ((unsigned short)7020)))))));
            arr_36 [i_4] = ((/* implicit */int) arr_15 [3] [i_10]);
            var_31 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (-8984614297444685329LL))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_10] [i_10])) * (((/* implicit */int) var_4))))) ? (1082553836) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_4] [i_4])))) : ((~(((/* implicit */int) arr_30 [i_4] [i_4]))))));
            var_32 -= ((/* implicit */long long int) 3596084635U);
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) arr_30 [i_4] [i_10]))))));
        }
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)250))))) ? ((+(var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))))))));
                    var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) != (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)189))))), (var_10)))));
                    var_36 = (~(var_16));
                    arr_43 [i_4] [(unsigned char)6] [i_4] [(unsigned char)7] = (((~(1487077257U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) arr_23 [i_4])) : (((/* implicit */int) (unsigned char)183))))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) << (((((/* implicit */int) arr_30 [i_4] [i_11])) - (11363)))))) ? (((/* implicit */long long int) ((((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_38 [i_4] [i_4]))))) : (((((((/* implicit */unsigned long long int) var_17)) <= (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_11]))) : (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */long long int) arr_39 [i_11] [i_11] [i_4]))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : ((~(arr_42 [i_4] [i_4] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) var_0)))))));
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_4] [i_4] [i_4]))) ? ((~(1487077257U))) : (((/* implicit */unsigned int) arr_14 [i_4] [i_4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4]))) / (var_8))) : (((/* implicit */unsigned long long int) max((min((7380061168007117768LL), (((/* implicit */long long int) (unsigned char)47)))), (((/* implicit */long long int) (unsigned char)135)))))));
    }
    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_16 [i_13]))));
        var_41 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)245)), (max((((/* implicit */unsigned long long int) var_18)), (max((((/* implicit */unsigned long long int) (unsigned short)58516)), (var_19)))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    {
                        arr_59 [i_14] [i_17] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) arr_48 [i_14 + 1])) == (arr_55 [i_14 - 1] [i_14 - 1] [i_14]))));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) arr_50 [i_14 + 1] [i_14 + 2])) * (0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_14 + 2] [i_14 + 1])) ? (((/* implicit */int) var_9)) : (arr_50 [i_14 - 1] [i_14 - 1])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 1; i_18 < 22; i_18 += 3) 
                        {
                            var_43 |= ((/* implicit */unsigned int) 1082553836);
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_18 - 1] [i_18 - 1] [i_14 + 1])) ? (arr_55 [i_18 - 1] [i_18 - 1] [i_14 - 1]) : (arr_55 [i_18 + 1] [i_18 - 1] [i_14 + 2])))) ? (((unsigned int) arr_54 [i_14 + 3] [7] [i_14] [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_18] [i_15] [i_16] [i_16] [i_18])))));
                        }
                        var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((unsigned char) var_15)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            arr_64 [i_14] = ((((/* implicit */_Bool) (+(arr_51 [(unsigned char)2] [i_14])))) ? (arr_51 [i_14] [i_14]) : (((((/* implicit */unsigned long long int) 43415702U)) * (18446744073709551615ULL))));
            arr_65 [i_14] [i_19] [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -1043956620))) ? (((((/* implicit */_Bool) arr_54 [i_14 + 1] [i_14] [i_14] [i_14 + 2])) ? (((/* implicit */unsigned long long int) min((arr_55 [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) (unsigned short)58516))))) : (min((((/* implicit */unsigned long long int) var_12)), (10699157983048472856ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_50 [i_14] [i_14 - 1])), (((arr_54 [i_14] [i_14] [i_14] [i_14]) % (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
        }
        var_46 = ((/* implicit */unsigned char) ((max((10774353266936949988ULL), (((/* implicit */unsigned long long int) arr_63 [i_14 + 3])))) << (((((/* implicit */int) (unsigned char)255)) - (208)))));
        arr_66 [i_14] [i_14] = ((/* implicit */int) arr_51 [(unsigned char)17] [i_14]);
    }
}
