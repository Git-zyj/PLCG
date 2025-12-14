/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37850
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) var_10));
                    var_19 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_9)));
                    var_20 = ((/* implicit */signed char) arr_3 [i_1] [i_1 - 1]);
                }
            } 
        } 
        var_21 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 11993700590845527821ULL)) || (((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_4 - 1] [i_0])))));
                    var_23 = ((/* implicit */unsigned short) arr_7 [i_0] [i_3] [i_0] [i_4 + 1]);
                    arr_14 [i_0] [(unsigned char)10] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_6 [i_0] [i_3] [i_4 - 1]) : (3062497731U)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (arr_6 [i_0] [i_0] [i_0]) : (8388607U))) : (((/* implicit */unsigned int) 947494778))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 8388607U))));
                }
            } 
        } 
        arr_15 [(short)0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) != (((long long int) -947494772))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_7 [i_5] [i_5] [i_5] [i_0])));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_5] [i_0]))) ? (((int) var_9)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)15]))))));
            var_27 = arr_5 [i_0];
            var_28 = ((((/* implicit */int) arr_9 [i_5] [i_0])) % (((/* implicit */int) arr_9 [i_0] [i_5])));
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
        {
            var_29 += ((/* implicit */_Bool) ((long long int) arr_13 [i_0] [i_0]));
            var_30 = ((/* implicit */signed char) ((long long int) 4286578684U));
        }
    }
    /* LoopNest 2 */
    for (signed char i_7 = 3; i_7 < 20; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            {
                arr_28 [i_7 - 2] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_5)))) & (((((/* implicit */_Bool) -947494778)) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (short)-11440)))) : (((/* implicit */int) arr_24 [i_8 + 3]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    var_31 = ((/* implicit */signed char) ((arr_26 [i_8 - 1] [i_9 + 1]) ? (((/* implicit */int) arr_26 [i_8 - 1] [i_9 + 1])) : (((/* implicit */int) arr_26 [i_8 - 1] [i_9 + 1]))));
                    arr_31 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_7 - 1])) >> (((((/* implicit */int) arr_22 [i_7] [i_8])) + (73)))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (210143096974286546LL)))));
                }
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) ((min((16411857356294476995ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_7] [i_8 - 1])) & (((/* implicit */int) var_8))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8 + 2] [i_7 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)48)))))))))));
                        var_34 = ((/* implicit */unsigned int) var_11);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) max((var_35), (((unsigned char) ((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_10] [i_7] [i_8 - 1] [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10 - 2] [i_10 - 2]))) : (arr_25 [i_7 - 2] [i_7 - 2]))))));
                                var_36 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_7] [i_8 + 1] [i_10] [i_8] [i_8 + 1] [i_7 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)7582))))) ? (((/* implicit */unsigned long long int) arr_25 [i_13] [i_13])) : (min((arr_33 [i_7] [i_8] [i_12]), (((/* implicit */unsigned long long int) arr_24 [i_7])))))), (arr_33 [i_10 - 1] [i_12] [i_10 - 1])));
                                var_37 = ((/* implicit */signed char) ((unsigned long long int) var_5));
                                var_38 = ((unsigned long long int) (unsigned char)145);
                            }
                        } 
                    } 
                    var_39 += ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (unsigned char)31)), (arr_25 [i_10] [i_10]))));
                }
                arr_45 [i_7 - 2] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57954)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_33 [i_7 - 2] [i_7] [i_7]) < (((/* implicit */unsigned long long int) arr_34 [i_7])))))) : (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (arr_25 [i_8 + 3] [i_7 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_40 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (4286578687U)))) ? (((unsigned int) (unsigned short)7936)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) > (arr_46 [i_7] [i_7] [i_14] [i_14]))))))), (((/* implicit */unsigned int) min((arr_32 [i_14] [i_8] [i_7 - 3]), (((/* implicit */unsigned short) arr_23 [i_7] [i_8 + 2])))))));
                    var_41 += ((/* implicit */_Bool) min((((((/* implicit */int) ((arr_46 [i_14] [i_14] [i_7] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57943)))))) % (((/* implicit */int) ((var_11) <= (0)))))), (((/* implicit */int) ((_Bool) ((arr_24 [i_7]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_42 [i_14] [i_14] [i_8] [i_7] [i_7 + 1] [i_7]))))))));
                    var_42 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) - (arr_46 [i_14] [i_7 - 3] [i_8 + 2] [i_7 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_7] [i_7] [i_8] [i_14] [i_14] [i_14])) % (((/* implicit */int) arr_38 [i_7 + 1] [i_8] [i_14] [i_14] [i_8] [i_14])))))));
                    var_43 *= arr_23 [i_7] [i_14];
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 20; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                    {
                        arr_52 [i_7] [i_8] [i_15] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)201)), (947494792)))) ? (arr_36 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 3] [i_8]) : (((arr_36 [i_7] [i_7] [i_7] [(unsigned char)18] [i_7 - 2] [i_16]) | (arr_36 [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 3] [i_7])))));
                        var_44 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((-947494779), (((/* implicit */int) arr_38 [i_7] [i_8 + 1] [i_15] [i_16] [i_15] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7 - 2]))) : (arr_46 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3])))));
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) arr_47 [i_7 - 3] [i_7] [i_8 + 1]))) - (min((max((-1893645969491452720LL), (((/* implicit */long long int) arr_37 [i_7] [(unsigned char)2] [i_15] [i_7])))), (((/* implicit */long long int) ((short) 8388621U)))))));
                    }
                    for (int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) max((((/* implicit */signed char) min((((var_9) != (((/* implicit */int) arr_22 [i_15] [i_8])))), (((((/* implicit */_Bool) (signed char)-102)) && (arr_26 [i_7] [i_7])))))), (((signed char) (-(var_9))))));
                        arr_55 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_17])) ? (((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1])) : (((((/* implicit */int) arr_54 [i_15 - 1] [i_8 + 3] [i_15 + 1] [i_17] [i_17] [i_17])) >> (((((/* implicit */int) arr_32 [i_15 + 1] [i_8 - 1] [i_15 + 1])) - (48023)))))));
                        var_47 = max((((unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_7] [i_8 + 3] [i_7] [i_7] [i_7] [i_15]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7])) ? (1433317971U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7] [i_7 + 1] [i_17] [i_17] [i_17] [i_17]))))))))));
                        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4520)) || (((/* implicit */_Bool) 1152921487426977792LL))));
                        var_49 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_37 [i_7] [i_15 + 1] [i_7 - 1] [i_8 - 1]), ((unsigned char)8)))), (((((/* implicit */_Bool) arr_46 [i_7] [i_15 + 1] [i_7 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_46 [i_7 - 1] [i_15 + 1] [i_7 - 1] [i_8 - 1])))));
                    }
                    var_50 = ((/* implicit */unsigned short) arr_30 [i_7] [i_7] [i_15 - 1]);
                    var_51 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7]))) | (144115187941638144LL)))))) | (((max((arr_33 [i_7] [i_8] [i_8]), (((/* implicit */unsigned long long int) 563581321)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((3231170339U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                }
            }
        } 
    } 
}
