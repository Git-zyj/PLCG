/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46416
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
    var_20 = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_7))));
    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7918070018490513635ULL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_22 = ((/* implicit */signed char) (+(min((7918070018490513638ULL), (5402257377673446718ULL)))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (1126178023U))), (var_0))), (((/* implicit */unsigned int) var_19))));
            var_24 = ((/* implicit */long long int) max((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))), (min((((/* implicit */unsigned long long int) (unsigned char)184)), (13044486696036104897ULL)))));
            var_25 *= min((((arr_1 [i_0 - 1]) >> (((((/* implicit */int) max((var_12), (((/* implicit */signed char) var_7))))) - (39))))), (((/* implicit */unsigned long long int) min((3783182367513545653LL), (((/* implicit */long long int) arr_0 [i_0]))))));
            var_26 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) var_1)))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) & (min((3783182367513545653LL), (arr_2 [i_0]))))), (((/* implicit */long long int) arr_3 [(unsigned char)7]))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_0 + 1] [i_0] [i_0] [i_4] [i_0] [i_5] [i_5]));
                            arr_20 [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_3] [i_4])))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_18 [(unsigned char)17] [i_2] [i_4] [14U] [i_4])))) / (max((((/* implicit */unsigned long long int) var_6)), (arr_13 [i_2] [i_4])))))));
                            var_28 ^= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3] [i_4]);
                            arr_21 [i_4] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_2 [i_0 - 1]), (((/* implicit */long long int) ((signed char) var_16)))))), (max((((((/* implicit */_Bool) var_15)) ? (arr_13 [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (var_2))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_29 ^= ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        {
                            arr_31 [i_6] [i_7] [i_7] [i_6] [6] [i_2] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_4 [i_0] [i_2] [i_6]), (arr_4 [i_6] [i_6] [(unsigned char)8]))))));
                            arr_32 [i_8 + 1] [i_6] [i_6] [i_6] [i_0] = max((((/* implicit */unsigned long long int) arr_25 [i_6] [i_6] [i_6] [i_0])), (((var_7) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)3))))) : (arr_1 [i_0]))));
                            var_30 = ((/* implicit */short) ((10528674055219037980ULL) << (0ULL)));
                            var_31 -= ((/* implicit */unsigned char) ((unsigned int) (-(max((arr_12 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_2 [3U])))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
            {
                arr_36 [12U] [i_9] [12U] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-51))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_2])), (((((/* implicit */int) arr_11 [i_2])) & (((/* implicit */int) arr_11 [i_0 - 1])))))))));
            }
        }
        for (long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
        {
            arr_41 [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (-(arr_29 [i_10] [i_10] [i_0 - 1] [18LL] [i_0 + 1] [i_10] [i_10])))) != (((arr_2 [(unsigned char)18]) / (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_10])))))))));
            arr_42 [i_0 - 1] [10U] [i_0 + 1] |= ((/* implicit */signed char) arr_1 [i_10]);
        }
        for (long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                for (unsigned int i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    for (int i_14 = 2; i_14 < 20; i_14 += 1) 
                    {
                        {
                            arr_55 [9U] [i_11] [i_13] [i_13] [0ULL] [i_14] = ((/* implicit */unsigned int) -1489099968);
                            arr_56 [i_0 - 1] [i_11] [i_12] [i_13] [i_13] = (!(((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) -1117194601)))));
                        }
                    } 
                } 
            } 
            arr_57 [i_0 - 1] [5] = ((/* implicit */unsigned char) (((-(3168789273U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [8U] [i_11]))))))));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        arr_60 [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_45 [i_15] [i_15]))))) <= (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15] [(_Bool)1]))))))))));
        /* LoopSeq 4 */
        for (int i_16 = 1; i_16 < 18; i_16 += 1) 
        {
            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_15] [i_16 - 1]))));
            arr_65 [(signed char)14] = ((/* implicit */long long int) (((-((-(arr_7 [i_16]))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_50 [i_15] [i_16] [i_16 + 3] [i_16 + 1] [i_16 + 3] [i_15]), (arr_50 [i_15] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_15])))))));
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-(max((arr_7 [i_15]), (arr_7 [i_15]))))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((arr_22 [(signed char)18] [i_17] [i_17 + 1] [i_17 - 1]), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_2 [i_15])));
            arr_69 [i_15] = ((/* implicit */unsigned long long int) min((arr_16 [i_17] [i_17] [(signed char)14] [i_15] [i_17 - 1] [i_17 - 1] [i_15]), (((/* implicit */long long int) ((arr_53 [10LL] [i_17] [i_17] [(signed char)7] [(_Bool)1]) >= (((((/* implicit */_Bool) arr_35 [i_15] [i_15] [(short)20])) ? (var_9) : (arr_53 [i_15] [i_17] [i_17 - 1] [i_15] [i_15]))))))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */short) (+(arr_47 [i_15])));
            arr_73 [i_18] [i_18] = ((/* implicit */short) max(((+(((/* implicit */int) arr_51 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 - 1])))), (((/* implicit */int) arr_5 [i_18 + 1] [i_18 - 1]))));
            var_37 ^= ((/* implicit */short) 4309229959652821235ULL);
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_38 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [i_18] [i_19])))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-50)), (arr_53 [i_15] [i_19 + 1] [2LL] [6] [i_15])))) : (27ULL))));
                arr_76 [i_15] &= max((((/* implicit */long long int) 1917108783U)), (4650174915887873826LL));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 1; i_20 < 20; i_20 += 1) /* same iter space */
        {
            arr_79 [i_20] = ((/* implicit */_Bool) arr_29 [i_15] [(short)4] [i_15] [i_15] [i_20] [i_15] [i_20]);
            arr_80 [i_15] [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) arr_52 [i_15] [i_15] [i_20 - 1] [i_20 + 1]))));
        }
        var_39 *= ((/* implicit */int) min((var_8), (((/* implicit */unsigned int) arr_45 [i_15] [i_15]))));
    }
    for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
    {
        arr_85 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_83 [(_Bool)1] [16ULL])) : ((+(((2147483631) - (1117194571)))))));
        arr_86 [i_21] = ((/* implicit */unsigned int) min(((+(7918070018490513624ULL))), (((/* implicit */unsigned long long int) (+(arr_81 [i_21]))))));
    }
}
