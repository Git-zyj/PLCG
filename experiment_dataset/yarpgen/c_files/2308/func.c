/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2308
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((short) (-(((var_12) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)71)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [2U] [i_4]);
                            }
                        } 
                    } 
                } 
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)5973)), (arr_11 [i_1] [(unsigned short)4] [i_1] [i_0] [i_0 - 1])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) ^ (arr_5 [i_0] [i_1] [7LL])))))) ? (((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))) % (((/* implicit */int) ((((/* implicit */_Bool) (short)-11380)) || (((/* implicit */_Bool) (unsigned short)47971))))))) : (min((((((/* implicit */_Bool) (unsigned short)15230)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)31744)))), (((/* implicit */int) arr_4 [(short)5] [i_1] [i_0 - 1]))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)57))));
    var_15 = ((unsigned short) var_1);
    var_16 = ((/* implicit */unsigned char) ((unsigned short) var_3));
    var_17 = ((/* implicit */short) ((_Bool) ((_Bool) var_10)));
}
