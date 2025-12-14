/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43911
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_19 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_18))))))) ? (((((/* implicit */_Bool) -318044646)) ? (arr_0 [i_0]) : (((int) var_16)))) : (((/* implicit */int) (unsigned char)11)));
        arr_3 [i_0] = ((/* implicit */unsigned short) 1460032434);
        var_20 = ((/* implicit */_Bool) min(((~(-1460032435))), (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((signed char) var_4)))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) 1460032434)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (unsigned short)61502))));
                    var_23 = ((/* implicit */int) var_5);
                    var_24 |= ((/* implicit */unsigned char) (~(arr_2 [i_1])));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_4])) / (1073741823)))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_4] [i_4]))))));
        arr_13 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) var_18)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            var_26 *= ((/* implicit */unsigned short) arr_12 [i_5] [i_4]);
            var_27 *= ((/* implicit */long long int) var_5);
            var_28 = arr_0 [i_4];
            arr_16 [i_4] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 769290563))) | (arr_8 [i_4] [i_4] [i_5])));
        }
        var_29 = ((/* implicit */signed char) (+(max((((/* implicit */int) max((var_0), (arr_5 [i_4] [i_4])))), (arr_8 [i_4] [i_4] [i_4])))));
        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)11926)), (15ULL)))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (int i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            {
                var_31 = ((/* implicit */int) max((min((arr_9 [i_7 - 1] [i_7 + 1] [i_7]), (var_13))), (max((arr_9 [i_7 + 2] [i_7 + 2] [i_7]), (arr_9 [i_7 - 1] [i_7 + 2] [i_7 + 2])))));
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_11 [i_6])))))))), (((((/* implicit */_Bool) var_16)) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : ((+(((/* implicit */int) (short)(-32767 - 1)))))))));
                arr_23 [i_6] [i_7 + 1] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-124)), ((unsigned short)20730)))), (((((/* implicit */int) (short)(-32767 - 1))) ^ (1460032434)))));
            }
        } 
    } 
}
