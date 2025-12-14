/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235483
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) 2222866823174787409LL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1] [i_1 + 2]), (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) | (18446744073709551615ULL)))))))));
                var_13 ^= ((_Bool) arr_2 [i_0] [i_1] [i_1]);
                var_14 = ((/* implicit */unsigned short) min((arr_2 [i_1] [i_1 + 2] [i_1 + 2]), (arr_2 [i_0] [i_1 + 1] [i_1 + 2])));
                arr_6 [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 0))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    var_15 = var_5;
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)1)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        arr_9 [8LL] [8LL] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_2] [i_2])), ((unsigned short)65528))))) + (((var_9) | (((/* implicit */unsigned long long int) var_2)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [i_3] [i_2] = ((/* implicit */short) arr_14 [(unsigned short)3] [i_3] [i_4]);
                    var_17 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) (unsigned short)7)))));
                    var_18 = ((/* implicit */unsigned short) ((max((arr_4 [4] [i_3] [i_4 + 3]), (((/* implicit */int) var_7)))) | (((arr_4 [i_2] [i_2 - 1] [i_4 + 3]) | (((/* implicit */int) (short)30873))))));
                    arr_18 [i_3] [i_3] [i_3] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (short)-30870)) : (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) ((short) arr_0 [i_2] [(unsigned short)14])))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_11 [(unsigned short)8] [i_5 - 1] [6LL]))));
        var_20 = ((/* implicit */signed char) arr_4 [i_5 + 1] [i_5] [i_5]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((-(((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((arr_12 [i_7 - 1] [i_6] [i_5]) - (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7))))))))))));
                    var_23 = ((/* implicit */int) (-(arr_11 [i_6] [i_5] [i_6])));
                    var_24 = ((/* implicit */short) ((long long int) (unsigned char)244));
                }
            } 
        } 
    }
}
