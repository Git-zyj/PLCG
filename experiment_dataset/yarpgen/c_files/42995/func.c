/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42995
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
    var_15 = ((/* implicit */signed char) min((min((max((1819584157), (((/* implicit */int) var_3)))), (((/* implicit */int) (short)24348)))), ((~(((/* implicit */int) ((13931928398644064269ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))))))));
    var_16 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)204))))) ? (((var_6) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [(signed char)2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(unsigned short)3] [i_2] [(signed char)5] = ((/* implicit */int) (short)-29899);
                                var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_4 + 2] [(_Bool)1] [i_3])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [9U] [i_2] [i_3] [(_Bool)0])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_18 = var_1;
                                var_19 = ((/* implicit */_Bool) (signed char)75);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1 - 2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) >= ((~(((/* implicit */int) (signed char)70))))));
                    var_20 = ((/* implicit */signed char) arr_7 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 3]);
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_7))) * (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_13)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (arr_22 [(_Bool)1] [i_7]))) : (((long long int) max((((/* implicit */int) var_2)), (567712817))))));
        arr_24 [(unsigned char)9] = ((/* implicit */short) ((((_Bool) ((-567712829) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(var_6)))) : ((~(((/* implicit */int) ((signed char) arr_0 [(signed char)14])))))));
        var_22 += ((/* implicit */short) ((_Bool) var_1));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (short i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) var_4);
                        arr_33 [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (0ULL)))))))));
                        var_24 = ((unsigned char) var_9);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) var_8);
                        arr_41 [(signed char)9] [11U] [i_13] [i_11] = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)77))) : (var_9))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [(short)6] [(unsigned char)0] [i_12] [(_Bool)1]))))));
                            var_27 = ((/* implicit */short) (~(((/* implicit */int) arr_23 [(signed char)6] [i_11 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
}
