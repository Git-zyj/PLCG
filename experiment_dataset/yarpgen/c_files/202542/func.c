/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202542
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (short)32766);
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32765)))))))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)169))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)-122)) ? (-6871209227137860045LL) : (-6528959807271511554LL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
        arr_10 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) 3746930502U)));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_17 [i_2] = ((/* implicit */signed char) ((unsigned int) arr_8 [i_2] [i_2]));
            var_19 = ((/* implicit */signed char) (unsigned char)10);
            var_20 = ((((/* implicit */_Bool) (short)6659)) ? (2044236105) : (((/* implicit */int) (signed char)-114)));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        arr_24 [i_2] [i_4 - 1] [12U] [3U] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (min((((long long int) var_3)), (((/* implicit */long long int) arr_1 [i_4 - 1] [i_4 - 1])))) : (((/* implicit */long long int) var_5))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_2]))));
                        var_22 ^= ((/* implicit */long long int) arr_21 [(signed char)4] [i_6]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                for (int i_8 = 3; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_29 [(_Bool)1] [i_2] [i_2] [12LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (var_8)))))) ? (((/* implicit */int) max((((/* implicit */short) arr_18 [i_2] [i_7 - 1] [i_2])), (var_0)))) : (((/* implicit */int) arr_11 [i_7]))));
                        arr_30 [i_2] [i_4] [i_2] [10U] [i_8 + 3] [i_8] = ((/* implicit */signed char) (+(6885078141411559402ULL)));
                        var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_10 = 2; i_10 < 11; i_10 += 1) 
            {
                arr_36 [i_2] [i_9] [i_2] = ((/* implicit */short) (((+(9223372036854775807LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))) : (((/* implicit */int) ((_Bool) (unsigned char)169))))))));
                var_24 = ((/* implicit */unsigned char) var_10);
            }
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)116)))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1]))))));
                var_26 *= ((/* implicit */signed char) (~(var_5)));
                arr_41 [i_2] [i_2] [i_2] = ((((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_9 - 1])) + (((/* implicit */int) arr_32 [i_9 - 1]))))) - ((+(3867612060112363080LL))));
                /* LoopSeq 3 */
                for (int i_12 = 4; i_12 < 10; i_12 += 2) /* same iter space */
                {
                    arr_44 [(signed char)2] [i_2] [(signed char)0] = ((/* implicit */_Bool) var_4);
                    arr_45 [i_2] [i_9] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) min((1533210427), (((/* implicit */int) var_7))));
                }
                for (int i_13 = 4; i_13 < 10; i_13 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned short) 326780633U))) ? (var_5) : (((((/* implicit */_Bool) 234881024)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) (short)-2833)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)27))))));
                    arr_48 [i_2] [i_2] [i_13] [i_2] [i_2] &= ((/* implicit */signed char) 1769799742U);
                }
                for (int i_14 = 4; i_14 < 10; i_14 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) ((unsigned int) ((arr_6 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))))))));
                    var_29 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-17882)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))) : (((long long int) max((var_4), (((/* implicit */long long int) arr_2 [i_2] [1U])))))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_3 [i_14] [i_14]) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_2] [i_9] [i_9] [i_14])))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25278)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))))))));
                    var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_13)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            }
            arr_53 [i_2] [i_9 - 1] [(_Bool)1] &= (_Bool)0;
        }
        var_32 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)31))))) && (((/* implicit */_Bool) ((3048627385U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
        var_33 -= ((/* implicit */_Bool) arr_32 [8U]);
        arr_54 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_8))))))) : ((((+(var_10))) % (((/* implicit */long long int) ((var_12) & (((/* implicit */unsigned int) var_14)))))))));
    }
}
