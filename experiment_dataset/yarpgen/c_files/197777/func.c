/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197777
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (9424997297021875209ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
        var_12 ^= (-(((/* implicit */int) arr_1 [(_Bool)0])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) ((_Bool) arr_4 [i_1])))));
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)8]))) < (5U)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((arr_7 [i_2] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40561)))))));
        arr_11 [i_2] = ((/* implicit */short) arr_8 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned int) var_1);
        var_14 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (202934816U)))), (min((9021746776687676407ULL), (var_2)))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_19 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((((unsigned short) arr_9 [i_4] [i_3])), (((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_9 [i_2] [i_4]))))));
                    arr_20 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2] [i_3])), ((unsigned short)5685))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23854)))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */short) ((unsigned short) var_1));
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1069547520U)))))) % (((((/* implicit */_Bool) arr_17 [i_5 - 1] [(short)10] [i_5] [i_5 - 1])) ? (arr_17 [i_5 + 1] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_18 = ((/* implicit */_Bool) min((arr_22 [i_5]), (((/* implicit */unsigned int) ((min(((_Bool)1), (var_6))) || (((/* implicit */_Bool) -1271220566)))))));
            }
        } 
    } 
}
