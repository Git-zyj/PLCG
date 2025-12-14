/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53990
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
    var_11 |= ((/* implicit */short) var_10);
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((max((((long long int) var_4)), (((/* implicit */long long int) (signed char)-1)))), (((/* implicit */long long int) ((signed char) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) & (arr_1 [i_0] [i_0])))));
                        arr_12 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((1995337869U) << (((max((arr_9 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3]), (arr_1 [i_0] [i_0]))) - (4888660988885550008LL))))) >> (((15987380627036065394ULL) - (15987380627036065382ULL)))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */unsigned short) max((min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (signed char)-1)))), (((/* implicit */long long int) (short)26624))));
                            arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_3])), (min((arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_4]), (((/* implicit */unsigned long long int) (signed char)9)))))) >> (((min((((arr_10 [i_4] [i_2] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned short)40076)), (arr_13 [i_0] [i_2] [i_3] [i_4]))))) - (40031U)))));
                            arr_18 [i_0] [i_4] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])))), (((((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_6 [i_4])) - (17714))))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40092)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_14 &= ((/* implicit */unsigned int) arr_4 [i_0]);
                            arr_23 [i_3] [i_3] [i_3] [i_3] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (-665455850)));
    }
}
