/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46914
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
    var_20 = ((/* implicit */unsigned char) (unsigned short)54127);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 282452354);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned int) 50331648)))))));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((~(6588345304378465150LL))) : (((var_2) ? (((/* implicit */long long int) 3423855297U)) : (arr_6 [i_0] [i_0])))));
                arr_10 [i_0] [i_0] [(unsigned char)10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 134902265U)) & (arr_6 [i_0] [i_0])));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_21 = ((/* implicit */long long int) var_11);
                var_22 = ((/* implicit */signed char) var_9);
            }
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                var_23 = var_18;
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32011)))))) : (((unsigned int) var_12))));
                    var_25 = ((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0]);
                    arr_19 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17901))) / (18446744073709551615ULL))))));
                    var_26 = ((/* implicit */unsigned int) (+(arr_16 [i_0])));
                }
            }
            arr_20 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */long long int) (-(4160065022U)));
        }
        for (unsigned int i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 50331648))));
            var_27 = ((/* implicit */unsigned short) (~(((6442075533540949330LL) << (((var_11) - (1673518928U)))))));
        }
        for (int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((unsigned short) var_7));
            var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_7])) ? (((/* implicit */unsigned int) -50331631)) : (var_11))) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6))) - (34ULL)))));
            arr_28 [i_0] [i_7 + 2] [8LL] = ((((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) + (((var_14) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_0] [i_0]))))));
            arr_29 [i_0] [i_7 + 2] [i_0] = ((/* implicit */int) (signed char)19);
        }
        arr_30 [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (6442075533540949330LL) : (((/* implicit */long long int) 4160065030U))));
        var_30 = ((/* implicit */unsigned char) var_4);
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_31 = ((long long int) ((((/* implicit */_Bool) arr_31 [i_8])) || (((/* implicit */_Bool) arr_31 [i_8]))));
        var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 14190125701547617072ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))), ((~(arr_31 [i_8])))))) : (((unsigned long long int) min(((_Bool)1), (var_1))))));
        arr_33 [(unsigned char)17] = ((/* implicit */int) var_3);
    }
}
