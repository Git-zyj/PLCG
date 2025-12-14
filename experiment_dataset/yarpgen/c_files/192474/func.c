/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192474
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */int) max(((signed char)-60), ((signed char)-68)))) : (((/* implicit */int) max(((short)-26264), (((/* implicit */short) var_8)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] |= ((/* implicit */int) 18446744073709551615ULL);
                    arr_7 [i_2] [i_0] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_11 &= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (signed char)-66)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)6] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [(signed char)10])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)15), ((signed char)0)))) ? (var_5) : (max((4691462295692688293LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [3])) : (((/* implicit */int) arr_2 [i_0] [(signed char)9])))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) var_8)) || ((((!(((/* implicit */_Bool) (signed char)-98)))) && ((!(((/* implicit */_Bool) (signed char)-91)))))));
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_8 [i_3]), (((/* implicit */unsigned short) (unsigned char)220)))), (min((arr_8 [i_3]), (((/* implicit */unsigned short) var_9))))))) ? ((((+(((/* implicit */int) arr_9 [i_3])))) + (((arr_9 [(unsigned char)14]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-48)))))) : (((/* implicit */int) arr_8 [i_3]))));
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((min((((-7509241159764495288LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)126))))))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)18))))))))));
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((signed char)-46), ((signed char)64))), ((signed char)-60))))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4])) - (((/* implicit */int) arr_8 [i_4]))))), (max((((/* implicit */unsigned long long int) var_5)), (14369581973301697866ULL)))))));
        arr_14 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)29874))) ^ ((~(var_5))))) << (((((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_4]), (((/* implicit */unsigned short) (signed char)-63)))))) & (max((-7243902397673268816LL), (((/* implicit */long long int) (signed char)-115)))))) - (65407LL)))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min(((signed char)47), (((/* implicit */signed char) arr_12 [i_4] [i_4])))), ((signed char)127)))) && (((/* implicit */_Bool) arr_8 [i_4]))));
    }
}
