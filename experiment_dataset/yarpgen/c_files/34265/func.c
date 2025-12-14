/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34265
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_0 [i_0])))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_1 [i_0])))) : (((max((arr_0 [i_0]), (((/* implicit */int) (short)15340)))) / (arr_0 [i_0])))));
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6))));
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_0 [i_1]) : (arr_0 [i_1]))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned char) var_4))))) >> (((/* implicit */int) arr_6 [(_Bool)1] [i_1]))));
        var_17 = ((/* implicit */int) max((var_17), (max(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) (short)-20662)) ? ((-(((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) arr_1 [i_1]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-12848)), (var_8)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_8 [i_2])));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((var_4) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_11)))) : ((((+(((/* implicit */int) arr_6 [i_2] [i_2])))) * (((/* implicit */int) arr_7 [i_2] [i_2]))))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), ((+(((/* implicit */int) arr_6 [i_2] [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) var_4)))));
        var_21 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_3])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))), (max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_7))))))));
        var_22 = ((((((/* implicit */int) var_10)) / (((/* implicit */int) arr_12 [i_3])))) * (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_5 [i_3])))));
        var_23 = ((/* implicit */short) ((unsigned long long int) arr_7 [i_3] [i_3]));
    }
    var_24 = ((/* implicit */long long int) (+(-1870214701)));
    var_25 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                var_26 = arr_17 [i_4] [i_4];
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_6] [i_5] [11ULL] = ((/* implicit */unsigned long long int) var_7);
                    var_27 *= ((/* implicit */unsigned char) arr_15 [i_5]);
                    var_28 = ((/* implicit */_Bool) ((signed char) arr_13 [i_6]));
                }
                var_29 = ((/* implicit */long long int) var_7);
                var_30 |= ((/* implicit */unsigned char) arr_20 [i_4] [i_4] [10LL] [i_5]);
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)73)) ? (((arr_13 [i_4]) >> (((arr_13 [i_4]) - (14378835643820167323ULL))))) : ((+((+(15462449072925722842ULL)))))));
            }
        } 
    } 
}
