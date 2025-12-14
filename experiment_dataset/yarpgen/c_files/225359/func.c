/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225359
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
    var_19 &= ((/* implicit */short) (unsigned char)36);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */long long int) arr_5 [0LL] [0LL] [i_2] [0LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : ((-(2974275880466736033ULL)))));
                        var_20 |= ((/* implicit */int) max((arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), ((!(((/* implicit */_Bool) 15472468193242815582ULL))))));
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [13] [13] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (-(arr_5 [i_0] [i_0] [i_0] [i_0])))) : (arr_3 [i_0] [i_0] [i_0])));
        arr_11 [(signed char)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(15472468193242815590ULL)))) ? ((~(((/* implicit */int) (signed char)-101)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))));
        arr_13 [i_0] = ((/* implicit */signed char) (unsigned short)65535);
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_24 [i_4] [i_5 - 1] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_17)))) ? (((((/* implicit */_Bool) arr_21 [i_4] [(short)6] [(signed char)17] [i_7])) ? (arr_18 [i_4] [i_4] [i_7] [i_7]) : (((/* implicit */int) arr_16 [i_4])))) : (((/* implicit */int) max((arr_14 [0ULL]), (var_6))))))));
                        var_22 = ((/* implicit */int) 6840658693558510020ULL);
                        arr_25 [i_4] [i_4] [14U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)-32761)), ((unsigned short)58583)));
                        arr_26 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_7] [i_6]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_22 [(unsigned char)17] [(unsigned char)17] [i_4] [i_4] [i_4]))));
        var_24 = ((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_8] [i_8] [i_8] [i_8 + 2] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14))));
                                arr_39 [i_4] [i_10] [i_9] [i_4] [i_11 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(1932524587)))), (arr_35 [i_8] [i_4])))) ? (max(((((_Bool)1) ? (arr_17 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))))))));
                    var_26 = ((/* implicit */signed char) arr_28 [i_9] [i_8]);
                }
            } 
        } 
    }
    var_27 += ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (signed char i_12 = 3; i_12 < 18; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
        {
            for (int i_14 = 1; i_14 < 18; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) arr_45 [i_12 + 1] [i_13 - 2]);
                        arr_49 [i_15] [i_15] [i_14] [i_13] [i_12 + 2] &= ((/* implicit */short) (~(((/* implicit */int) (signed char)-78))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_29 = ((/* implicit */int) arr_28 [i_12 + 1] [i_14 + 1]);
                            arr_52 [i_13] [i_13] [i_13] [i_15] [i_12] [i_15] [13] = ((/* implicit */short) (-(arr_17 [i_12 - 1])));
                            var_30 = ((/* implicit */unsigned char) arr_43 [i_13 - 1] [i_12] [i_12]);
                            var_31 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)216))));
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-56))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) arr_33 [i_12 + 2] [i_12] [i_12] [i_12]))));
                        }
                        for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            var_34 = ((/* implicit */int) min((var_18), (((/* implicit */signed char) (_Bool)1))));
                            var_35 = ((/* implicit */signed char) var_12);
                        }
                        /* vectorizable */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1355859290)) ? (3019407596103230544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_61 [i_13] [i_13] [i_14] [i_15] [i_13 - 1] [i_13] [i_19] = ((/* implicit */short) arr_47 [i_14] [i_13 + 1]);
                            arr_62 [i_15] [i_13] [i_19] [i_19] [i_19] [i_14] = ((/* implicit */unsigned short) arr_54 [i_13 - 1] [i_13 - 1] [13] [i_15] [i_14] [i_14]);
                            var_37 = ((/* implicit */long long int) arr_50 [i_12 + 1] [i_13 - 1] [i_13] [i_14] [(signed char)1] [i_15] [i_19]);
                            var_38 -= ((/* implicit */int) (unsigned char)247);
                        }
                        var_39 &= ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned char)83), (((/* implicit */unsigned char) (_Bool)0))))), ((-((~(((/* implicit */int) (signed char)117))))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */long long int) (-(var_17)));
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            for (long long int i_21 = 1; i_21 < 17; i_21 += 1) 
            {
                {
                    var_41 = arr_17 [i_20];
                    arr_69 [i_21] = ((/* implicit */short) arr_50 [i_12] [i_12 + 2] [i_20] [i_12] [(signed char)16] [i_21] [i_21]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_22 = 2; i_22 < 18; i_22 += 1) 
    {
        var_42 ^= ((/* implicit */int) arr_70 [i_22 + 3] [i_22 + 4]);
        var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned short i_23 = 4; i_23 < 16; i_23 += 1) 
    {
        for (int i_24 = 4; i_24 < 15; i_24 += 4) 
        {
            {
                arr_77 [i_23 - 1] [i_24] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_67 [8U] [8U] [i_24] [i_24 + 2]) : (((/* implicit */int) min(((short)-14351), (((/* implicit */short) (_Bool)1))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)26866)))))))));
                var_44 += arr_41 [i_24] [i_23];
                arr_78 [3] [3] [i_24 - 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-114))));
            }
        } 
    } 
}
