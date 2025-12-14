/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24049
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) (~(15590546896560388050ULL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_1 [(signed char)5] [i_0]))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48473))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 3] [i_0]))) : (arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (var_8)));
                            arr_11 [14ULL] [14ULL] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])), (2856197177149163565ULL)));
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-93)), ((short)24652)));
                            var_16 *= ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((2856197177149163565ULL) + (15590546896560388050ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = (short)511;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) var_6);
        var_19 *= ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (arr_14 [i_4]));
        arr_15 [i_4] = ((/* implicit */signed char) (short)-24653);
        arr_16 [(short)2] [i_4] = ((/* implicit */signed char) arr_14 [i_4]);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24652)) ? (((/* implicit */unsigned long long int) (+(var_10)))) : ((~(arr_14 [(signed char)7])))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_19 [i_6])))) ? (arr_14 [i_5]) : (((((/* implicit */_Bool) arr_19 [i_5])) ? (15590546896560388049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [0U])))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (var_10)));
                    var_23 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)5))));
                    var_24 = ((/* implicit */signed char) 15590546896560388050ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        arr_27 [i_8] = ((/* implicit */short) ((((/* implicit */int) (short)8851)) * (((/* implicit */int) (signed char)40))));
        arr_28 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (arr_21 [8U] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40373)))))) ? (arr_21 [i_8] [i_8]) : (((/* implicit */unsigned long long int) (+(3903363523U)))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_18 [11LL]))));
        /* LoopSeq 4 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            arr_33 [i_8] [i_8] = arr_18 [i_9];
            var_26 = ((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */long long int) (-(((/* implicit */int) (signed char)72)))))));
            arr_34 [i_8] = ((/* implicit */unsigned int) (unsigned short)27723);
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            arr_37 [i_8] [i_8] = ((/* implicit */signed char) 391603746U);
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8]))) : (arr_21 [i_8] [i_8])));
            var_28 = ((/* implicit */long long int) 2514539606U);
            var_29 = ((/* implicit */short) arr_19 [i_10]);
        }
        for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_39 [i_8] [i_11]))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_36 [i_8] [i_11])) < (var_11)))) : (((/* implicit */int) ((short) 268419072U)))));
                var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_8]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2852366714359566337LL))))) : ((+(((/* implicit */int) arr_19 [i_11]))))));
            }
            arr_46 [i_8] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)25163)) : ((-(((/* implicit */int) (unsigned short)40373))))));
        }
        for (short i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
        {
            arr_49 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_13])) || (((/* implicit */_Bool) arr_39 [i_8] [i_13])))) ? (((/* implicit */int) ((short) (short)21121))) : (((/* implicit */int) arr_30 [i_8] [i_8]))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))) ^ (((/* implicit */int) ((signed char) arr_17 [i_8])))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) var_3))))))));
        }
        arr_50 [i_8] = ((/* implicit */signed char) arr_22 [i_8] [i_8] [i_8] [i_8]);
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8265)) ? (((/* implicit */int) (short)8851)) : (((/* implicit */int) (short)-21133))));
        arr_54 [i_14] [i_14] = ((/* implicit */short) var_13);
        var_35 = ((/* implicit */signed char) (~(17629211914562627314ULL)));
    }
}
