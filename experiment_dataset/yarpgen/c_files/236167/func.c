/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236167
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
    var_14 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), ((+(((/* implicit */int) var_4))))))), ((~((+(2691167513092116875ULL)))))));
    var_15 = ((/* implicit */signed char) ((max((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-93))))))) << (((((/* implicit */int) (signed char)-93)) + (96)))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 4]))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (unsigned char)107))));
                            var_19 += ((/* implicit */unsigned char) ((((((/* implicit */int) min((arr_12 [i_1 + 4] [i_0 + 2] [i_0 + 1]), (arr_12 [i_1 + 3] [i_0 - 1] [i_0])))) + (2147483647))) << (((((/* implicit */int) (short)19102)) - (19102)))));
                            arr_14 [i_1] = ((/* implicit */short) (+(((((/* implicit */int) arr_12 [i_0] [i_2] [i_3])) / (((/* implicit */int) arr_12 [1ULL] [i_2] [i_3]))))));
                            arr_15 [5LL] [i_0 - 1] [i_0 - 1] [i_2] [(signed char)18] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_11 [i_0] [i_0 - 1] [i_1 + 3] [i_1 + 3])), (arr_9 [i_0 + 2])))) ? (((((/* implicit */_Bool) (unsigned short)8922)) ? (9565556431692419933ULL) : (arr_5 [i_1 + 2] [i_1] [i_1]))) : (max((arr_5 [i_0] [i_1 + 2] [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19102)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)41))))));
}
