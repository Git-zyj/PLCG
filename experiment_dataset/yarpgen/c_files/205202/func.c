/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205202
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0 + 1] |= ((/* implicit */unsigned int) arr_0 [i_0 + 4] [i_0 + 4]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_5);
                    arr_8 [i_2] [i_2 + 1] [i_1] = ((/* implicit */signed char) min(((+((~(arr_6 [i_0] [i_1] [i_0] [i_2]))))), (((/* implicit */unsigned int) (unsigned char)233))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) var_12);
            var_18 = ((/* implicit */int) ((_Bool) ((int) arr_6 [(signed char)2] [i_3] [i_3] [i_0 + 1])));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                arr_14 [i_3] [i_3] [15LL] [15LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3] [i_0 - 1] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5794969502840278141LL)))) ? (min((((/* implicit */unsigned long long int) -5794969502840278142LL)), (16ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0])))));
                var_19 = ((/* implicit */int) ((min((arr_13 [i_0] [i_0 + 3]), (arr_13 [i_0] [i_0 + 3]))) ^ (((/* implicit */unsigned long long int) 1289354413U))));
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) (signed char)-13))), (arr_0 [i_0 - 1] [i_3 + 1])));
                arr_15 [i_0] [(unsigned char)17] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (unsigned char)71)))));
                var_21 ^= ((/* implicit */_Bool) ((((var_8) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))))) ? (((((/* implicit */unsigned int) ((int) var_1))) % (((((/* implicit */_Bool) 2571649665U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) : (33554424U))))) : (min((arr_6 [i_0 + 1] [i_3] [i_3] [i_0]), (arr_6 [i_0 + 3] [i_3] [i_3] [i_0])))));
            }
            arr_16 [i_0] [i_0] [(unsigned short)4] |= ((/* implicit */long long int) max((((/* implicit */short) ((5794969502840278141LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))), ((short)5729)));
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5 - 1] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (-(var_3)))) / ((+(4ULL))))), (((/* implicit */unsigned long long int) (unsigned char)46))));
        arr_20 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_17 [3LL])) : (((/* implicit */int) (unsigned char)19)))) <= (((/* implicit */int) var_11)))))));
        var_22 = ((/* implicit */int) ((unsigned char) ((signed char) (!(var_7)))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)32768)), (((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [6ULL])))))))) ? (((/* implicit */int) arr_18 [i_5] [i_5 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-28)))))))))));
    }
    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((arr_12 [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))))))) ? (((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) (+(var_14)))) : (8421424334750560091ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_6 - 1]))))));
        var_24 = ((/* implicit */signed char) arr_13 [i_6 - 1] [i_6]);
        arr_24 [i_6 - 1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) -4678379772155827368LL)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_17 [i_6]))))), (((long long int) (unsigned char)84)))), (((/* implicit */long long int) (signed char)-113))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3930074579U)))) ? (arr_3 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 + 2] [i_6 - 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)173), (((/* implicit */unsigned char) var_10))))) && (((/* implicit */_Bool) 1440760867U))))) : (((/* implicit */int) (unsigned char)66))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) ((arr_21 [i_7] [i_7]) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (var_5)));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_7] [i_7])))))));
    }
    var_27 = ((/* implicit */unsigned short) var_8);
}
