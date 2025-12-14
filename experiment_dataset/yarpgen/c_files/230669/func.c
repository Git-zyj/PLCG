/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230669
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_21 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_11)))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_4 [i_0 - 2] [13U] = ((/* implicit */signed char) arr_3 [i_0] [10]);
            /* LoopSeq 3 */
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [(_Bool)1])) || (((/* implicit */_Bool) ((unsigned int) arr_1 [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_4] [i_4] [i_3 + 4] [i_2 - 2]));
                            arr_14 [(unsigned char)20] [i_0] [(short)10] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0 - 2]))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [1ULL]))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                arr_16 [i_2] [i_1] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((-(((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) var_5));
                    arr_21 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_10 [i_0] [i_2] [(unsigned char)2] [(unsigned short)2] [(unsigned char)2] [(unsigned char)2])))) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2]))));
                    var_24 += ((/* implicit */short) arr_11 [i_0] [i_0 + 1] [i_2 + 2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 523333242U)) ? (2510524924U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_25 [9] [i_0] [i_2] [19ULL] [i_6] [9] [i_0] = (short)(-32767 - 1);
                    }
                    arr_26 [i_5] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0])))));
                }
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                var_27 -= ((/* implicit */short) ((var_6) ? (arr_22 [i_0 + 1] [i_0 - 1]) : (arr_22 [i_0 - 2] [i_0 - 2])));
            }
            for (unsigned short i_8 = 4; i_8 < 19; i_8 += 2) 
            {
                var_28 += ((/* implicit */unsigned int) var_19);
                arr_33 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17443311163546360460ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18213388750738563991ULL)));
            }
        }
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_4)))))) >> (((((((/* implicit */_Bool) arr_23 [(unsigned char)15] [(_Bool)1] [i_0] [i_0] [i_0 - 1] [4U])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0 + 1])) ? (((/* implicit */int) var_16)) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_0])), (var_7))))) - (60ULL)))));
        arr_34 [i_0] = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (var_17) : (17874492928429391487ULL)))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (var_0)));
        arr_38 [i_9] [i_9] = ((/* implicit */signed char) var_0);
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
    {
        arr_41 [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_36 [i_10] [i_10]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) var_1)), (var_3))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_37 [i_10])))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((4294967292U) - (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10])))))) ? (((unsigned int) arr_35 [i_10])) : (((unsigned int) arr_36 [i_10] [i_10]))));
    }
}
