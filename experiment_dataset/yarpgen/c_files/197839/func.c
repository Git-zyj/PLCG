/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197839
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)0] [i_0] = (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((unsigned char) arr_4 [(unsigned char)7]))))));
                arr_6 [3ULL] [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (-4913284723970616841LL) : (((/* implicit */long long int) var_3)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) / (var_3)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [(unsigned char)4] [i_2])), (arr_3 [i_2] [i_2] [20U])))))) * (((/* implicit */int) ((unsigned short) 4913284723970616836LL)))));
        var_16 = ((/* implicit */int) var_13);
        arr_12 [i_2] [(unsigned short)7] = ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24660)) | (((/* implicit */int) (signed char)20))))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) max((arr_3 [i_2] [i_2] [(unsigned char)6]), (((/* implicit */unsigned short) var_14))))))) == (((/* implicit */int) ((unsigned short) var_8))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        for (int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            {
                arr_19 [i_3] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((unsigned short) var_14))))));
                arr_20 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 - 1]))));
                var_17 = 2113055820U;
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_3])), ((unsigned char)134)))) ? (((((/* implicit */int) max((((/* implicit */signed char) var_14)), ((signed char)-70)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) >= (-16LL)))))) : (((/* implicit */int) var_10))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_8)) == (12074786827156131797ULL))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_18 [i_4 - 2] [i_4 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 2])) ? (arr_10 [i_3 - 1] [i_3 + 2]) : (arr_10 [i_3 - 1] [i_3]))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [i_3] [i_4])))))))));
            }
        } 
    } 
}
