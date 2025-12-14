/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20849
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_18)));
            arr_8 [i_0] [i_1] [3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (3493717231892873922ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((/* implicit */int) var_3);
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_21 = var_6;
                var_22 = ((/* implicit */unsigned short) ((arr_10 [i_2 - 1] [i_0 - 4] [i_0 - 1]) == ((~(arr_4 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_22 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((int) var_6));
                            var_23 = ((/* implicit */int) ((unsigned long long int) var_17));
                            arr_23 [i_4] [i_0] [i_3] [8] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((arr_4 [i_2] [i_2]) * (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1])))));
                            var_24 = ((/* implicit */short) ((var_7) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_1 [i_0 - 3]))));
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */unsigned char) var_18);
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (var_3)));
                        arr_32 [5] = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 2]));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41014))))) : (((/* implicit */unsigned long long int) 1536333995))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            arr_37 [i_9] [i_9] [8] [i_7] [i_0] [i_0] = ((_Bool) arr_12 [i_0 - 2]);
                            var_27 = ((/* implicit */int) max((var_27), (var_17)));
                        }
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            var_28 *= ((/* implicit */_Bool) arr_19 [4ULL] [i_8] [i_7]);
                            arr_41 [i_10] = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_0]);
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((_Bool) var_17)))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            arr_45 [i_11] [i_8] [(signed char)9] [i_7] [i_6] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_29 [i_11] [i_0] [i_6] [i_6] [i_0]))) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_19 [i_11] [i_8] [i_7]) : (arr_42 [i_0] [i_0] [i_0 - 4])));
                            var_31 = ((/* implicit */int) (-(var_18)));
                        }
                        var_32 = ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 10; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned short i_14 = 2; i_14 < 11; i_14 += 1) 
                {
                    {
                        var_33 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 - 4]))));
                        var_34 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_12 - 1]))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_14)) : (18446744073709551591ULL)))));
                        var_35 = ((/* implicit */signed char) (~(arr_14 [(_Bool)1] [i_14 - 1])));
                    }
                } 
            } 
        } 
    }
}
