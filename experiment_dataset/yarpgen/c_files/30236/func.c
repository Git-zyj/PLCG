/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30236
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((arr_5 [i_1]) >= (((/* implicit */unsigned long long int) var_14))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_6 [i_0] [i_1]);
        }
    }
    for (int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */int) 11770339883156068851ULL);
        var_18 = (_Bool)1;
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_19 = ((/* implicit */int) 11770339883156068846ULL);
            var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2]))) : (var_7)))));
        }
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 469402047U))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min(((-(var_14))), (((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])))))))));
        var_23 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) 11770339883156068869ULL)) ? (11770339883156068851ULL) : ((+(11770339883156068868ULL))))), (((/* implicit */unsigned long long int) arr_17 [i_4]))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) ((6676404190553482742ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_24 = 6676404190553482742ULL;
            var_25 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) -2147483644)) : (6676404190553482770ULL)));
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 = arr_0 [i_6];
                            arr_31 [i_5] [i_5] [i_5] [i_7] = var_5;
                            arr_32 [(signed char)9] [i_7] = ((/* implicit */signed char) ((arr_25 [i_7] [i_5] [i_7 + 1] [i_7 - 1]) ? (((/* implicit */int) arr_25 [i_7] [i_6] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_25 [i_7] [i_5] [i_7 - 1] [i_7 - 1]))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) var_13);
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_13 [i_6]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) var_6);
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_42 [i_5] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */signed char) arr_24 [i_10] [i_10] [i_10]);
                            var_30 = ((/* implicit */unsigned int) (unsigned short)52339);
                            arr_43 [i_10] = ((/* implicit */_Bool) 6676404190553482748ULL);
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 2; i_14 < 13; i_14 += 4) 
        {
            arr_46 [i_5] = ((/* implicit */unsigned int) arr_0 [i_5]);
            var_31 &= ((/* implicit */unsigned short) arr_6 [i_5] [(_Bool)1]);
            /* LoopSeq 1 */
            for (int i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                arr_50 [i_5] [(signed char)10] [i_5] [i_15] = (signed char)-11;
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_15] [i_15 + 2] [i_15 + 1]))))) : ((-(arr_40 [i_15])))));
            }
        }
        arr_51 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_5] [i_5])) ? (2311714420246261975ULL) : (((/* implicit */unsigned long long int) 33546240U))))) ? (((((/* implicit */_Bool) arr_39 [i_5] [(unsigned short)6] [i_5] [i_5])) ? (arr_39 [i_5] [i_5] [i_5] [i_5]) : (arr_39 [i_5] [i_5] [i_5] [i_5]))) : (((arr_39 [i_5] [i_5] [i_5] [i_5]) >> (((arr_39 [i_5] [i_5] [i_5] [i_5]) - (11093270715710568668ULL))))));
    }
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            {
                arr_58 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((6676404190553482772ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((((/* implicit */_Bool) (unsigned short)50144)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (4611685984067649536ULL)))))) ? (min((6676404190553482744ULL), (11770339883156068851ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_38 [i_17] [i_17] [i_17]) / (((/* implicit */int) (_Bool)1)))))))))));
                var_33 = ((/* implicit */signed char) (_Bool)1);
                var_34 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_17 - 1] [i_17]))) < (6676404190553482795ULL))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) 1514278608)) : ((-(9389472059406704751ULL)))));
    var_36 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
}
