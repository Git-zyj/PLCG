/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46002
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned char)145)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_6 [(unsigned char)5] = ((/* implicit */unsigned char) ((signed char) (+(arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_8 [i_3])) + (21726)))));
                    arr_14 [(_Bool)1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) arr_5 [13LL] [(unsigned char)9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)7971))))));
                    var_12 += ((/* implicit */_Bool) (-(279223176896970752ULL)));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */short) ((((_Bool) min((var_6), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */short) var_6)), (var_9))), (((/* implicit */short) (signed char)-127)))))) : (max((var_10), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)139)), (var_3))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            {
                arr_19 [i_4] = ((/* implicit */unsigned int) arr_16 [i_4]);
                arr_20 [i_4 + 1] [i_4] = ((/* implicit */short) var_1);
                arr_21 [1LL] &= ((/* implicit */_Bool) ((((_Bool) arr_7 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) < (((/* implicit */int) (unsigned char)248))))) : (((((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1])) & (((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1]))))));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)125))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (unsigned char)124);
}
