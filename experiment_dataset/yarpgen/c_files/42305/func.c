/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42305
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)184), ((unsigned char)82))))) + (max((((/* implicit */unsigned int) var_6)), (arr_2 [i_0])))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)68)) ^ (((/* implicit */int) (unsigned char)82))));
        arr_3 [i_0] = ((/* implicit */signed char) var_10);
        var_14 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)63)))) ? (((/* implicit */int) max((arr_1 [i_0] [(signed char)5]), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [(_Bool)1] [i_0]))))));
        var_15 = ((/* implicit */unsigned int) ((max((arr_2 [i_0]), (((/* implicit */unsigned int) ((arr_2 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)193))))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)169)) & (((/* implicit */int) (unsigned char)102))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (arr_5 [i_1 + 1] [i_1 + 1]))) : (((/* implicit */long long int) 1459455276))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)41830))));
                        arr_16 [i_2] = ((/* implicit */unsigned long long int) max(((((~(((/* implicit */int) (unsigned char)46)))) ^ (((/* implicit */int) arr_13 [i_4] [(unsigned char)21] [i_3] [i_2 + 1] [i_1 + 1])))), (((/* implicit */int) ((unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [i_2])))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) arr_17 [i_2] [i_3] [i_5])), ((+(4190582003714850933LL)))))) ? (((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_2 + 2] [i_4])) ? (min((((/* implicit */unsigned long long int) arr_17 [(short)0] [i_4] [i_5])), (arr_9 [i_1 + 1] [i_1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [16])))))))) : (((((/* implicit */_Bool) (~(-4032437530675646086LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (arr_9 [i_1 + 1] [i_3] [i_5])))));
                            arr_19 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_10);
                        }
                        for (signed char i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            var_18 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_6 - 1] [i_6 - 1]))))), ((+(((/* implicit */int) arr_17 [i_2] [i_3] [i_4]))))));
                            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) 2924844005U)), (var_8)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_2] [(unsigned short)18] [3U])) == (((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6 - 3]))))))))));
                            var_20 = ((/* implicit */unsigned char) max((max((((((-4252497580220576034LL) + (9223372036854775807LL))) >> (((4190582003714850933LL) - (4190582003714850888LL))))), (((4252497580220576033LL) / (-4252497580220576034LL))))), (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_10))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_5) : (var_5)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (1370123289U))) : (arr_21 [i_1] [i_2 + 1])))) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_17 [i_6 + 1] [(unsigned char)13] [i_6]))))));
                        }
                        for (signed char i_7 = 4; i_7 < 21; i_7 += 2) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) >= (max((((/* implicit */long long int) arr_12 [i_2] [i_3])), (6211644345145912626LL)))))) : (arr_24 [i_1] [i_2] [i_2 + 2] [i_7 - 3] [i_4] [i_1 + 1] [i_4])));
                            var_23 = ((((((/* implicit */_Bool) arr_17 [i_7 - 4] [i_1 + 1] [i_3])) ? (((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [(unsigned char)21] [i_2 + 1] [i_7])) : (((/* implicit */int) (short)14197)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned long long int) var_1)))))));
                            var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_25 [i_1] [11] [i_3] [i_1] [(short)8] [i_1]), (((/* implicit */unsigned int) (unsigned short)41805))))) ? ((~(var_5))) : (((/* implicit */unsigned int) -1785216503)))))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72)))))) ? (988686651342473041ULL) : (((/* implicit */unsigned long long int) (~(arr_5 [i_1 + 1] [(unsigned char)13]))))))) ? (var_4) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))))))));
    }
    for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    arr_33 [i_8] [6LL] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_8 - 1] [i_8 + 2])), (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : (-2897334923596108393LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23705))) : (min((((/* implicit */long long int) var_0)), (-8038666983232057343LL))))) : (((/* implicit */long long int) 3282972787U))));
                    var_27 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_10)))));
                }
            } 
        } 
        var_28 = (!(((/* implicit */_Bool) (unsigned char)178)));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) | (-6211644345145912600LL)))))) ? (max((((((/* implicit */_Bool) var_5)) ? (1370123289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (max((var_3), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 15; i_11 += 2) 
    {
        for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_42 [i_12] [i_13] = (((((~(var_3))) | (((/* implicit */unsigned int) -1830885879)))) >> (((((/* implicit */int) (signed char)56)) - (50))));
                    var_30 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_17 [i_11] [i_11 - 2] [i_11 + 1])))) * (max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((~(((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
}
