/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236944
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (+((-(var_1)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))))));
            var_20 = ((/* implicit */long long int) ((((max((((/* implicit */long long int) 0U)), (263394169664129117LL))) + (((/* implicit */long long int) (-(-1)))))) > (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned int) var_2)))))));
            var_21 = ((((((((/* implicit */long long int) ((/* implicit */int) var_2))) * (-263394169664129121LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) * (((/* implicit */long long int) (+(var_10)))));
        }
        var_22 = ((/* implicit */unsigned int) var_16);
        var_23 *= ((/* implicit */short) var_14);
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) min((max((min((var_6), (((/* implicit */unsigned int) var_16)))), (min((var_1), (var_6))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (arr_8 [(short)9] [i_2]) : (var_5))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) min((min((-1), (((/* implicit */int) (short)-4206)))), (((/* implicit */int) min((min((((/* implicit */signed char) var_8)), (var_16))), (((/* implicit */signed char) var_8)))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(max((min((1239193045U), (((/* implicit */unsigned int) (short)22429)))), (((/* implicit */unsigned int) arr_2 [i_2] [i_2])))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_2 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_3] [i_4] [i_4] [10LL] [i_6 + 3] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_6 + 3] [i_4 + 1])) > (((/* implicit */int) arr_14 [i_6 + 4] [i_4 + 1]))))) == (((/* implicit */int) max((arr_14 [i_6 + 3] [i_4 + 1]), (arr_14 [i_6 + 3] [i_4 - 1]))))));
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) (+((~(((/* implicit */int) max(((short)-4209), (((/* implicit */short) var_2)))))))));
                            var_28 = ((/* implicit */unsigned char) ((((long long int) arr_5 [i_4 + 1] [i_4 + 3] [i_6 - 1])) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)159)) && (((/* implicit */_Bool) (short)-1))))))));
                            var_29 = ((/* implicit */short) arr_14 [i_5] [i_3]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_0 [i_6 + 2] [i_9]);
                            var_30 = ((/* implicit */signed char) min((((/* implicit */int) ((short) (~(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) 3055774241U)) ? (((/* implicit */int) arr_14 [i_5] [i_6 - 1])) : (((/* implicit */int) (unsigned char)87))))));
                            arr_35 [i_3] [i_4] [i_4] [i_6] [i_9] = var_11;
                            arr_36 [i_3] [i_4] [i_5] [i_6] [i_6] [i_9] = min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((-1639590571) + (2147483647))) >> (((((/* implicit */int) (short)-4206)) + (4232))))))))));
                        }
                        arr_37 [i_3] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_11))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)4209))))))));
                        var_31 *= ((/* implicit */short) max((max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (((1669321746523081763LL) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))))), (((/* implicit */long long int) var_4))));
                    }
                    arr_38 [i_3] = ((/* implicit */_Bool) arr_20 [i_4 - 2] [i_4 - 2] [i_4 + 3]);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 1; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((max((var_19), (min((((/* implicit */unsigned int) var_4)), (var_18))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_42 [i_4])) | (var_17)))))))))))));
                                arr_45 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_7)))), (((var_8) ? (var_0) : (((/* implicit */long long int) arr_44 [i_3] [i_3] [i_3] [i_3] [i_3])))))), (((/* implicit */long long int) (+(3U))))));
                                var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)4201))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1377703404664681221LL)))))));
                            }
                        } 
                    } 
                    arr_46 [i_3] [(short)16] = ((/* implicit */unsigned int) (~(min((var_0), (((/* implicit */long long int) ((arr_40 [i_3] [i_4] [i_5] [i_5]) ? (1239193019U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3] [(signed char)18] [i_5] [i_5] [i_5]))))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_34 = ((/* implicit */short) (~(max((((var_11) + (4468415255281664LL))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) (signed char)48)))))))));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((((unsigned int) arr_15 [i_12])) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_12]))) <= (var_6))))))))))));
            var_36 = ((/* implicit */short) (~((~((~(var_14)))))));
            arr_49 [i_3] = ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-774)))), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_12]))))))) | (((max((((/* implicit */unsigned int) var_16)), (var_19))) / (max((1239193054U), (((/* implicit */unsigned int) (short)-29201)))))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_3] [i_3] [7LL] [i_3] [i_3])) && (((/* implicit */_Bool) 7241026988406692044LL))))), (max(((short)-512), ((short)(-32767 - 1)))))))));
            arr_53 [i_3] = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */_Bool) min((arr_29 [i_13] [i_13] [i_13 - 1] [i_3] [i_3]), (((/* implicit */short) arr_11 [(signed char)5]))))) && (((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))), (min(((short)-106), (max((((/* implicit */short) arr_5 [i_13 - 1] [i_3] [i_3])), (arr_31 [i_3] [i_3] [i_3])))))));
            var_38 += var_17;
            /* LoopSeq 1 */
            for (int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_39 = ((arr_40 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_40 [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_40 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])))) : (((/* implicit */int) arr_40 [i_13 - 1] [i_13] [i_13] [i_13 - 1])));
                var_40 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)29195))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)213)))))));
            }
            var_41 = ((/* implicit */signed char) var_14);
        }
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (+(((arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]) | (((/* implicit */int) var_9)))))))));
            arr_58 [i_3] [10U] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [14U] [(unsigned char)18])) && (arr_54 [i_15] [i_3])))), (min((arr_21 [(short)17]), (((/* implicit */long long int) var_18)))))))));
            arr_59 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)33))));
        }
        for (short i_16 = 2; i_16 < 22; i_16 += 4) 
        {
            arr_64 [i_3] [15LL] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((arr_29 [i_3] [i_16] [i_3] [i_3] [i_3]), (((/* implicit */short) arr_25 [i_3] [11U] [17U] [i_3] [i_16]))))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32743)))))));
            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_5))));
        }
    }
    var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
}
