/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20537
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12637136492043654718ULL)) ? (arr_2 [i_0]) : (arr_2 [i_0]))) ^ (var_2)));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1 - 2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) var_8);
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-10640)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15210879887774787936ULL))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 15210879887774787912ULL))))))))))));
                    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) var_9)) / (((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))), (((/* implicit */long long int) (-(var_2))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (3720963720674866929LL) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)1] [(signed char)1])))))), (var_7))))));
                    var_15 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_16 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (15210879887774787919ULL)))))) ? (((((/* implicit */_Bool) 1606478396U)) ? (3235864185934763698ULL) : (((/* implicit */unsigned long long int) -268435456)))) : (((/* implicit */unsigned long long int) (-(arr_24 [2U] [i_7 + 1] [i_7 - 2] [2U] [i_0]))))));
                        arr_26 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3235864185934763721ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15210879887774787906ULL)) ? (((/* implicit */int) (unsigned char)9)) : (-268435456)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (15210879887774787921ULL) : (3178348682800095732ULL)))) ? (arr_25 [i_0]) : (((((/* implicit */_Bool) var_5)) ? (3235864185934763718ULL) : (((/* implicit */unsigned long long int) -3720963720674866930LL))))))));
                        arr_27 [i_6] [i_5] = (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (2600996169458576182LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)249)))))))));
                        var_17 = (((~(var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17ULL)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_18 ^= ((/* implicit */int) (-(arr_14 [i_8 + 2] [i_8 + 2])));
                var_19 ^= (+(arr_28 [i_8 - 2] [i_9]));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        {
                            arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_8 + 2] [i_8 - 2]))));
                            arr_42 [6LL] [i_9] [i_10] [i_10] [i_11] [i_9] = ((/* implicit */long long int) (-(arr_24 [i_8 - 2] [i_8] [i_8 + 1] [i_9] [i_9])));
                            var_20 = (!(((/* implicit */_Bool) (+(var_9)))));
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (long long int i_15 = 4; i_15 < 9; i_15 += 4) 
                    {
                        {
                            arr_54 [i_9] [i_9] [i_9] [i_9] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_13 + 1] [i_8 + 1] [i_8 - 2] [i_8 - 2])) ? (3178348682800095741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13 + 1] [i_8 + 1] [i_8] [i_8])))));
                            var_21 -= ((/* implicit */_Bool) (-(((var_1) ^ (((/* implicit */long long int) arr_47 [i_15] [i_14] [(_Bool)1] [i_8]))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8 - 2] [i_9] [i_13 + 1])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)11))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_37 [(_Bool)1] [i_13] [i_13 + 1] [6U] [i_13 + 1]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3235864185934763713ULL)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned char)35))))))))));
            }
            var_24 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)127))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_59 [(_Bool)1] [i_9] [i_16] [i_16] |= ((/* implicit */signed char) (+(((var_0) ? (((/* implicit */int) arr_29 [i_8] [i_8])) : (((/* implicit */int) (unsigned char)147))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) var_4)) : (arr_13 [i_8] [i_8] [i_8] [(signed char)6])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_10)) : (arr_18 [i_8] [i_9] [i_16]))) : (((/* implicit */int) var_0))));
                        var_26 *= (-(var_9));
                    }
                } 
            } 
        }
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            arr_62 [i_18] = ((/* implicit */unsigned long long int) var_1);
            arr_63 [i_8] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(9719538998129824059ULL)))) ? (((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) arr_17 [i_8 + 1] [(_Bool)0] [i_8 - 1]))));
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_27 ^= ((/* implicit */_Bool) ((arr_24 [i_8 - 2] [8] [8] [(unsigned char)2] [i_18]) + (((/* implicit */int) arr_57 [0] [0] [i_18]))));
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_19] [i_8 - 1] [(_Bool)1]))));
            }
            for (long long int i_20 = 4; i_20 < 9; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15210879887774787901ULL)) ? (((/* implicit */long long int) arr_24 [i_8 - 2] [6U] [i_8 + 1] [0LL] [i_18])) : (var_1)));
                            var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (var_9) : (((/* implicit */unsigned int) arr_47 [i_8] [i_8 - 2] [i_8] [i_8 - 2]))));
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                var_32 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))));
            }
        }
        var_33 *= ((/* implicit */unsigned int) 15210879887774787932ULL);
    }
    /* LoopSeq 1 */
    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            for (int i_25 = 1; i_25 < 16; i_25 += 1) 
            {
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), ((+(arr_82 [i_23] [9ULL] [i_25])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_83 [i_23] [i_23] [i_25]))))) : (var_1)));
                    arr_85 [i_23] [i_23] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_78 [i_25] [i_25 + 1] [i_25 - 1])))) ? (arr_78 [i_23] [i_24] [i_25]) : ((~(var_7)))));
                }
            } 
        } 
        arr_86 [i_23] [i_23] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_3)))) ? (min((((/* implicit */unsigned long long int) (signed char)49)), (arr_82 [i_23] [i_23] [i_23]))) : (((/* implicit */unsigned long long int) (~(var_2)))));
    }
}
