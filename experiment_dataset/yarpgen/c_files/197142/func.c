/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197142
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((((/* implicit */int) (unsigned char)65)) < (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (0LL))))))));
                            var_15 |= ((unsigned short) 0LL);
                            var_16 |= ((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_3]);
                            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6128)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) 4398046511103ULL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */long long int) 645327694);
                            var_19 = ((/* implicit */int) var_9);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) min((arr_7 [i_0] [i_1] [i_5]), (((/* implicit */unsigned char) arr_1 [(unsigned char)11] [i_0 - 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */int) (-((+(var_12)))));
                            var_22 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)6883), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : ((-(var_12)))))) ? (((((_Bool) 389271735U)) ? ((~(((/* implicit */int) (short)941)))) : (((/* implicit */int) ((_Bool) var_3))))) : (((/* implicit */int) var_5))));
    var_24 = ((/* implicit */signed char) var_13);
    var_25 |= ((/* implicit */short) (((((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_3)) + (102))))) - (3))))) >> (((((/* implicit */int) var_9)) - (6881)))));
}
