/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28041
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
    var_13 = ((/* implicit */unsigned int) (+(var_6)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */signed char) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [19ULL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [3U]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0])) : (((/* implicit */int) (_Bool)0))))));
            arr_8 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_0) : (((/* implicit */int) arr_2 [i_0 + 2]))));
            arr_9 [i_0 + 1] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (arr_3 [i_1] [i_0 + 2]));
        }
        arr_10 [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) > (10772405480240013520ULL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (var_4))))))) ? (((long long int) arr_6 [i_0 + 2] [i_0])) : (((/* implicit */long long int) ((((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_6))) ^ ((((_Bool)1) ? (((/* implicit */int) (short)-26747)) : (((/* implicit */int) (signed char)99)))))))));
        arr_11 [i_0 + 2] [i_0] = ((/* implicit */short) (~((~((-(((/* implicit */int) (_Bool)1))))))));
        arr_12 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) 2147483647))), (((unsigned short) (_Bool)0)))))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_16 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((((long long int) 22006035)) >> (((((/* implicit */int) (unsigned short)17471)) - (17420)))));
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_20 [i_3] [i_3] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [i_3])))) || ((!(arr_6 [(unsigned short)5] [i_3])))))) : ((~(((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        arr_21 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [(_Bool)1] [13U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_3])))) : ((-(((((/* implicit */_Bool) 2567941704U)) ? (((/* implicit */unsigned long long int) var_1)) : (var_4)))))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)54621))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 22006035)) < (2104852753U))))))))) : ((-(min((((/* implicit */long long int) 2104852753U)), (-8489508681418324341LL)))))));
    var_15 = ((/* implicit */unsigned char) ((var_5) && (((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((int) (signed char)-122)))))));
    var_16 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_4)))))));
}
