/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204602
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) -1)), (arr_1 [i_0]))) | (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0]))), (((((/* implicit */long long int) 1269342409U)) / (5898960138330939269LL))))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) (unsigned char)155)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((arr_1 [i_0]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned char)101))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-47)))))) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) 281474976710655LL)) * (var_12))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65535)), (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned int) (unsigned char)155);
                        arr_13 [i_0] [i_2] [i_2 - 1] [i_3] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) 1440942404)), (var_13))), (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)82)) != (((/* implicit */int) (signed char)-1)))), (arr_6 [i_2] [i_2]))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_3]), (-8301124688122545175LL)))) ? (((/* implicit */int) (unsigned short)284)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -826229307)))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_22 [i_4] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((-2118406395), (((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (short)806)) - (0))))))));
                    arr_23 [i_4] [i_5] [i_4] [i_6] = ((/* implicit */signed char) arr_9 [i_6] [i_5]);
                    var_19 += ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2190351179U)) ? (arr_21 [i_4] [i_5] [i_6]) : (arr_21 [i_4] [i_5] [i_6]))));
                    arr_24 [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned char)188))) && (((/* implicit */_Bool) (~(arr_20 [i_4] [i_4]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_4] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) / (arr_7 [i_4] [i_4] [i_4] [i_4])))))) ? (((/* implicit */int) (!(arr_15 [i_4] [i_4])))) : ((+(((/* implicit */int) (_Bool)0))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_4])) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))) > (var_10))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_3 [i_4])))) : ((-(arr_19 [i_4] [i_4] [5ULL])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (unsigned char)166);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 6839570589820849281LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((arr_26 [(short)16]), (arr_26 [i_7 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        for (short i_12 = 3; i_12 < 17; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8]))) : (293577817956965402ULL)))) ? (((/* implicit */int) (short)8833)) : (((/* implicit */int) arr_34 [i_8 + 1] [i_9 + 1] [i_10 - 1] [i_12 - 1]))));
                                var_25 += ((/* implicit */short) ((((/* implicit */int) arr_28 [i_12 - 3])) <= (((/* implicit */int) var_6))));
                                arr_39 [i_9] [i_9 + 1] [i_10] [i_11] = ((/* implicit */int) ((-6839570589820849281LL) < (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_9 + 1] [i_8] [i_12 - 3] [i_12])))));
                            }
                        } 
                    } 
                    arr_40 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (-561749923) : (((/* implicit */int) (unsigned char)188))));
                }
            } 
        } 
        arr_41 [i_8 + 2] = ((/* implicit */unsigned char) arr_38 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 + 2] [i_8 - 1]);
    }
    var_26 -= ((/* implicit */int) (((~(((int) var_12)))) != (((/* implicit */int) var_2))));
    var_27 = ((/* implicit */unsigned short) var_9);
}
