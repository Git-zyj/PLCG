/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224849
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_1 [i_1] [(short)22]))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 762085514)) / (arr_0 [i_1 - 3]))) >> (((max((13216873016216052975ULL), (arr_0 [i_1 - 1]))) - (13216873016216052918ULL)))));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                    }
                } 
            } 
            arr_10 [(unsigned short)10] [8ULL] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1]))))), (min((((arr_6 [i_0] [24] [i_0]) / (arr_6 [(unsigned char)20] [(unsigned char)16] [18]))), (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [(signed char)16] [i_0] [i_0])))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((arr_6 [i_1] [8LL] [i_1]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)42925))))))))));
            arr_11 [7LL] [i_0] [i_1] = ((/* implicit */unsigned char) 5371449542031748390ULL);
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */signed char) (+(var_0)));
            var_21 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [(short)20]))));
        }
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_23 *= ((/* implicit */short) max(((((_Bool)1) ? (arr_8 [i_0]) : (((/* implicit */int) var_5)))), (max((((/* implicit */int) (unsigned short)39324)), (((arr_8 [i_0]) % (((/* implicit */int) (unsigned short)39324))))))));
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)69))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && ((!(((/* implicit */_Bool) (signed char)47)))))))) : (min((var_9), (((/* implicit */unsigned long long int) ((var_11) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))))))));
    var_26 -= ((/* implicit */unsigned char) ((max((((/* implicit */int) (unsigned char)110)), (133955584))) / (((/* implicit */int) var_7))));
    var_27 = ((/* implicit */_Bool) max((var_27), ((!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)55600)))) && (((/* implicit */_Bool) var_14))))))));
}
