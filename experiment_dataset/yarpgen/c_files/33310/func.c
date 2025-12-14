/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33310
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
    var_10 = ((/* implicit */int) (((~(var_6))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_2)))) ? (max((((/* implicit */long long int) (signed char)-3)), (-1971752186964306318LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)116))))))))));
    var_11 |= ((/* implicit */unsigned int) 16303408251446685237ULL);
    var_12 += ((/* implicit */short) (unsigned char)0);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), ((_Bool)1)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((arr_6 [i_0]), (((/* implicit */long long int) (-(((((/* implicit */int) var_0)) >> (((var_8) - (695623426717154488LL))))))))));
                            arr_9 [i_0 - 1] [i_1] [(unsigned char)10] [i_0] [i_3] = arr_6 [i_0];
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-9223372036854775790LL))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? ((~(((/* implicit */int) (short)-7299)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)22252)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36709)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [8] [i_0 - 1])))))) ? ((-(((/* implicit */int) arr_5 [i_0] [1LL] [i_3])))) : (((/* implicit */int) max(((short)-19465), (((/* implicit */short) var_9))))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_1] [i_1])) != (((int) (unsigned char)203))))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (-1971752186964306325LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)111)) << (((((/* implicit */int) (signed char)92)) - (87)))))))))));
            }
        } 
    } 
}
