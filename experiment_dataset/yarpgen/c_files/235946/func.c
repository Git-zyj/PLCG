/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235946
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (var_1)));
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (short)-5150))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) 4137384140U))))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((arr_9 [i_1 + 1] [i_3] [i_1 + 1]) > (arr_9 [i_1 - 1] [i_1 - 1] [i_4])));
                                var_13 = ((/* implicit */unsigned int) 139611588448485376ULL);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-43)))) | ((+(3U)))));
                }
            } 
        } 
        arr_17 [i_1 + 1] = ((/* implicit */unsigned short) (~(arr_6 [(unsigned char)6])));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_1 - 1] [i_1 + 1]) : (arr_8 [i_1 + 1] [i_1 + 1])));
    }
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            arr_25 [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((arr_19 [i_6]) == (((/* implicit */int) (unsigned char)154)))));
            arr_26 [i_6] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_7 + 2] [i_7] [i_6])) >= (1267616835)))) >= (((/* implicit */int) (short)5137))));
        }
        arr_27 [i_6] = ((/* implicit */unsigned short) var_3);
        var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6])))))));
        arr_28 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (min((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5137)))))))));
    }
    var_17 ^= var_3;
}
