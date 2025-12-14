/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227951
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned char)67))) & (((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))));
    var_13 += ((/* implicit */signed char) (unsigned char)70);
    var_14 = ((/* implicit */unsigned char) (((((-(var_2))) >= (max((((/* implicit */long long int) var_9)), (207963365140260525LL))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] [(unsigned char)19] [i_0] = ((/* implicit */signed char) var_0);
                    arr_11 [i_0] [i_0] [(unsigned char)19] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) & ((+(((/* implicit */int) (unsigned char)0))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)201))) % (((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */int) ((13LL) == (((((/* implicit */_Bool) (short)-13324)) ? (var_11) : (var_0)))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)198))))))));
                        arr_16 [i_0] [(short)2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [i_3 - 1] [(unsigned char)21] [i_3 - 1] [(unsigned char)14] [(short)1] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))))))));
                        arr_17 [i_0] [i_0] [i_0] [(short)19] [i_3] = ((((/* implicit */_Bool) (~((~(var_0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) ^ (-1LL))) : (((/* implicit */long long int) (((((~(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_7)) - (212))))) - (18)))))));
                        arr_18 [(signed char)8] [(unsigned char)10] [i_0] [(signed char)8] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (signed char)120))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_16 -= ((/* implicit */signed char) max((((/* implicit */long long int) var_9)), (var_4)));
                        var_17 = ((/* implicit */signed char) var_11);
                    }
                    var_18 = ((/* implicit */short) ((long long int) (signed char)110));
                    var_19 -= ((/* implicit */short) ((long long int) ((long long int) -4420735598995615395LL)));
                }
            } 
        } 
    } 
}
