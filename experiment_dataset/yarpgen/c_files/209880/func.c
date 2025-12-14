/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209880
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) (unsigned char)16))), (((((/* implicit */int) (short)-27120)) | (((/* implicit */int) ((short) arr_0 [i_1 + 2] [i_0])))))));
                arr_6 [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (22983))) - (14))))))), (((/* implicit */int) var_9))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        arr_9 [i_2] = var_4;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_2] [(short)13] [i_5] = ((/* implicit */int) arr_13 [i_3] [i_5]);
                        var_15 = ((/* implicit */long long int) var_6);
                        arr_19 [i_2] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) (short)15330);
                        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) -1274741621)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 - 2] [i_3] [i_4 - 1]))) : (var_8)))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-4022269391945402397LL)));
    }
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 19; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)177)) | (((/* implicit */int) (signed char)-28))));
                var_20 = ((/* implicit */long long int) arr_26 [i_6] [i_6] [i_6]);
                arr_27 [i_6] [(short)7] [i_7] = ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
}
