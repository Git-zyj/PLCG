/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196299
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)2]))) : (var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9117979881975618670LL)) ? (((/* implicit */int) (unsigned char)2)) : (-1918769941)))) ? (((var_0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (36028247263150080LL))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) & (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_10)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) 37568718);
        arr_9 [i_1] = ((/* implicit */short) arr_7 [(short)1]);
    }
    for (unsigned short i_2 = 4; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) var_3);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 - 2])) & (((/* implicit */int) arr_6 [i_2 - 2]))));
    }
    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */int) arr_12 [i_3 - 1]);
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_18 [i_4] = ((/* implicit */long long int) (unsigned char)3);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_24 [i_6] [(unsigned char)0] [i_4] [(short)12] [(short)12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 37568727)) ? (((/* implicit */long long int) -416687401)) : (-8996629884589388136LL)))) ? (-1918769918) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_13 [i_5]))))))) != (((/* implicit */int) var_9))));
                        var_21 -= ((/* implicit */short) ((((/* implicit */int) max((arr_6 [i_3 - 1]), (arr_6 [i_3 - 1])))) / (((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12346))))));
                        arr_25 [i_5] [i_5] [i_5] [(unsigned short)7] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                        arr_26 [i_6] [i_5] [i_4] [i_3 + 1] = ((/* implicit */unsigned short) 49152);
                        arr_27 [i_3 - 4] [i_3] [i_3 - 4] [i_5] [i_6] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_7 [i_3 + 1])))), ((~(((/* implicit */int) (short)12346))))));
                    }
                } 
            } 
            var_22 = arr_12 [(_Bool)0];
            arr_28 [i_3] [i_3] = ((/* implicit */short) max((((var_6) ? (arr_19 [3ULL] [i_4] [6LL]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (arr_20 [i_3] [i_3] [i_4] [i_4])))))), (((/* implicit */unsigned long long int) arr_12 [(short)5]))));
        }
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_31 [i_3 - 2] [i_3 - 2] [i_3 - 2] &= ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1]))) - (var_2)))));
            arr_32 [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)12] [(signed char)12] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [8LL]))) : (var_2))))))) : (arr_15 [i_3])));
            arr_33 [(_Bool)1] [i_7] [i_3 - 4] = ((/* implicit */unsigned char) (((-((-(var_7))))) >= (((/* implicit */long long int) ((/* implicit */int) (short)-24437)))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_5 [i_3 - 1]), (var_0))))));
                        var_24 = ((/* implicit */long long int) var_16);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_3 - 1] [i_3 - 4]))))) || (var_6)));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_16), (((/* implicit */unsigned long long int) 1918769928))))))) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (arr_19 [i_3 - 2] [i_3] [i_3 - 2]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) -1918769929)) ? (((/* implicit */unsigned int) -1918769928)) : (arr_35 [i_7])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1108658199U)))))));
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_28 -= ((/* implicit */unsigned short) ((short) var_4));
            arr_41 [i_3] = ((/* implicit */unsigned char) var_3);
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    {
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_7))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) arr_17 [i_10] [i_11]);
                            arr_48 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (-1918769941) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)35217)) != (((/* implicit */int) (short)-12346))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_10] [i_10])), (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_12))))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (var_13)));
                        }
                        arr_49 [i_12] [5ULL] [1ULL] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 790529790)) ? (-1918769921) : (((/* implicit */int) (unsigned char)252))));
                        arr_50 [i_3] = ((/* implicit */unsigned short) ((arr_19 [i_3] [i_11] [(unsigned char)5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            arr_53 [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)152)) < (((/* implicit */int) arr_47 [(signed char)6] [i_3 - 2] [i_14] [(signed char)6] [(short)0] [(signed char)6] [i_14]))));
            arr_54 [i_14] [i_14] [(_Bool)1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)-1)) : (((813094793) & (((/* implicit */int) (unsigned short)4309))))));
            arr_55 [i_3 - 1] [i_14] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
        }
        arr_56 [(short)2] = ((/* implicit */int) var_14);
        arr_57 [i_3 - 2] = ((/* implicit */unsigned short) min(((short)25128), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) -525162815)) ? (37568718) : (((/* implicit */int) (unsigned short)24111))))))));
        arr_58 [i_3 - 2] [i_3 - 1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((var_11) << (((arr_30 [i_3]) - (11809552851612844655ULL)))))))) == (max((arr_40 [i_3] [i_3]), (arr_40 [i_3 + 1] [i_3 + 1])))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) var_12)), (var_7))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (3186309096U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((/* implicit */unsigned int) (-(1028236866)))) : (((((/* implicit */_Bool) 1028236866)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2452241837U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
}
