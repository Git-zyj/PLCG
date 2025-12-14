/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33622
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-104)), (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (23)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3309987714068166343LL)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (var_3))) && (arr_0 [(signed char)13] [i_0 + 2]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        var_16 += ((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) var_2)))), ((!(var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) var_1)) : (arr_6 [i_0 - 1] [i_0])))) : (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10675562762984547335ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_3 - 1])), (min((((/* implicit */unsigned short) var_5)), (arr_11 [i_3]))))))) : ((+((~(12582912U)))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_3]))) ? (((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))))) : (((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (-3309987714068166343LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((min((arr_12 [(_Bool)1]), (((/* implicit */unsigned int) (signed char)-104)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))))))))))));
    }
    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) (short)-31361);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_22 [i_6] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_6)), (arr_12 [(signed char)13])));
                    var_19 &= ((/* implicit */unsigned short) (signed char)103);
                    arr_23 [i_4 - 2] [i_5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12582912U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (1073741816U) : (((/* implicit */unsigned int) ((arr_13 [i_4]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_4])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4282384383U)) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((+(arr_21 [i_4] [15LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))));
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned char) var_12);
    }
    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-89)) >= (((/* implicit */int) (_Bool)1))));
        arr_28 [i_7] = ((short) min((((/* implicit */unsigned long long int) arr_11 [i_7 - 1])), (((((/* implicit */_Bool) var_8)) ? (15132557237181958324ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_6))));
            arr_34 [i_8] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3309987714068166349LL)))));
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))));
        var_23 = ((/* implicit */signed char) ((_Bool) arr_5 [i_8] [i_8]));
    }
    var_24 = ((/* implicit */short) var_3);
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0)))))));
}
