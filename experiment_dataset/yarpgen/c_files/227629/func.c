/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227629
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) 3415005170629052072ULL)) ? (((/* implicit */int) (short)180)) : (((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) (+(((/* implicit */int) var_19)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)0))))) / (((((/* implicit */_Bool) arr_1 [14ULL])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9183)))))))) ? (((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (15031738903080499546ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0 + 3])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((3415005170629052053ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) arr_7 [i_0 + 3] [i_0 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_1] [(unsigned char)11]))))))) : (((/* implicit */int) arr_6 [i_0 + 2] [(signed char)4]))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)180))) : (4228558097U))), (((arr_9 [4ULL] [i_3] [15ULL] [i_1 + 1] [15ULL]) ? (3820109418U) : (arr_2 [i_1] [i_0])))))) > (max((3415005170629052072ULL), (arr_4 [i_1] [i_1 - 2])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64379))) + (arr_4 [i_0] [i_4]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (0) : (((/* implicit */int) arr_6 [i_4] [i_0]))))))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 + 2])) && (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2]))));
        }
    }
    for (short i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((5770475980873952935ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_16 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) arr_7 [i_5 + 1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_5 - 2] [i_5 - 2])) != (((/* implicit */int) (short)193)))))) : (((unsigned int) (unsigned short)0))));
        var_25 |= ((/* implicit */unsigned long long int) arr_7 [i_5] [i_5]);
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_21 [i_7] [15LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)8)) : (-1366550030)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (max((var_9), (((/* implicit */unsigned long long int) var_19))))))) ? ((-(arr_20 [i_6] [i_7]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                arr_22 [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_6])) / (((/* implicit */int) (unsigned short)55434)))), (((/* implicit */int) (unsigned short)49038))));
            }
        } 
    } 
}
