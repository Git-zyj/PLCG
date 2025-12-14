/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/269
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8))))))) ? (var_11) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    var_16 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) 70005640032936523LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0])))) | ((~(((/* implicit */int) var_8)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) max(((short)27430), (((/* implicit */short) (_Bool)1))))))))) > (max((8431949338468780961LL), (((/* implicit */long long int) (signed char)50))))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */int) max((((((unsigned long long int) arr_0 [i_0])) << (((((/* implicit */int) (short)-5570)) + (5582))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_19 -= min((((/* implicit */int) arr_0 [(_Bool)0])), (((((/* implicit */int) (unsigned short)21026)) ^ (max((-2015058418), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                }
                arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [8ULL])) : (((/* implicit */int) arr_5 [i_1])))) << (((((/* implicit */int) arr_6 [i_0])) - (235)))))) : (max((((/* implicit */long long int) var_11)), ((~(var_10)))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */signed char) arr_3 [i_0] [i_1])), (var_9))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1])))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)-61)), (((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) arr_5 [(unsigned char)3]))))))) : (((((/* implicit */_Bool) 4608963902121560562ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))) : (((long long int) arr_6 [(short)12]))))));
                arr_10 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)102)), (arr_6 [i_1]))))));
            }
        } 
    } 
}
