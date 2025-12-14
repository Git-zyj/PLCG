/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197899
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (~((((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) 1584103758U)))))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-27968))))))) & ((~(arr_10 [i_1 - 2] [i_0])))));
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 + 1]))))));
                            var_16 -= (+(((((/* implicit */int) (short)27967)) / (((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned short) (((-(8471339204322996348ULL))) / (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_2 [(short)17] [i_1])) & (((/* implicit */int) arr_3 [i_0] [15ULL])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 8471339204322996348ULL))))) * (((/* implicit */int) (short)-27968))))));
                var_19 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_7 [i_5] [i_5] [19]))))));
                var_20 ^= ((/* implicit */unsigned char) (((+(var_11))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_7 [(unsigned char)10] [i_5] [i_5]))))))));
            }
        } 
    } 
}
