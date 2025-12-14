/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190179
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((short) min(((signed char)(-127 - 1)), ((signed char)127)))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1] [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((max((arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 2]))) - (arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) <= (1337708750U)))))) < (((/* implicit */int) ((((((/* implicit */int) (unsigned short)33492)) ^ (((/* implicit */int) var_19)))) <= (((/* implicit */int) arr_1 [i_0])))))));
                                arr_13 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                } 
                var_23 *= var_0;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 4; i_7 < 19; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_6] [i_6])))))) ^ (((/* implicit */int) var_3))));
                    var_25 = ((long long int) ((((/* implicit */_Bool) ((1377841768816866908LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) var_2)) : (arr_16 [i_6 - 3] [i_7])));
                }
            } 
        } 
        arr_22 [i_5] |= ((/* implicit */unsigned int) min((min((7328347063367670154LL), (((/* implicit */long long int) arr_15 [i_5])))), (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
        var_27 |= ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    }
    var_28 = ((/* implicit */int) var_6);
}
