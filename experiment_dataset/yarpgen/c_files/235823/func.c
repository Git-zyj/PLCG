/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235823
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
    var_11 = ((/* implicit */short) ((unsigned char) ((var_6) == (var_6))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_8))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-((+(arr_0 [(unsigned short)23])))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 19ULL))) > (((/* implicit */int) ((short) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(1677050062U))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) arr_7 [(unsigned short)5]);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_16 = arr_14 [i_4 - 1] [i_5] [i_4 + 1] [i_4 - 1] [i_4 + 1];
                            arr_15 [i_1] [i_1] [i_3] [i_4 - 3] [i_4] [i_5] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_1] [i_4] [i_5])))));
                            arr_16 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_4] [(signed char)10] [(signed char)10] [i_4 - 1] [i_4 - 3] [i_4 - 1] [i_4 - 2])) & (((/* implicit */int) arr_13 [i_1] [16U] [i_4 + 1] [i_4 - 3] [i_4 - 3] [i_4] [i_4 - 3]))));
                            arr_17 [i_5] [i_2] [i_2] [(unsigned short)8] [i_3] [i_3] [(_Bool)1] = (+(((/* implicit */int) arr_1 [i_5])));
                        }
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (~(var_3))))) > (((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_9)))) ? ((~(var_1))) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_8)) - (165))))))))))));
}
