/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38256
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) var_6)) : (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 4] [i_2 + 3]))), (((/* implicit */int) ((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 4] [i_2 + 2]) < (arr_8 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 4]))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_1] [i_2 + 4])))))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned short) arr_8 [i_2] [i_2 - 1] [i_3 - 1] [i_4 + 1]);
                                var_14 = ((/* implicit */unsigned char) ((max((var_10), (var_10))) || (((/* implicit */_Bool) min((arr_11 [i_2 + 4] [i_3 - 2] [i_4 - 2]), (((/* implicit */long long int) arr_7 [i_3 + 2] [i_3] [i_3 - 1] [i_3])))))));
                                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_4 - 1])) && (((/* implicit */_Bool) var_4)))) ? (min((min((((/* implicit */unsigned long long int) (signed char)-43)), (20ULL))), (max((var_3), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_13 [(signed char)17] [(signed char)17] [i_3] [i_4]))))))))));
                                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_2 [i_3 - 1] [i_4 - 2])))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3] [i_4 + 1] [i_4 - 1])))) : (((/* implicit */int) ((arr_6 [i_3 + 1] [i_3 + 1] [i_3] [i_4 - 2]) && (arr_6 [i_3 - 2] [i_3 + 2] [i_4] [i_4]))))));
                                var_17 &= ((int) ((short) var_11));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 606108026722447541LL)) ? (-21LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4435)))))));
                    var_19 = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [7U] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (var_3)))) ? (((arr_11 [i_5] [i_5] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_5] [i_5] [i_5]) <= (((/* implicit */long long int) arr_4 [i_5] [i_5] [i_5]))))))));
        var_20 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-55)))) ? (max((arr_3 [i_5] [i_5] [i_5]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_5] [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
    {
        var_21 = ((/* implicit */short) var_7);
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
        {
            for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
            {
                {
                    arr_24 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 - 2] [i_8 + 1] [(signed char)4] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8 - 1]))) : (arr_7 [i_6 - 1] [i_7 - 2] [i_8 + 1] [i_8 - 1])));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_11))) != (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_18 [i_6])))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11))))));
        arr_25 [i_6] = ((/* implicit */unsigned short) var_1);
    }
}
