/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197417
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
    var_15 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)84)) ? (var_10) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned char)172))))))), (var_10)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) != (((arr_7 [i_0] [16LL] [i_0] [i_3]) | (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            var_17 = ((long long int) ((((/* implicit */_Bool) arr_11 [(signed char)8] [i_0] [i_0 - 1] [i_0 - 3] [i_2 + 2] [i_3] [i_3])) ? (458111330903078725ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_2 + 1] [i_2] [i_3]))));
                            var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)84)) << (((arr_1 [i_0]) - (1388561584399422382LL)))))), (((2713166576U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28039))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_2 - 2] [i_0])) == (arr_9 [i_0 - 2] [i_3 - 1] [0U] [i_0 - 2] [i_3])))))));
                            var_19 = var_9;
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            var_21 += ((((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_0 + 1]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (10053351026216144122ULL))))))))) * (((((/* implicit */_Bool) (signed char)-77)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((long long int) ((((long long int) (_Bool)1)) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (-79007550)))))));
                            arr_19 [i_0] [i_0 + 1] [i_0] [i_0] [i_3] = var_7;
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 2151622109U))));
                        }
                        var_24 ^= ((/* implicit */unsigned int) (+(((arr_4 [i_1] [i_3 - 1]) << (((arr_4 [i_0 - 2] [i_3 + 1]) - (226909966)))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)172)) == (((int) (-(2143345186U))))));
                    }
                } 
            } 
        } 
    }
}
