/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36086
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 *= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)1)))))) == (min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) var_10))))))) % (max((((/* implicit */int) arr_0 [i_0])), (-1))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [(short)10] [(short)10] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned long long int) min((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (short)-31569)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -370247198)) ? (7584375694256152343LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (arr_5 [i_0] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1] [4])) ? (arr_5 [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3])))))))));
                            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1]), (arr_10 [4ULL] [i_0])))) ? (383985892) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_3]))));
                            var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned int) var_11);
    var_19 *= ((/* implicit */unsigned long long int) ((signed char) var_4));
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) ((_Bool) var_7)))))) + ((~((~(var_4)))))));
}
