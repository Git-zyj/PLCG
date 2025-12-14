/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200204
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_12 -= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 2346688335617239135ULL)) || ((_Bool)1))));
                    var_13 -= ((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_2]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) == (17160553115626524260ULL)))))) : (((/* implicit */int) arr_9 [6] [i_3] [0ULL]))));
                    var_15 -= ((/* implicit */_Bool) ((int) (-(((/* implicit */int) ((short) (signed char)81))))));
                    var_16 = ((short) (_Bool)0);
                }
                var_17 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [(unsigned char)16] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)0);
    var_19 = ((/* implicit */signed char) max((min(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned char)141)) ? (var_4) : (((/* implicit */int) var_3)))))), (var_8)));
}
