/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248922
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
    var_10 = ((/* implicit */int) (signed char)75);
    var_11 &= var_6;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) ((4171802744U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (_Bool)1))))) ? ((-(791415683994656644ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))))))));
            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [(unsigned short)10] [i_1]))))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (823155068)))) || (((/* implicit */_Bool) arr_0 [i_0])));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 2]));
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 2] [i_3 - 3] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_3 + 2] [i_3 - 3] [i_3 - 1])) : (((/* implicit */int) (short)-2048))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) arr_8 [(signed char)4] [i_3 - 1] [i_3] [i_3])))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_9);
                            var_18 -= ((/* implicit */short) ((_Bool) (unsigned short)1856));
                        }
                        for (short i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777088U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_6])) && (((/* implicit */_Bool) var_9)))))));
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22230)) ? (((/* implicit */int) (short)7895)) : (((/* implicit */int) (signed char)-86))))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */long long int) arr_7 [i_0] [i_2] [i_6] [i_3])) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
            var_22 = ((/* implicit */_Bool) (unsigned char)16);
            var_23 = ((/* implicit */_Bool) var_7);
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) (-(262144ULL)));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_7))));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_26 -= ((/* implicit */unsigned int) ((unsigned short) (unsigned char)185));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)38))));
            arr_30 [i_0] = ((/* implicit */signed char) ((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned long long int) ((short) ((((/* implicit */_Bool) arr_31 [i_10])) || (((/* implicit */_Bool) (unsigned char)19)))))))));
        var_29 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_32 [i_10 + 2] [i_10 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10 + 1] [i_10 + 1]))) : (arr_31 [i_10 + 2]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)91))))) ? ((-(arr_34 [i_10] [2ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))))))));
            var_31 = ((/* implicit */unsigned short) arr_31 [i_11]);
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_32 = ((/* implicit */short) ((signed char) arr_34 [i_10] [i_10]));
            arr_38 [(unsigned char)10] [i_10] = ((/* implicit */unsigned short) ((unsigned char) 16320U));
        }
        for (int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)508))) : (30ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14186)))))))));
                var_34 = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))) > (((((/* implicit */_Bool) arr_34 [i_13] [i_10])) ? (10384546881100682016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                var_35 &= ((/* implicit */_Bool) var_3);
            }
            arr_44 [i_10] = ((/* implicit */long long int) max(((short)29645), ((short)-29646)));
        }
        for (int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)45944)) : (((/* implicit */int) (short)-32115))));
                var_37 = ((/* implicit */short) (unsigned short)65535);
            }
            var_38 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) | ((((+(var_8))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4160418871U)) ? (((/* implicit */int) arr_47 [i_10] [i_10] [i_15])) : (((/* implicit */int) var_7)))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 1; i_17 < 18; i_17 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))) % (arr_34 [i_17] [(unsigned char)4])));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
            {
                {
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9218868437227405312LL)))) == (arr_41 [(_Bool)1] [i_18] [i_18]))))));
                    var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-105)) ? (arr_39 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29671))))) >> (((/* implicit */int) arr_50 [i_17 + 1]))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_17 - 1])) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_8))))));
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_17 - 1] [8ULL])) ? (((/* implicit */int) arr_40 [i_17 + 1] [8ULL])) : (((/* implicit */int) arr_54 [i_17 - 1]))));
    }
    for (unsigned long long int i_20 = 1; i_20 < 18; i_20 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */_Bool) max((((var_4) ? (arr_42 [i_20 - 1] [i_20 + 1] [i_20]) : (arr_41 [(short)18] [i_20 + 1] [(short)18]))), (arr_41 [4ULL] [i_20 + 1] [4ULL])));
        var_45 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_20] [(short)2] [i_20])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (-(var_2)))))))));
        var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_46 [18LL] [i_20 + 1] [(unsigned short)10])) - (((/* implicit */int) arr_48 [i_20] [(signed char)6] [i_20])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [10U] [12ULL] [i_20])) && (((/* implicit */_Bool) arr_46 [i_20 + 1] [i_20 - 1] [i_20])))))));
        var_47 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)100)), (18446744073709551615ULL)));
    }
}
