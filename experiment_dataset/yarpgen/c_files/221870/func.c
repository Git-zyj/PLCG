/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221870
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
    var_16 = ((/* implicit */unsigned short) (short)21790);
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)21790))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] |= ((/* implicit */signed char) var_0);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) || ((!(((/* implicit */_Bool) var_1)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7353007594050082742LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)226)))) >= (((1256938981) >> (((/* implicit */int) (_Bool)1))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_3] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)14306), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)-21791)))) ? (((((/* implicit */_Bool) (signed char)-71)) ? (9049611704328831448LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14280))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_1)))))))));
                            arr_16 [i_0] [i_1 - 2] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 2])), (-262144)))));
                            arr_17 [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)-111)))), (max((var_13), (262144)))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] &= (+((+(((/* implicit */int) arr_10 [i_1 + 1] [i_1])))));
            }
        } 
    } 
}
