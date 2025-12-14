/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28733
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) (~(max((((/* implicit */long long int) var_13)), (arr_8 [i_3])))));
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                            arr_13 [i_1] [i_0] [i_1] [6U] [i_0] [i_0] = ((((((((/* implicit */int) (short)17348)) ^ (((/* implicit */int) (_Bool)1)))) > ((-(((/* implicit */int) var_9)))))) ? (((((var_11) ^ (((/* implicit */unsigned long long int) 1956655566)))) << (((max((-2144463144), (2144463147))) - (2144463124))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-5469325467415180169LL)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [(signed char)9] [i_3])) ? (((/* implicit */long long int) var_12)) : (var_6))) : (((/* implicit */long long int) -1956655557))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((signed char) ((short) ((((/* implicit */_Bool) -2144463141)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) var_7)))))))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((1956655555) ^ (((((var_13) + (2147483647))) << (((((/* implicit */int) var_10)) - (46)))))))) : ((((~(var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (var_12) : (175538450U)))), ((~(var_6)))))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_4] [i_6] [i_4] [i_6] = ((/* implicit */signed char) ((((((arr_15 [6U] [6U]) + (9223372036854775807LL))) << ((((~(-2144463132))) - (2144463131))))) >> (((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-27964)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned short)31733)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))))) + (27999)))));
                    var_17 ^= ((((/* implicit */_Bool) (+((+(var_11)))))) ? (min((((/* implicit */long long int) (unsigned char)234)), ((+(var_6))))) : (((((/* implicit */_Bool) arr_15 [i_5 + 2] [(short)11])) ? (arr_15 [i_5 - 1] [i_5]) : (((/* implicit */long long int) 1956655561)))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) var_3))))) && (((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (min((var_0), (((/* implicit */unsigned int) -1956655567))))))));
}
