/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206606
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
    var_19 = ((/* implicit */unsigned long long int) 15U);
    var_20 = ((/* implicit */long long int) var_4);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_12))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)47)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_17)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) (signed char)79)) == (((/* implicit */int) var_4)))))))));
                    var_22 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-74)), (arr_7 [i_0 + 1] [i_0 + 2] [(_Bool)1]))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 3])))) | (13084701315329924247ULL)));
                    arr_13 [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35994))))))));
                    arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_8 [i_3] [i_1] [i_1] [i_1]))))));
                    arr_15 [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_17) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34668)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-3510)) <= (((/* implicit */int) (_Bool)0)))))) : (max((((/* implicit */long long int) (unsigned short)1380)), (arr_0 [i_1])))))));
                }
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (signed char)74);
            }
        } 
    } 
}
