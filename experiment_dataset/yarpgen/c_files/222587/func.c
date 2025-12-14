/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222587
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_2) > (((/* implicit */int) var_7)))))));
        var_12 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 1809419585)))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (min((((((/* implicit */int) ((((/* implicit */int) (unsigned short)60474)) != (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) arr_3 [i_1 + 1])))), (max((((int) var_7)), (((/* implicit */int) ((signed char) var_9)))))))));
                var_14 = ((/* implicit */_Bool) (+(((unsigned long long int) var_3))));
                var_15 = ((/* implicit */unsigned short) (~(arr_7 [i_1] [i_1])));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_16 &= arr_0 [i_2];
                                var_17 = ((/* implicit */unsigned int) ((long long int) 3964251197864421389LL));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) 1809419585)))))) == (((/* implicit */int) (unsigned short)46229))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) var_9);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 4; i_6 < 17; i_6 += 2) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) 8493093484458069295ULL);
                var_21 &= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((var_6), (arr_20 [i_6 - 4] [(unsigned char)17])))) && (((/* implicit */_Bool) arr_21 [i_6])))));
                var_22 = ((/* implicit */short) arr_0 [i_6 - 1]);
                var_23 = ((/* implicit */short) arr_19 [0ULL]);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        arr_27 [(unsigned short)5] = ((/* implicit */unsigned short) var_8);
        var_24 = ((/* implicit */int) ((arr_8 [i_8] [(unsigned char)10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8])))));
    }
    var_25 = ((/* implicit */short) var_6);
}
