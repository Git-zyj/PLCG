/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50136
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))));
        var_11 = ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_0 [i_0] [i_0])))) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)37412)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_2] [i_0] [i_0 - 2]));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (short)1205)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37412))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) || (var_8)))))) < (min((378507354U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16652)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-16649)) + (((/* implicit */int) (short)16652)))), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((2173407357U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37412))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29015)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))))))));
    }
    for (short i_3 = 3; i_3 < 18; i_3 += 4) 
    {
        var_13 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) (short)32728)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((arr_11 [i_3 - 1]), (((/* implicit */unsigned long long int) arr_12 [i_3 - 1]))))))));
        arr_13 [i_3] [(short)13] = ((/* implicit */unsigned int) 693807651044487715ULL);
        var_14 = ((/* implicit */unsigned short) ((signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3]))))));
        var_15 = ((/* implicit */short) (_Bool)1);
        arr_14 [3ULL] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_11 [i_3])))) ? (((/* implicit */int) (short)1178)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (16831568360235688631ULL)))))) >> (((((/* implicit */int) var_5)) - (19570)))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) | (((((/* implicit */int) arr_12 [i_4])) * (((/* implicit */int) arr_16 [i_4]))))))) ? (((/* implicit */int) max((max((((/* implicit */short) (_Bool)1)), ((short)16652))), (min((var_3), ((short)-29016)))))) : (((/* implicit */int) (unsigned short)3))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) max(((~(max((var_4), (((/* implicit */unsigned int) (signed char)-55)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)88))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) < (arr_15 [i_4])))) : (((/* implicit */int) ((short) arr_12 [i_4]))))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20488)) != (((/* implicit */int) arr_12 [i_5]))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_7))) % (((/* implicit */int) ((short) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned int) arr_17 [i_5]);
        var_20 -= ((/* implicit */unsigned short) arr_22 [i_5]);
    }
    var_21 = ((/* implicit */unsigned short) (~(max((max((((/* implicit */unsigned long long int) var_5)), (18252772983978388541ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))))))))));
}
