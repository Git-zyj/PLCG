/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34644
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
    var_17 -= ((/* implicit */short) var_7);
    var_18 = ((/* implicit */short) min((((((/* implicit */int) var_15)) + (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_8))))))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-1)) + (22)))))));
    var_19 &= ((/* implicit */signed char) var_9);
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) 6472806696979847146ULL);
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((min((((arr_3 [(_Bool)1]) * (((/* implicit */int) arr_8 [(unsigned char)4])))), (((/* implicit */int) var_3)))), (((/* implicit */int) arr_4 [i_0 + 2] [(_Bool)1])))))));
                    arr_9 [i_1] [9ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_3 [i_1])))) || (((/* implicit */_Bool) ((arr_3 [i_1]) ^ (arr_3 [i_1]))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((3090281309373711603ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))))) / (min((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */int) (unsigned char)136))))));
                }
                for (signed char i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_23 = arr_8 [i_1];
                        var_24 = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) arr_5 [i_4 + 1] [i_4 + 1])) | (arr_6 [(signed char)20] [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)83)), (arr_5 [i_0 + 1] [i_0 + 1]))))));
                        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1190130181)) ? (((/* implicit */int) (short)-6054)) : (-1287811652)));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            arr_22 [i_6] [i_5 - 2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) var_8);
                            var_26 = ((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1]);
                            var_27 = ((/* implicit */_Bool) max((var_27), (((arr_11 [i_1 + 1] [i_1 - 1] [i_6]) == (arr_11 [i_5 - 1] [i_5 + 1] [i_6])))));
                            var_28 = ((/* implicit */int) var_1);
                            var_29 = ((/* implicit */int) var_3);
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_30 ^= ((/* implicit */short) var_0);
                            var_31 = ((/* implicit */_Bool) var_12);
                        }
                        for (unsigned short i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) == (arr_25 [i_1] [i_0] [i_1 + 1] [i_1] [i_5 + 1] [4])));
                            var_33 ^= ((((((/* implicit */int) arr_4 [i_1] [(unsigned short)10])) & (((/* implicit */int) arr_8 [2])))) - ((-(((/* implicit */int) var_0)))));
                        }
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (arr_21 [i_5 + 2] [i_1 + 1])));
                        var_35 &= ((/* implicit */_Bool) arr_14 [i_0 + 1]);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 2; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_36 |= ((/* implicit */_Bool) ((((/* implicit */int) var_12)) / ((-(arr_3 [(signed char)6])))));
                        var_37 = ((/* implicit */unsigned short) ((arr_0 [i_1] [i_1 + 1]) & (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) -869470549)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_38 = ((/* implicit */long long int) var_12);
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]))));
                            arr_32 [i_10] [i_1] [(unsigned char)5] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) ((arr_16 [i_10] [i_9 - 1] [i_3] [i_3] [14LL] [i_0 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                            var_40 = ((/* implicit */_Bool) min((var_40), (((arr_12 [i_1] [10] [i_1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_9] [(unsigned short)0] [i_0 - 1] [i_0 - 1])))))));
                        }
                    }
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_16)) - (154)))));
                        var_42 = ((((/* implicit */_Bool) min((arr_19 [i_0 + 2] [i_1] [20LL] [i_1] [i_11 + 1]), ((~(var_6)))))) && (((/* implicit */_Bool) arr_21 [i_11] [i_11 - 1])));
                        var_43 = ((/* implicit */short) var_7);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 3; i_12 < 17; i_12 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned short) var_7);
                            var_45 -= ((/* implicit */unsigned char) arr_38 [(_Bool)1] [i_1] [18LL] [i_1 + 1] [i_1] [(unsigned short)0]);
                            arr_40 [10] [i_3 + 1] [i_1] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))));
                        }
                    }
                    var_46 = ((/* implicit */unsigned int) var_12);
                    var_47 = ((/* implicit */int) ((arr_30 [i_0] [i_0] [14] [(_Bool)1] [i_3] [i_3] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))));
                    var_48 &= ((/* implicit */unsigned short) arr_21 [i_1] [i_0 - 1]);
                }
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        {
                            var_49 = var_3;
                            var_50 = ((/* implicit */unsigned long long int) var_2);
                            var_51 = max((var_9), (min(((-2147483647 - 1)), (699626329))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */_Bool) max((max((((((/* implicit */int) var_3)) / (var_6))), (((/* implicit */int) var_13)))), (((/* implicit */int) min((var_10), (((/* implicit */short) var_7)))))));
            }
        } 
    } 
}
