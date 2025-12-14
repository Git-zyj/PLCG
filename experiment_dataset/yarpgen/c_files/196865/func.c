/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196865
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
    var_20 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_13)) + (41)))))), (max((var_0), (var_4))))) < (var_3)));
    var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) ((short) max((var_14), (((/* implicit */int) (unsigned short)65535)))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((short) 16833531654142781849ULL))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_6 [i_0])));
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-6881066258208068462LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) % (((/* implicit */int) arr_6 [(unsigned short)1]))))) : (((long long int) arr_6 [i_0]))));
                    var_23 *= ((/* implicit */short) var_15);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_14))));
                        var_25 = ((/* implicit */unsigned char) arr_12 [3LL] [i_1] [(unsigned short)15]);
                        var_26 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) (unsigned char)137))))))));
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_3]);
                    }
                    arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) (((-(var_0))) < (((/* implicit */long long int) ((unsigned int) arr_7 [7LL] [7LL] [i_2]))))));
                }
            } 
        } 
    } 
}
