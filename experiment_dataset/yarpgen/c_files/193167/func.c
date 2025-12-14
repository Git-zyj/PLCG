/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193167
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((long long int) 511));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (+(((unsigned long long int) 1615166287)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        arr_5 [(signed char)4] &= ((/* implicit */_Bool) arr_1 [i_1]);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_2))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(var_9))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_1] [i_2] [i_2]))));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned char)161)))));
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_1] [i_2]))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        arr_22 [i_2] [(signed char)5] [i_1] = ((/* implicit */int) var_10);
                        var_21 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_5)))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                    }
                    arr_23 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (+(arr_14 [i_1 + 3] [i_1] [i_1] [i_1 + 2])));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 1615166298)) ? (((/* implicit */unsigned int) 1615166287)) : (3824709744U))))));
                    var_24 = ((/* implicit */unsigned char) ((var_0) != (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        arr_31 [i_1] [i_7 - 1] [0LL] [i_8] [(unsigned short)2] = ((/* implicit */int) ((((_Bool) var_13)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) 2773779904741164918ULL)))));
                        arr_32 [i_1] [i_1] [i_8] [i_9] = ((/* implicit */long long int) var_12);
                    }
                } 
            } 
            var_26 = ((/* implicit */short) ((arr_14 [i_1] [i_1] [i_7 - 1] [i_1]) - (arr_14 [i_7] [i_1] [i_1] [i_1])));
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned short i_13 = 2; i_13 < 8; i_13 += 3) 
                    {
                        {
                            arr_44 [i_13 - 1] [i_1] [i_12] [i_11] [7LL] [i_1] [i_1] = ((/* implicit */short) ((arr_8 [i_1 + 3] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_1]) || (((/* implicit */_Bool) var_5))))))));
                            var_27 = ((/* implicit */unsigned int) var_6);
                            arr_45 [i_1] [i_1] [i_11 + 1] [i_11 - 3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_43 [i_1] [i_1 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_13])))))));
                        }
                    } 
                } 
            } 
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [i_1])) : (((/* implicit */int) arr_43 [i_10] [i_10] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1615166288)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)61258))))) : (var_0));
        }
    }
    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        arr_49 [i_14] = ((/* implicit */signed char) ((unsigned int) var_1));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_29 -= ((/* implicit */unsigned char) (+((~(var_8)))));
            arr_53 [i_15] [i_14] = ((/* implicit */_Bool) var_7);
        }
        for (short i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_54 [i_16])))) ? (((((/* implicit */unsigned long long int) var_1)) % (var_0))) : (((/* implicit */unsigned long long int) (+(arr_54 [i_14]))))));
            var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (127))) - (15))))))))) ? (((((var_8) + (9223372036854775807LL))) >> (((/* implicit */int) max((var_3), (((/* implicit */signed char) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (+(-3335070363869882923LL))))))));
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_4)))) >= (((long long int) arr_46 [(_Bool)1] [(_Bool)1])))))));
            var_33 = ((/* implicit */unsigned int) (+(10519156625527124250ULL)));
            var_34 = ((unsigned long long int) (~(max((var_9), (((/* implicit */unsigned long long int) arr_56 [i_14] [i_14]))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) ((unsigned int) arr_57 [i_14] [i_14] [i_14]));
            arr_59 [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
        }
    }
    for (signed char i_18 = 1; i_18 < 20; i_18 += 3) 
    {
        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_50 [(unsigned short)4])))) || (((/* implicit */_Bool) (+(((var_6) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_18 - 1])))))))))))));
        var_37 = ((/* implicit */unsigned short) (+(1615166287)));
    }
    var_38 = ((/* implicit */int) var_6);
    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13)))))));
}
