/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41856
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_3 [i_1]), ((signed char)63)))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (min((10325768684685934319ULL), (17136843878135192050ULL))) : (arr_2 [i_1 + 3])));
                var_13 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)63))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    {
                        arr_17 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) var_11);
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_6] [i_4] [i_6] [22LL] = ((/* implicit */unsigned short) 9106056779488679006ULL);
                            arr_21 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)61040)) | (min((((/* implicit */int) (unsigned short)61062)), (arr_11 [i_5] [i_4]))))) / ((+(((/* implicit */int) (_Bool)1))))));
                            var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_18 [i_4] [i_5])));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)115))));
                            arr_25 [i_2] [i_3] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) 9106056779488679026ULL);
                            var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_2] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) var_4);
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_12 [i_5 + 4])))) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_4] [i_5] [i_5])) || (((/* implicit */_Bool) (unsigned short)4474))))))));
                            var_18 = ((/* implicit */short) max((((arr_23 [i_4] [i_4] [i_3] [i_4]) / (var_2))), (arr_23 [i_4] [i_3] [0U] [i_8])));
                            arr_29 [i_2] [i_4] [6U] [i_2 - 1] = ((/* implicit */long long int) 280459661U);
                        }
                    }
                } 
            } 
        } 
        arr_30 [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
        var_19 = (+(((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((((/* implicit */unsigned long long int) var_5)) / (arr_10 [i_2]))) : (((/* implicit */unsigned long long int) (+(671560029)))))));
        arr_31 [i_2 - 1] = ((/* implicit */signed char) ((((var_2) - (((/* implicit */long long int) 2654210803U)))) / (min((((/* implicit */long long int) (signed char)-68)), (arr_19 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2])))));
    }
    var_20 = ((/* implicit */signed char) ((9340687294220872632ULL) * (9106056779488678983ULL)));
    var_21 = ((/* implicit */unsigned short) var_7);
}
