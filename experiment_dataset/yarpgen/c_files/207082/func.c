/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207082
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
    var_11 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_1 [i_1 + 1]) <= (((/* implicit */unsigned int) -1038003066)))) ? (min((var_7), (var_7))) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) -1038003066)) : (max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)106)) >= (-1038003066))))));
                            arr_11 [6LL] [i_1 + 1] [i_1 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(unsigned char)8] [i_1 + 1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((4294967295U) >> (((var_1) - (15211726126737057112ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) <= (var_1)))))))) ? (((/* implicit */int) var_3)) : ((~((-(((/* implicit */int) (short)23002))))))));
}
