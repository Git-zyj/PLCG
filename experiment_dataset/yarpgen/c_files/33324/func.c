/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33324
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = (-(((int) ((66977792U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((((((/* implicit */_Bool) 1329254230U)) ? (var_7) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned short)12580)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-19))));
        var_17 = ((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_2 - 1]);
        arr_9 [i_2] [i_2 - 1] = ((max((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])))) / (((/* implicit */unsigned long long int) ((arr_7 [i_2 - 1] [i_2 - 1]) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_3)))))))));
        /* LoopSeq 3 */
        for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            arr_12 [i_3] [i_3] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_3 - 1] [i_3])))))) ? ((-(var_10))) : ((+(var_9)))))));
            var_18 = ((/* implicit */long long int) max(((-(arr_7 [i_2 - 1] [i_3 - 2]))), (((arr_7 [i_2 - 1] [i_3]) / (arr_7 [i_2 - 1] [i_3])))));
        }
        for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((var_9) >> (((-5309264002695210655LL) + (5309264002695210663LL)))));
            arr_15 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (signed char)10)) << (((/* implicit */int) (_Bool)0)))));
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_20 ^= max((-5309264002695210652LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_25 [i_8 - 1] [i_5] [i_6] [i_2] [i_8] = ((/* implicit */unsigned char) min((((var_9) | (((/* implicit */int) (unsigned char)126)))), (((/* implicit */int) var_2))));
                            var_21 = ((/* implicit */unsigned short) (+((-(arr_1 [i_2 - 1] [i_2])))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) -9223372036854775802LL)) || (((/* implicit */_Bool) (unsigned char)109))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)23))) % (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52013)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (var_12)))))))));
                            arr_26 [i_2] [i_5] [i_6] [i_2] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5309264002695210640LL))) != (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) - (9030302425221341725LL)))) ? (max((-16LL), (((/* implicit */long long int) (signed char)-64)))) : (min((((/* implicit */long long int) (_Bool)1)), (var_7)))))));
                        }
                    } 
                } 
                arr_27 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [i_2 - 1])))))));
                var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) : (arr_14 [i_2]))), (((/* implicit */long long int) (-((-(((/* implicit */int) var_1)))))))));
                arr_28 [i_5] [i_5] [i_2] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) (signed char)-30)) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 10)))), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((5309264002695210655LL), (((/* implicit */long long int) (signed char)10))))) && (((/* implicit */_Bool) (-(var_4))))))))));
            }
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
            {
                arr_33 [i_2] [i_2] = ((/* implicit */long long int) (~((~(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_32 [i_2] [i_5] [i_9] [i_2]))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) max((1661450739), (((/* implicit */int) arr_16 [i_2] [i_5]))))) | (min((((/* implicit */long long int) (signed char)-4)), (-2521657896868247542LL)))));
                            arr_41 [i_9] [i_10] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -22LL)) ? (1661450713) : (1661450694)));
                            arr_42 [i_5] [i_5] [i_10] [i_10] [i_2] = ((((/* implicit */_Bool) min((5309264002695210651LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (1166814938))))))) ? ((((_Bool)1) ? ((~(2121768187993866743ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-75))))))) : (((((/* implicit */_Bool) (+(1661450694)))) ? (((/* implicit */unsigned long long int) var_4)) : ((-(var_12))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53)))))) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) & (((arr_31 [8LL]) ? (-2691502500198230238LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_5])))))))));
            }
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_12] [i_5] [i_12] [i_12]) | (arr_14 [i_2])))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) >> (((var_9) - (1586426470))))))))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_2 - 1] [i_2 - 1] [i_12] [i_12]))))) : (var_0)));
                arr_45 [i_2 - 1] [i_2] [i_12] [i_12] = ((/* implicit */unsigned short) arr_36 [i_2 - 1] [i_2 - 1] [(_Bool)1] [i_2]);
            }
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-88))))), ((-(4270336247U))))))))));
        }
        var_28 = ((signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_22 [(short)12] [i_2 - 1] [i_2] [(unsigned char)15])))))));
    }
    for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) (+(max(((~(((/* implicit */int) arr_4 [i_13] [i_14] [i_13])))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13]))))))));
            arr_53 [i_13] [i_13] [i_14] = var_12;
        }
        for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            arr_56 [i_13] = ((/* implicit */long long int) arr_30 [i_15] [i_15] [i_15]);
            arr_57 [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((571957152676052992ULL), (((/* implicit */unsigned long long int) (signed char)-22))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65518)) && (arr_13 [i_15])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (min(((-(var_5))), (((/* implicit */int) var_8))))));
        }
        arr_58 [i_13] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [9] [i_13])) ? (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13])) : (var_9)))) ? (((/* implicit */int) ((unsigned char) (signed char)86))) : (max((((/* implicit */int) (unsigned char)141)), (var_10)))))) >= ((~(((((/* implicit */long long int) ((/* implicit */int) (short)-8192))) / (var_11)))))));
    }
    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))))))))), (min((((((-2521657896868247535LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-17504)) + (17537))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5201202560222519977ULL)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (signed char)-86)))))))));
    var_31 = var_10;
}
