/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211610
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
    var_16 = ((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])))));
                    arr_9 [i_1] [i_0] = ((((/* implicit */_Bool) (short)-17461)) ? (((/* implicit */int) (short)-17461)) : (((/* implicit */int) (unsigned char)119)));
                }
            } 
        } 
        var_18 *= ((/* implicit */short) ((signed char) var_15));
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (-327780860) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
        arr_11 [i_0] = ((/* implicit */unsigned int) var_1);
        var_19 = ((/* implicit */short) var_2);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_17 [i_3] = var_13;
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((int) arr_15 [i_5] [i_4]));
                            arr_27 [i_7] [i_6] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)17484)) > (((/* implicit */int) arr_12 [i_6] [i_4]))));
                        }
                    } 
                } 
            } 
            arr_28 [i_4] [i_4] [i_4] = var_9;
        }
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            arr_31 [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)31221)) ? (2010062985U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((-(5091751305043034980LL)))));
            arr_32 [i_3] [i_8 - 2] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)255)), (((short) (signed char)-95))));
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_35 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_29 [i_3])) ? (((/* implicit */int) arr_14 [i_9] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) * (((/* implicit */int) var_10))));
            arr_36 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_29 [i_3]), ((unsigned char)81)))), (12025561059796753122ULL)));
        }
        arr_37 [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] = var_12;
        arr_42 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
        arr_43 [i_10] = ((/* implicit */long long int) ((unsigned long long int) min((var_0), (((((/* implicit */_Bool) (unsigned short)19912)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17018222469732611869ULL))))));
    }
    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)241)) != (((/* implicit */int) (short)-31222))))), (var_11)));
    var_22 = ((/* implicit */int) var_11);
}
