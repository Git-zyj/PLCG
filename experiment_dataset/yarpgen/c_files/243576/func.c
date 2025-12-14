/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243576
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = arr_3 [i_0] [i_0] [i_0];
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [13ULL] [13ULL] [i_1] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) arr_1 [(short)1])) == (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [12] [12] [12]))))))) == ((-(((arr_4 [12LL] [12LL] [i_2]) & (((/* implicit */int) arr_3 [3LL] [7U] [13ULL]))))))));
                        var_21 = ((/* implicit */int) arr_9 [i_0] [i_0] [14] [i_3]);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [(signed char)13] [(unsigned short)0] [i_2] [11U])) ? (arr_4 [9] [(signed char)4] [i_3]) : (((/* implicit */int) arr_1 [i_3])))) < (((((/* implicit */_Bool) arr_3 [i_0] [0U] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58277)) && (((/* implicit */_Bool) 2837461190U))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_9 [i_0] [i_0] [13U] [13U]) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_3])))))))) & ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58277)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1395539444U)) ? (5867983024802080881LL) : (((/* implicit */long long int) 2177420013U))))));
                        var_25 = (-(((((((/* implicit */_Bool) (signed char)-111)) ? (-1681950863) : (((/* implicit */int) (unsigned short)40068)))) / (((((/* implicit */int) arr_5 [(unsigned short)11] [(unsigned short)11])) / (((/* implicit */int) arr_8 [i_0] [i_1])))))));
                    }
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [1ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (unsigned char)0))));
                        var_26 = ((/* implicit */unsigned short) ((((unsigned int) ((((arr_13 [i_0] [(unsigned short)10] [3ULL] [i_0] [i_0] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_7 [(unsigned char)6] [i_2] [i_5 + 1])) - (54475)))))) <= (((((/* implicit */_Bool) ((long long int) arr_9 [i_2] [i_2] [i_1] [i_5 + 1]))) ? (((((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_5])) ^ (2117547283U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
        {
            {
                var_27 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)58277)), (4327017802378392308ULL)));
                var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_16 [i_6] [i_6] [i_7 + 2] [i_7 - 2] [i_6] [i_6])), (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-111))))) & (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27882))) : (2899427852U)))))));
            }
        } 
    } 
    var_29 ^= (+((((_Bool)0) ? (7643293921995836056LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7259))))));
    var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)1))))));
    var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_14))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) ((_Bool) var_6)))))));
}
