/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223446
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((long long int) arr_0 [i_0] [i_1]));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_17 ^= ((/* implicit */_Bool) var_14);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [1ULL] = ((/* implicit */unsigned int) var_4);
                            var_18 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-9139028721333842811LL)));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) ^ (arr_3 [i_0])));
                        }
                        for (int i_5 = 2; i_5 < 16; i_5 += 1) 
                        {
                            var_20 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 845722130)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (696302847931345666LL))));
                            arr_15 [i_5] [i_0] [i_3] [14] [14] [i_0] [(unsigned short)16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_21 = arr_5 [i_5] [i_5];
                        }
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned short) arr_1 [i_2])))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1211715874556704789LL))))) : (((/* implicit */int) ((signed char) 524287U)))))))));
                }
            } 
        } 
    } 
    var_24 |= ((((/* implicit */int) var_13)) >> (((((((/* implicit */int) var_14)) | (((/* implicit */int) (signed char)-12)))) + (23))));
}
