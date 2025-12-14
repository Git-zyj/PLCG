/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193313
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
                var_16 += ((/* implicit */signed char) ((2405638416361252263ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_1] [i_0])), (var_9)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((707533114) / (((/* implicit */int) arr_1 [i_1]))))) % (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((16041105657348299353ULL), (16041105657348299355ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_15 [(unsigned char)22] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [i_3] [i_3] [14])), (var_7)))), (((long long int) arr_11 [i_3] [i_3]))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_5]))))) ? (((arr_12 [(short)4] [(signed char)22] [i_4]) >> (((((/* implicit */int) (signed char)104)) - (104))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_2])) < (((/* implicit */int) (short)32767))))))))));
                        var_17 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))) / (((((/* implicit */_Bool) var_4)) ? (45196274747791227LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)10] [i_3] [i_5]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((min((max((arr_17 [i_2] [i_3] [i_2] [i_6]), (((/* implicit */long long int) (signed char)90)))), (((/* implicit */long long int) arr_7 [i_4])))), (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-114)) % (((/* implicit */int) arr_6 [i_6] [i_4])))), (arr_11 [7U] [24])))))))));
                        var_19 = (short)17488;
                    }
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-125)) & (((/* implicit */int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18795))) * (16041105657348299330ULL)))));
                    var_21 &= ((/* implicit */unsigned char) arr_17 [i_2] [i_2] [(unsigned char)1] [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                var_23 = ((/* implicit */int) max((arr_8 [i_8]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7] [i_7] [(signed char)17] [i_8]))) - (((arr_12 [i_7] [i_8] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [(unsigned short)13] [(unsigned char)1])))))))));
                var_24 = ((/* implicit */int) ((((arr_19 [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7]))) : (arr_12 [i_7] [(signed char)2] [i_7]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7])))));
                var_25 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3175279976U)) && (((/* implicit */_Bool) arr_8 [i_8]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32453))) ^ (var_5))))), (((/* implicit */unsigned int) arr_14 [14] [(unsigned char)17]))));
            }
        } 
    } 
}
