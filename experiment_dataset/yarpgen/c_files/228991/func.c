/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228991
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
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((signed char) var_0)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [(short)9] [i_0] = ((/* implicit */signed char) ((_Bool) ((unsigned short) var_8)));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+((-(1LL))))) : (var_2)));
                    var_18 = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? ((-(((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (signed char)44))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (unsigned short)27586)) : (((/* implicit */int) (unsigned short)27590))));
    /* LoopSeq 3 */
    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned long long int) (-(((long long int) arr_12 [i_3 + 1]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27ULL)) ? (-2147483631) : (((/* implicit */int) (signed char)79))))) ? (((((/* implicit */_Bool) (unsigned short)37946)) ? (((/* implicit */long long int) ((int) (unsigned short)37950))) : (5LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (_Bool)1))))), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (-2147483623) : (((/* implicit */int) (unsigned short)58677)))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [(short)12] [(unsigned char)0]))))) ? (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (signed char)-95))))))))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 13; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) var_15);
                            arr_26 [i_4] [i_4] [i_6] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (var_7)));
                            arr_27 [i_4] [i_4] [i_4] = (-(((((/* implicit */_Bool) 1629323784)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (var_2))));
                            var_25 = ((/* implicit */unsigned char) (+((+(max((arr_19 [i_8]), (arr_19 [i_6])))))));
                        }
                        arr_28 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4]))));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(var_12)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-84))))) : ((+(arr_20 [i_5 + 2] [i_5] [6])))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((long long int) 1629323778)) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            var_28 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_22 [(unsigned char)5] [(unsigned char)5] [13] [i_4] [i_5 + 1] [i_9 - 1])) ? (arr_22 [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    arr_35 [i_4] [i_4] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_31 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13])))))))));
                                arr_41 [(signed char)3] [i_10] [i_11] [i_11] [i_13] [i_12] [i_4] = ((/* implicit */unsigned char) arr_23 [i_4] [i_11] [i_11] [i_12 - 1] [i_4] [i_12]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) 
                    {
                        arr_46 [i_4] [i_10] [i_10] [i_4] = ((/* implicit */unsigned char) var_1);
                        arr_47 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4] [i_14 + 4]))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (arr_30 [i_4])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_4] [i_14 + 3] [i_14 + 3] [i_14 + 1] [i_14] [i_14 + 4]))))));
                        var_30 = ((/* implicit */long long int) arr_18 [i_11] [i_14 + 3] [i_14 + 1]);
                        var_31 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) -7855557276108801653LL))), (arr_45 [i_10] [i_10] [i_14 + 3] [i_14 + 4])));
                    }
                }
            } 
        } 
        arr_48 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_32 [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_42 [i_4] [i_4] [(signed char)13] [i_4] [i_4])) ? (((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_32 [i_4] [i_4] [i_4])))) : (((arr_25 [i_4]) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)27583))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_51 [i_15] [i_15] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_15] [6]))) - (arr_24 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)12]))));
        arr_52 [i_15] [i_15] = ((((/* implicit */_Bool) ((long long int) ((arr_34 [i_15] [4]) ? (((/* implicit */long long int) var_5)) : (var_2))))) ? ((+(((((/* implicit */_Bool) arr_0 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)1]))) : (arr_12 [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_15] [i_15] [i_15] [0U] [14] [i_15]))));
        var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11711)) ? (((/* implicit */int) (_Bool)1)) : (-2147483603)));
    }
}
