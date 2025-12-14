/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212823
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
    var_13 += min((((/* implicit */unsigned short) var_5)), ((unsigned short)4427));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)65533)));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_7)))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)191)) == ((-2147483647 - 1))))))), (min(((~(((/* implicit */int) var_9)))), ((~(((/* implicit */int) (unsigned char)164))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */int) arr_16 [i_0] [i_3] [i_4])) / (((/* implicit */int) var_1)))) : ((+(max(((-2147483647 - 1)), (131071)))))));
                    arr_18 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) -131084)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) var_3)) == (min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (arr_12 [i_0] [i_0] [i_0])))));
                    arr_19 [i_0] = ((/* implicit */int) min((((long long int) arr_13 [i_0])), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0])) == ((-2147483647 - 1)))))));
                }
            } 
        } 
        var_16 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_15 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_16 [i_0] [i_0] [10LL])))) ? (((/* implicit */int) arr_4 [20LL])) : (((int) arr_12 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5 - 2])) && (((/* implicit */_Bool) arr_22 [i_5 - 2]))))), (max((arr_22 [i_5 - 1]), (arr_22 [i_5 - 2])))));
        arr_23 [i_5 - 1] = var_10;
    }
    for (short i_6 = 1; i_6 < 24; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) 2147483626)), (7364604621662288746LL))), (((/* implicit */long long int) arr_21 [i_6]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)0)))))));
        arr_27 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6 + 1])))))));
        var_18 = ((/* implicit */short) max((((/* implicit */long long int) min((arr_24 [i_6]), (((/* implicit */unsigned short) (short)-15315))))), (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (-7364604621662288746LL)))));
    }
    var_19 = ((/* implicit */int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))));
}
