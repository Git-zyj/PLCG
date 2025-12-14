/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54242
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
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) (unsigned char)48)) : (arr_2 [i_0 - 3])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */unsigned short) (short)3488);
                    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-91751537)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 4])) * (var_8)))) : ((-(3686941195425901111LL)))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (11166733815375660907ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~((~(var_6)))))));
    var_14 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((var_3) << (((((((/* implicit */int) var_7)) + (131))) - (12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : (-838086849875721078LL))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3488)) >= (((((/* implicit */int) arr_11 [i_3] [i_3])) | (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */_Bool) 8082179978880706913ULL);
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((arr_10 [i_3]) / (((/* implicit */int) (signed char)82)))))));
        }
        arr_17 [i_3] [i_3] &= ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (arr_15 [(unsigned short)0])))) : (((/* implicit */int) arr_13 [i_3] [i_3])));
    }
}
