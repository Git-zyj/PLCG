/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228494
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_11 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_10 [i_0] [9] [i_0] [i_0]))));
                            arr_15 [i_4] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                        }
                        var_12 = ((/* implicit */long long int) max((var_12), (min((((((/* implicit */_Bool) (+(arr_7 [i_1] [i_2])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-21511))))) : (((long long int) var_3)))), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])))), (min((((/* implicit */int) arr_0 [i_0] [i_1])), (arr_6 [i_0] [i_1] [i_2] [i_3]))))))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) var_4);
                        arr_19 [i_0] [i_1] [i_2] [i_0] = ((unsigned char) arr_12 [12LL] [12LL] [12LL] [i_5 + 2] [i_2]);
                    }
                    var_13 = ((/* implicit */unsigned long long int) var_9);
                    arr_20 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) max((((((long long int) (unsigned char)139)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [0])) == (511ULL)))))), (min((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_0] [i_1 + 3])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            {
                arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(arr_17 [i_7])))))) ? (((/* implicit */int) arr_25 [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6] [7] [i_6] [i_7] [i_7])))))));
                var_15 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [10U] [i_7] [10U] [i_7]))) : (arr_17 [i_7]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 2554675835099639453LL)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */int) var_6)) << (((3631448364U) - (3631448356U)))))))), (2554675835099639453LL)));
}
