/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212419
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_12 = (_Bool)1;
                    var_13 = ((/* implicit */short) ((var_1) >> (((3455454434035852274ULL) - (3455454434035852270ULL)))));
                    var_14 = ((/* implicit */unsigned short) ((arr_7 [i_2 - 2] [i_2 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55106)))));
                    var_15 ^= ((/* implicit */unsigned int) arr_5 [(unsigned char)6] [(unsigned char)6]);
                }
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)55106), (((/* implicit */unsigned short) arr_0 [i_0]))))) >> (((((unsigned long long int) (unsigned short)55679)) - (55673ULL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)255)), ((+(((((/* implicit */int) (unsigned short)9872)) << (((((/* implicit */int) var_8)) - (63630)))))))));
    var_18 = ((/* implicit */short) (((((-(var_9))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (unsigned short)9877))))))))));
}
