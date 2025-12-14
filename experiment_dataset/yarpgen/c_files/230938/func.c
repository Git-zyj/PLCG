/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230938
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
    var_10 = ((/* implicit */unsigned short) (~((+((-(((/* implicit */int) (unsigned char)139))))))));
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_8 [7LL] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (unsigned char)139);
                            var_12 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (arr_7 [i_3] [i_0] [i_0])))) ? (((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [12U] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [2U] [i_0])) && (((/* implicit */_Bool) var_8)))))))));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)508)) ? (((/* implicit */int) arr_5 [i_3] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (arr_1 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [18U])) && (((/* implicit */_Bool) (unsigned char)244))))))))) ? ((~(arr_3 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)117)), (var_8))))))))));
                            var_14 = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_15 += ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1885839144U))))), (var_1)));
            }
        } 
    } 
}
