/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53421
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
    var_14 = ((((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 0)) : (8478837274333579372LL)))))) ? (((long long int) (~(var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (-(var_10)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) arr_9 [i_0] [i_1] [i_2] [i_3])))));
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-94)) <= (((/* implicit */int) (signed char)127)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-93))))) : (((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)251))));
        var_19 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_20 = ((/* implicit */_Bool) var_8);
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2])) : (((/* implicit */int) arr_20 [i_5 - 3] [i_5 - 4] [i_5 - 4] [i_5 - 4] [i_5 - 4]))));
                                var_22 = (~(((((/* implicit */_Bool) 185058413)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)19732)) : (((/* implicit */int) (unsigned char)15)));
                }
            } 
        } 
        var_24 &= ((signed char) (unsigned char)17);
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17469))))) ? (((/* implicit */long long int) var_4)) : (var_2)));
                    arr_30 [12ULL] [i_9] [i_10] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) 4294967295U))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((unsigned long long int) arr_19 [i_4] [i_4] [i_4]));
    }
    for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (short i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    {
                        var_28 = ((/* implicit */short) (((_Bool)1) ? ((~((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_34 [i_14 - 1] [i_14] [i_12 - 1])))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 1; i_15 < 18; i_15 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_15] [i_14] [i_13] [i_13] [i_12 + 2] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11 - 1]))) : ((+(((var_12) + (var_12)))))));
                            var_30 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_7 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (6ULL))), (((/* implicit */unsigned long long int) ((12821201362948992697ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) | (((((/* implicit */_Bool) arr_42 [i_11] [i_12 + 2] [i_13] [i_14 + 1] [i_15 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_37 [i_11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17469)) ? (((/* implicit */long long int) 1619577857)) : (7340018233724215015LL))))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((signed char) 381493649));
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) var_8))))))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_11 [i_11] [i_12] [i_12] [i_12] [i_12 - 1])) - (((/* implicit */int) arr_11 [i_12] [(signed char)17] [i_12] [(unsigned char)18] [i_12 - 1]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13]))) : (var_2)));
                            var_35 = ((/* implicit */unsigned int) var_5);
                        }
                        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            var_36 &= min((((/* implicit */unsigned long long int) var_11)), (14290023341979310442ULL));
                            var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_36 [i_14] [i_14])) * (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_7)), (15784915148319554356ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (4609486692762886522LL) : (var_5))))))));
                        }
                    }
                } 
            } 
        } 
        arr_52 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_11] [i_11 - 2]), (arr_2 [i_11] [i_11 - 2])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_50 [i_11] [i_11 - 1] [i_11] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) 2U)) : (((((/* implicit */_Bool) (short)17490)) ? (((/* implicit */unsigned long long int) var_8)) : (var_12)))))));
    }
    var_38 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((5502667064506109652ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))), (((unsigned short) ((signed char) var_7)))));
    var_39 &= max((((/* implicit */unsigned char) var_6)), (var_11));
}
