/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195415
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
    var_19 = ((/* implicit */signed char) -3214436617800210440LL);
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (var_15) : (511U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_16)))))))) : ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)114))))) : (((((/* implicit */_Bool) 511U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (13318373454150527324ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [(short)6])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_0]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)23371))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1 + 1]);
            arr_6 [i_0] = ((/* implicit */int) (unsigned short)20018);
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) 4294966784U);
                            var_24 = ((/* implicit */unsigned int) (unsigned short)20018);
                            arr_15 [(signed char)4] [i_2 + 1] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1]))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (+(131071LL))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) var_13))))) ? (512U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 261632U)) ? (((/* implicit */int) (short)-24590)) : (((/* implicit */int) arr_7 [i_0] [i_5])))))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5])) : (((/* implicit */int) arr_2 [i_5 + 1] [i_5])))))));
            arr_19 [i_0] [i_0] = ((((/* implicit */_Bool) arr_18 [i_0] [i_5 + 1] [(signed char)12])) ? (((/* implicit */int) arr_2 [(unsigned char)1] [i_5 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_5 + 1])));
            var_28 += ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) 950532912U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
            var_29 += ((/* implicit */unsigned long long int) ((arr_17 [i_5 + 1]) ? (((((/* implicit */_Bool) 3344434383U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)2]))))) : (((/* implicit */long long int) (~(261632U))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6] [i_6 + 1])))))));
            arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_0])) ? (((((/* implicit */_Bool) arr_21 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [i_0])))))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_31 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10])) < (var_4)));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            var_32 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8 + 1] [i_8] [i_9]))) : (-1452782983993421937LL)));
                            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_8 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            arr_41 [i_7] [i_8] [i_8] [i_10] [i_12] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_8 - 1] [(unsigned char)12] [i_12] [i_12] [(unsigned char)12])) : (((/* implicit */int) arr_9 [i_8 - 1] [(_Bool)1] [i_9] [(_Bool)1] [i_12]))));
                            arr_42 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_9 [i_7] [i_8 + 1] [i_9] [i_10] [i_12])))) : (((/* implicit */int) (signed char)-114))));
                            arr_43 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_8 + 2] [i_12])) ? (((((/* implicit */_Bool) arr_1 [i_7] [20ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_7] [i_8 + 2] [i_9] [i_9] [i_10] [i_12]))) : (-9223372036854775787LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)23371)))))));
                        }
                        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -278738155)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (12432924777929922275ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) arr_37 [i_7] [i_7] [(unsigned char)8] [(signed char)5] [i_10] [(signed char)7])) ? (((/* implicit */unsigned long long int) 2725456744404539433LL)) : (11277029260584931044ULL))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (+(1452782983993421936LL))))));
        arr_44 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)121))));
    }
    /* vectorizable */
    for (signed char i_13 = 2; i_13 < 15; i_13 += 3) 
    {
        var_36 = (short)24840;
        var_37 = ((/* implicit */unsigned char) arr_13 [(unsigned char)20] [i_13 - 2]);
        arr_48 [i_13] = ((/* implicit */signed char) arr_1 [i_13] [i_13 - 1]);
    }
}
