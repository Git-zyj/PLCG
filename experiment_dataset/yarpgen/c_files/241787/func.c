/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241787
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)255)));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(min(((-9223372036854775807LL - 1LL)), (8845148308842155500LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)4]))) : (((arr_2 [2LL]) | (var_5))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_16 += ((/* implicit */unsigned long long int) 4767593108921849273LL);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_8 [i_2] |= ((/* implicit */signed char) (short)9320);
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_2] [i_3] [i_3 + 2] [i_4 - 4])));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-57))))) ? ((+(arr_9 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967283U))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_19 += ((unsigned long long int) (signed char)-120);
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL)))))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (signed char)92);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 7; i_7 += 2) 
    {
        var_22 = ((/* implicit */long long int) arr_13 [i_7 - 1] [i_7] [i_7] [i_7 + 4]);
        arr_26 [i_7] = ((/* implicit */unsigned long long int) 4278108987U);
    }
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        var_23 |= ((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_10]);
                        var_24 = ((/* implicit */long long int) 16858308U);
                        arr_40 [i_8] [i_9] [i_10] [i_10] [i_10] = ((unsigned char) (-(((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_4))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_47 [i_8] [i_8] [i_13] [i_13] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (signed char)119))));
                    var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25647)))))));
                }
            } 
        } 
        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) (unsigned char)11)) : ((-(((/* implicit */int) (signed char)-120))))));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            var_28 += ((/* implicit */_Bool) 8696362596565826520ULL);
            var_29 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    {
                        arr_56 [i_16] [i_14] [i_16] [i_16] [i_16] [i_14] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) 748194280455635166LL)), (((((/* implicit */_Bool) arr_28 [i_14])) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned long long int) (unsigned short)0))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */int) arr_53 [i_8] [i_8])))), (((/* implicit */int) (unsigned char)33)))))));
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_27 [i_8]) : (arr_27 [i_8]))))));
                    }
                } 
            } 
            arr_57 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
            arr_58 [i_8] [i_8] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        }
        for (short i_17 = 1; i_17 < 17; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    {
                        arr_67 [i_18] [i_17 + 1] = ((/* implicit */unsigned short) 9223372036854775804LL);
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((short) ((min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) (-(var_1))))))))));
            var_34 = ((/* implicit */unsigned int) (-(14693929825207107825ULL)));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)121))));
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8806)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_35 [i_20] [i_20])))))));
    }
}
