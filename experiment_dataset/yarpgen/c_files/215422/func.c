/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215422
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_11)))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_2])))) : (((/* implicit */int) arr_1 [i_2] [i_0]))));
                        var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-13)), (arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [i_3] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_0]))))) : (((int) -163621562869208122LL))))));
                    }
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), ((-(((((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11235)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_8 [i_0] [(short)8] [(short)8]))))))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_0] [6LL] [6LL] [6LL] [i_2])), (14242399445665656863ULL))))))))));
                    arr_13 [i_0] [(short)4] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [(_Bool)0] [i_1] [(_Bool)0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_16 = var_10;
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) var_8)) ? (((/* implicit */long long int) var_11)) : ((((_Bool)1) ? (-2124427936313879718LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-201)))))))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) ((_Bool) 2147483620)))))) : (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(4211712606593636761ULL))))));
    var_19 = ((/* implicit */long long int) var_4);
}
