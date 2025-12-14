/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203471
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= ((+(var_11))))))) ^ (max((((/* implicit */long long int) ((((var_1) + (2147483647))) >> (((-7LL) + (11LL)))))), (min((var_7), (((/* implicit */long long int) var_5))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (var_11))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1904401161)) ? (-1904401161) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (short)-9407)))));
                            arr_9 [(short)4] [(short)4] [i_2] [i_3 - 1] &= ((/* implicit */_Bool) (-(((int) ((((/* implicit */_Bool) (short)4581)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1627831389U))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)2698)))) * (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                var_21 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_1] [i_0])), ((unsigned char)220))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            {
                arr_14 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) > (2620766868U)))), (((((/* implicit */_Bool) (signed char)-58)) ? (-932305867352345357LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_5 + 1] [i_5 + 1] [i_4])))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)-99)) : (1062732254))))) : (((/* implicit */int) ((_Bool) (~(var_11)))))));
                arr_15 [i_4] [i_4] = ((/* implicit */int) arr_13 [i_4] [i_5]);
            }
        } 
    } 
    var_22 += var_3;
}
