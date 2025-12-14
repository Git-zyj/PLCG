/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215686
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
    var_11 = ((/* implicit */_Bool) max((min((var_6), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) max(((short)-10572), (((/* implicit */short) ((var_2) >= (((/* implicit */int) (short)-4033))))))))));
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-4034), (var_10))))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [16U])) > (((/* implicit */int) arr_3 [i_0]))))))));
                        arr_10 [2ULL] [2ULL] [i_2] [2ULL] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    }
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] [9ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [10U])) ^ (((/* implicit */int) arr_9 [i_0]))))) >= (arr_12 [i_4] [i_4] [i_2] [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)11)), ((short)-4053)))), (((arr_11 [i_1]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57802)))))))));
                        arr_14 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (!(arr_9 [i_1])));
                        var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_3 [i_0])) / (arr_6 [(_Bool)1] [i_1]))) / ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_4])))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [9U] [i_0])) && (((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_2] [i_0])))))));
                    }
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]) / (227657534393467971ULL)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned char)4])) | (((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1] [i_0])))))) : ((+(((/* implicit */int) arr_9 [i_2]))))));
                }
            } 
        } 
    } 
}
