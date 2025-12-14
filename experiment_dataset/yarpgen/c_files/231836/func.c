/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231836
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
    var_16 = ((/* implicit */long long int) 4092ULL);
    var_17 ^= ((/* implicit */int) (~(((var_15) * (min((var_2), (((/* implicit */unsigned int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_18 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_1 + 1]))) * (((/* implicit */unsigned long long int) var_3))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_19 = ((/* implicit */int) arr_3 [i_1 + 1] [i_0]);
                var_20 = ((/* implicit */short) ((int) (short)26041));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) var_8)) / (var_9)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) (((~(((/* implicit */int) (short)26781)))) * (((/* implicit */int) ((_Bool) var_3)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 319304836587421834LL)))))) * (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (short)-26774))))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((15902877971452085451ULL) * ((+((~(var_12)))))))));
                    arr_11 [i_0] [i_0] [5U] [i_0] = ((/* implicit */signed char) ((_Bool) var_7));
                }
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) (short)-26042))))) ? (((((/* implicit */_Bool) (~(441547883)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_11))))))) : (((/* implicit */unsigned long long int) ((((var_5) ? (var_15) : (var_14))) & (max((var_8), (var_15))))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 4; i_6 < 17; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) var_7);
                        var_26 = ((/* implicit */short) ((((/* implicit */long long int) (+(var_15)))) * (min((((var_9) / (var_9))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-12)) ^ (((/* implicit */int) var_5)))))))));
                    }
                    var_27 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_1)) ? (2423852886U) : (arr_5 [i_0 - 2])))));
                }
                for (short i_7 = 3; i_7 < 17; i_7 += 3) 
                {
                    var_28 = ((/* implicit */int) var_9);
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) min((((((/* implicit */_Bool) 1585673483)) ? (((/* implicit */unsigned long long int) var_15)) : (var_12))), (((/* implicit */unsigned long long int) var_3)))))));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    arr_22 [(short)11] [i_0] [i_2] [(short)11] [i_2] [(_Bool)1] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (456529163U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : ((-(var_13)))))));
                    var_30 = ((/* implicit */unsigned int) (!(max((arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_8]), (arr_10 [i_1] [(_Bool)1] [i_1 + 2] [i_8])))));
                    arr_23 [i_0] [i_1 - 1] [i_0] [i_8] = ((signed char) -5934947337923848065LL);
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */long long int) 6907980865573868806ULL);
                        var_31 = ((/* implicit */long long int) var_11);
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9 - 1] [i_1 + 1] [1ULL] [i_1] [i_0 + 4] [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_10))))));
                        var_34 = ((/* implicit */short) var_6);
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) var_7);
                        var_36 = ((/* implicit */short) (((-(((arr_25 [i_0] [(_Bool)1] [i_11] [(_Bool)1] [i_8] [i_11] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                    }
                }
                var_37 = ((/* implicit */unsigned int) var_3);
            }
        }
        var_38 = ((/* implicit */signed char) (short)22792);
        var_39 = (~(((((/* implicit */_Bool) 12)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))) : (min((((/* implicit */long long int) var_0)), (var_9))))));
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        arr_37 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_36 [i_12] [i_12])), (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((3020561072520666544ULL) | (var_12))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (((var_12) * (((/* implicit */unsigned long long int) var_13))))))));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 4; i_14 < 17; i_14 += 1) 
            {
                arr_43 [i_12] [i_13] [i_12] = ((/* implicit */short) ((unsigned short) (~(var_9))));
                var_40 = (~(max((((unsigned int) var_6)), (((arr_41 [i_12] [i_14] [i_13] [i_12]) * (var_14))))));
                var_41 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (signed char)127))), (((var_13) / (((/* implicit */long long int) var_4))))))), (min((max((((/* implicit */unsigned long long int) var_9)), (3020561072520666544ULL))), (((/* implicit */unsigned long long int) var_5))))));
                arr_44 [i_12] [i_14] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_40 [i_12] [i_13])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-13462))) / (var_6))) : (((var_6) / (1210225863055538582LL)))))));
            }
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_47 [i_12] [6] [i_15 + 2] [i_16]) + (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) max((314505988U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))) : ((~(min((var_9), (((/* implicit */long long int) var_15))))))));
                        arr_50 [i_12] [i_13] [i_12] [i_12] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26774)) * (((/* implicit */int) (_Bool)1))));
                        var_43 += var_14;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_17 = 1; i_17 < 17; i_17 += 3) 
            {
                for (unsigned short i_18 = 3; i_18 < 16; i_18 += 1) 
                {
                    {
                        var_44 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_36 [i_17 + 2] [i_18 - 3])) : (((/* implicit */int) arr_36 [i_17 + 2] [i_18 - 1]))))));
                        var_45 = ((/* implicit */long long int) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_13)) : (18442240474082181120ULL))))), ((+(((/* implicit */int) var_0))))));
                    }
                } 
            } 
        }
        for (short i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_10))) * (((/* implicit */int) var_5))));
            var_47 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) ((var_3) / (var_13))))), (127LL)));
        }
        var_48 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_12] [i_12] [i_12] [i_12]))))) * (3980461295U))));
        arr_58 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_9))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)115))))))) * (var_2)));
        var_49 = ((/* implicit */_Bool) max((var_49), ((_Bool)1)));
    }
    var_50 ^= ((/* implicit */unsigned long long int) (_Bool)1);
}
