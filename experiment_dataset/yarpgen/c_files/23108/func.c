/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23108
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
    var_20 = (_Bool)1;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (short)32751)) && (((/* implicit */_Bool) 698969885398422363LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-32751)))) : (var_18)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)3278)) - (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((unsigned int) ((int) arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-21104)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0] [i_1])) - (8255))))))));
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), ((short)-32751))))));
                var_24 = arr_3 [i_0] [i_0] [i_0];
                var_25 = ((((((/* implicit */unsigned long long int) ((unsigned int) (short)-32745))) < (min((((/* implicit */unsigned long long int) var_15)), (3768197007375636800ULL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [(unsigned short)14]) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_19)))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32744))) : (2392335270U)))))));
            }
        } 
    } 
}
