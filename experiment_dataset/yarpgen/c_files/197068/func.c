/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197068
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
    var_12 ^= ((/* implicit */short) min((((((unsigned int) var_1)) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((_Bool) ((long long int) var_2))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((6745220831335550188LL), (((/* implicit */long long int) 2147483647)))) != (max((arr_1 [12ULL] [i_0]), (arr_0 [i_0]))))))) : (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_13 ^= (+(((unsigned long long int) arr_0 [i_0])));
    }
    for (unsigned char i_1 = 4; i_1 < 8; i_1 += 3) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1 + 2] [i_1 - 2]) ? (arr_0 [i_1 - 3]) : (arr_1 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((arr_5 [i_1] [i_1 + 1]) ? (arr_1 [i_1 - 3] [i_1 + 1]) : (arr_0 [i_1 - 2])))));
        var_14 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) var_8)), (((var_11) | (((/* implicit */int) arr_4 [i_1]))))))), (max((((/* implicit */long long int) ((unsigned char) arr_0 [1ULL]))), (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1 - 3]) : (((/* implicit */long long int) var_9))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_4 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (arr_16 [i_2] [i_2] [i_2] [(unsigned char)14] [i_4] [i_5 + 2])))) ? (((/* implicit */int) arr_17 [i_2])) : (arr_16 [i_3 - 1] [i_4 + 1] [i_4] [i_4] [i_5 - 2] [i_5 + 2])))) ^ (((6745220831335550178LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_3] [i_2])) : (((/* implicit */int) arr_15 [i_3 + 1] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_17 [i_6])), (var_8)))) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) ((signed char) arr_13 [i_3] [i_5 - 2] [i_6])))))) ? (18446744073709551607ULL) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2147483641)) & (arr_8 [i_6]))))))));
                            var_16 ^= ((/* implicit */short) arr_19 [i_2] [i_3 + 1] [i_4 - 1] [11] [11]);
                            arr_21 [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */int) ((signed char) ((short) ((var_11) <= (((/* implicit */int) var_6))))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3459877351886894480LL) ^ (((/* implicit */long long int) 63))))) ? (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_8))))) : ((+(-3124122651659185452LL)))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) / (arr_8 [i_2]))))));
        arr_22 [i_2] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2] [(unsigned char)14]);
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                {
                    arr_30 [i_2] [i_7 - 1] [i_2] = ((/* implicit */_Bool) ((((var_11) > ((+(arr_16 [i_2] [i_7 + 1] [i_7] [i_7] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) arr_14 [i_8] [i_8 + 1] [i_2] [i_8 + 1])) ? (arr_25 [i_8]) : (((unsigned long long int) arr_13 [i_2] [i_8] [i_8 - 1])))) : (((/* implicit */unsigned long long int) -6568169990226392129LL))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(min((((/* implicit */int) arr_15 [i_2] [i_2])), (var_11)))))) : (min((((/* implicit */long long int) arr_10 [i_7 + 1] [i_8 - 1])), (arr_8 [i_2])))));
                    var_19 = ((/* implicit */_Bool) (+(((unsigned int) arr_20 [i_8 - 1] [i_7 - 1] [i_7 + 2] [i_8 + 1] [i_2] [i_2]))));
                    var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_2])))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_7] [i_8] [i_8 - 1] [i_8])))))))));
                }
            } 
        } 
    }
}
