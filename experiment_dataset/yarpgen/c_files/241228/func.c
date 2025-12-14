/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241228
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = var_1;
                    var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_6))))))) ? (max((var_14), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [(unsigned char)0] [i_0] [i_0] [i_0])), ((unsigned char)9)))) : (((/* implicit */int) max((var_11), (((/* implicit */short) var_8))))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << (((min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((short) (unsigned char)47))))) - (42)))));
                    var_19 += ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    var_20 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_10)) >> (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */int) max((((/* implicit */short) arr_0 [(_Bool)0] [(unsigned char)11])), (var_1)))))), (((/* implicit */int) ((((/* implicit */_Bool) 910449422180532614ULL)) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_10 [i_3 - 2] [i_3]), (((/* implicit */short) var_12))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3 - 2]))) : (18242362941188753738ULL)))))) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_11 [i_3]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) (_Bool)0))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))) ? (13248396152983331769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (var_13)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
            }
        } 
    } 
}
