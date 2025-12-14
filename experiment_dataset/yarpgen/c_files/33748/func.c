/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33748
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_16))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 6848019323140840709ULL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)150)))))));
        }
        for (signed char i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) var_7);
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max(((unsigned char)169), ((unsigned char)99)))) : (((/* implicit */int) ((_Bool) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26397))))) : (((/* implicit */int) ((unsigned short) min((var_10), (((/* implicit */unsigned char) var_0))))))));
        }
        for (signed char i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(max((45819353), (((/* implicit */int) (unsigned char)105)))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((max((var_14), (((/* implicit */long long int) arr_7 [i_3 + 2] [i_3] [i_4 - 1])))), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_4])))))));
                var_24 = (!(((/* implicit */_Bool) (short)26397)));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-89))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+((+(var_11))))))));
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 748765032)) ? (((/* implicit */int) (unsigned short)27213)) : (((/* implicit */int) (unsigned char)96))));
            var_28 |= ((/* implicit */int) var_6);
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [13ULL] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [21U]))) : (var_14))) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0] [i_3]))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned short i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 3; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) var_16)))));
                            var_31 = ((((/* implicit */_Bool) (unsigned char)106)) ? (492274853) : (((/* implicit */int) (signed char)88)));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (unsigned char i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [(_Bool)1] [20LL] [(_Bool)1] [i_13])))))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned char)106))));
                        }
                        var_35 = ((/* implicit */signed char) ((unsigned char) ((signed char) (~(((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) var_5)) | (((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned char)50))))))));
                            var_37 = ((/* implicit */int) arr_30 [i_9]);
                            var_38 += ((/* implicit */unsigned long long int) max(((signed char)67), (((/* implicit */signed char) (_Bool)0))));
                            var_39 |= ((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_9] [i_11] [i_12])), ((~(((var_16) ? (((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) var_1))))))));
                        }
                        var_40 &= ((/* implicit */unsigned int) arr_26 [i_9]);
                    }
                } 
            } 
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_15 [i_9] [(unsigned short)15] [i_10]))));
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) min(((-(arr_20 [i_15 + 1] [i_15 + 1] [i_9] [i_9 - 1]))), (((/* implicit */unsigned long long int) (-(var_8))))));
            var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-68)) || (((/* implicit */_Bool) (signed char)127))))), (max((arr_30 [i_9]), (arr_30 [i_9])))));
            var_44 = ((/* implicit */short) ((_Bool) -1423405948273776552LL));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_16 = 2; i_16 < 21; i_16 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_9] [i_15])) : (((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_9] [i_9])) : (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    var_46 = ((/* implicit */int) ((short) var_17));
                    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_9 + 1] [i_15] [i_16 - 2] [i_17])))))));
                }
                var_48 ^= ((/* implicit */unsigned char) (-(2143664833U)));
            }
            /* vectorizable */
            for (long long int i_18 = 2; i_18 < 21; i_18 += 3) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned int) arr_21 [i_9 - 1] [i_15 + 1] [i_18 + 1] [i_9] [i_18 + 1]);
                var_50 = ((/* implicit */short) ((((/* implicit */_Bool) 5099172097764449145ULL)) ? (5099172097764449150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
            }
            var_51 = ((/* implicit */short) ((long long int) (signed char)-123));
        }
        for (long long int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                for (signed char i_21 = 3; i_21 < 20; i_21 += 2) 
                {
                    {
                        var_52 = ((((((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_16))))) != (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_9))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (1619085162)))))))));
                        var_53 &= ((/* implicit */_Bool) ((unsigned char) var_13));
                    }
                } 
            } 
            var_54 = ((/* implicit */short) arr_25 [i_9]);
            var_55 = ((/* implicit */unsigned char) max((arr_16 [i_9] [i_9] [i_9 - 1] [i_19]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1423405948273776552LL)))))));
        }
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [i_9 - 1] [i_22 - 1]) ? (((/* implicit */int) arr_19 [i_9 - 1] [i_22 - 1])) : (((/* implicit */int) arr_19 [i_9 - 1] [i_22 - 1]))))) ? ((+((~(arr_39 [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_22])))));
            var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)39))));
            var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_14 [i_22] [i_22] [i_9 - 1] [i_22])), (arr_51 [i_9] [i_9]))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31)))))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (arr_18 [i_9] [(_Bool)1] [i_9] [i_22] [i_9]) : (((/* implicit */int) arr_6 [i_9 + 1] [i_22])))))) : (((int) (unsigned char)38))));
        }
        var_59 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) min((arr_29 [i_9]), (((/* implicit */int) var_7))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-1423405948273776552LL))))));
    }
    var_60 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (signed char i_23 = 4; i_23 < 11; i_23 += 1) 
    {
        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            {
                var_61 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_58 [(signed char)18] [(signed char)18])))))) ? ((~(((/* implicit */int) arr_7 [i_23] [i_23] [i_23])))) : (((/* implicit */int) ((unsigned char) 2143664833U)))));
                var_62 = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (-5504128351751861379LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(((long long int) var_13))))));
}
