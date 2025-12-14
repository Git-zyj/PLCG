/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214537
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
    var_12 = ((/* implicit */_Bool) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_5))), (((/* implicit */unsigned long long int) ((unsigned char) (short)-2048))))), (((/* implicit */unsigned long long int) ((short) var_0)))));
    var_13 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (short)3132)), (var_7)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [7] [7] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]));
                    arr_10 [(signed char)17] [i_1] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : ((~(2147483647))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) arr_3 [i_0])) - (44690)))))) ? (((max((((/* implicit */long long int) arr_7 [i_0] [i_2] [i_2] [i_2])), (var_2))) * (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_8 [i_2] [i_2] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8191ULL)) || (((/* implicit */_Bool) (short)-16)))))))))));
                    var_15 = min((((unsigned long long int) ((short) (unsigned char)0))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) (unsigned char)96))), (0LL)))));
                }
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_16 += ((/* implicit */unsigned char) (((((-(((((/* implicit */int) (short)17647)) * (((/* implicit */int) arr_11 [i_3])))))) + (2147483647))) >> (((((/* implicit */_Bool) 8196ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */_Bool) (((((-(4611686018427387840ULL))) << (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_3])) == (((/* implicit */int) (unsigned short)11222))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (0LL)));
            }
        } 
    } 
}
