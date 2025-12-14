/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21431
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7407898500181864124LL)) ? (((/* implicit */unsigned long long int) -7407898500181864125LL)) : (arr_0 [i_0]))) << (((((/* implicit */int) arr_2 [i_0])) - (110)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -7407898500181864146LL)))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) | (min((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0 - 1])))))));
        var_17 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)236))))), (max((18446744073709551615ULL), (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(var_8)))) ^ (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) var_14)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) var_9)) : (var_8))) : (((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (unsigned short)8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7407898500181864124LL)) ? (7808276737500972460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_1])), (-321868663)))) : ((-(857715140U))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_2 + 1] [i_3] [i_4] [i_3] = ((/* implicit */signed char) var_11);
                        arr_16 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_10 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), (((/* implicit */long long int) -41196355)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */_Bool) 18446744073709551611ULL);
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_5 - 2])) && (((/* implicit */_Bool) (unsigned char)28)))) && (((_Bool) var_14))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
            {
                for (short i_8 = 4; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((short) 18902810393799053LL));
                            var_20 *= ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
            } 
            arr_31 [i_5] [i_5 + 2] [i_6] = ((/* implicit */_Bool) arr_2 [i_6]);
            var_21 ^= ((/* implicit */short) -618080446);
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_2 [16ULL]))));
        }
        for (int i_10 = 3; i_10 < 10; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        arr_40 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [i_5] [i_10] [i_11])) : (((/* implicit */int) arr_25 [i_12] [i_10 + 1] [i_10 + 1]))));
                        var_23 ^= ((/* implicit */unsigned int) (_Bool)0);
                        arr_41 [(unsigned short)4] [i_10] [i_10] [i_12] = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
            arr_42 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_5 - 1] [i_5])) << (((var_12) - (1146682466U)))));
            var_24 = ((/* implicit */unsigned long long int) var_1);
            arr_43 [i_10] [i_5 - 3] [i_10] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_35 [i_5 - 3] [i_10] [i_10] [i_5 - 3])) ? (((/* implicit */unsigned int) arr_19 [i_5])) : (4294967295U)))));
        }
        arr_44 [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 8593853393685055203LL)))) ? (((((/* implicit */_Bool) 65520)) ? (18902810393799053LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [(unsigned short)4] [i_5 - 3] [i_5 - 1] [i_5 + 1])))));
        var_25 ^= ((/* implicit */_Bool) arr_35 [i_5 - 1] [i_5] [6ULL] [i_5 - 2]);
        var_26 = ((/* implicit */long long int) var_7);
        var_27 ^= var_1;
    }
    var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (max(((+(var_6))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (_Bool)1)))))))));
}
