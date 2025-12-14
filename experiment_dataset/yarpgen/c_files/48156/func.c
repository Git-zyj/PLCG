/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48156
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (max((var_7), (((/* implicit */long long int) arr_3 [i_1] [i_1] [(signed char)3]))))))) ? (((((/* implicit */_Bool) 3098166129U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) : (936033672915435569ULL))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-(arr_2 [i_1] [4ULL] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_10 [i_3]) ? (((/* implicit */int) var_5)) : (var_3)))), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18247))) : (var_7))))));
                            var_12 = (~(((((/* implicit */_Bool) min((arr_0 [i_3] [i_1]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((-979212141464812196LL) == (min((((/* implicit */long long int) arr_3 [i_0] [i_4 - 1] [i_4])), (-8749072911952813240LL))))))));
                            var_14 = ((/* implicit */unsigned short) var_5);
                            var_15 = ((/* implicit */int) arr_3 [i_0] [i_4] [i_5]);
                            arr_16 [(short)3] [i_1] [i_1] [(short)3] = max((((/* implicit */unsigned long long int) ((var_9) % (1196801166U)))), (var_1));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((short) ((((/* implicit */_Bool) (unsigned short)24816)) && (((/* implicit */_Bool) 1196801158U))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3098166129U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_3 [i_1] [5U] [10U])), (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) 1196801183U))) ^ (((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)7])))))) : (arr_6 [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) -1561934921);
}
