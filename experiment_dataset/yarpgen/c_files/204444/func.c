/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204444
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) min((min((max((2586172339U), (((/* implicit */unsigned int) (signed char)-33)))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (8421172506604634375ULL))))))))));
    var_11 = ((/* implicit */short) min(((+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_7))))))), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2LL))) & (((long long int) 12744049657448462632ULL)))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max(((short)31492), (((/* implicit */short) (signed char)25)))))))))))));
                            var_13 ^= ((/* implicit */short) 390731732385789115LL);
                        }
                    } 
                } 
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) max((arr_4 [i_1] [i_1 - 2] [i_0]), (((/* implicit */int) (unsigned char)108))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_0))));
        arr_11 [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((arr_4 [i_4] [i_4] [i_4]) - (arr_4 [i_4] [i_4] [i_4])))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_5 [i_5 + 2] [i_5] [i_5 - 3] [i_5 - 1]))));
        var_16 = (~(((/* implicit */int) arr_7 [18] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 3])));
    }
}
