/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192697
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
    var_14 = ((/* implicit */signed char) 4996493647184132481ULL);
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned char)247))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] = ((/* implicit */unsigned char) var_6);
                                var_16 ^= ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        arr_15 [(_Bool)1] [i_2] [i_1 + 1] = ((/* implicit */long long int) ((unsigned char) 6544986149353794660LL));
                        var_17 ^= ((/* implicit */signed char) arr_1 [i_1]);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)24))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_19 *= (unsigned char)38;
                            arr_22 [i_1] [i_7] [i_1] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) var_7)), (-1304110854)))) * (((((/* implicit */long long int) ((/* implicit */int) arr_9 [9LL]))) / (-346130489197011035LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) / (((/* implicit */int) (_Bool)1))))) ? (18LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)62783)))))))) : (((arr_5 [i_0] [i_1] [i_2] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24)))))));
                        }
                        arr_23 [(signed char)11] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)105))))));
                    }
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) arr_13 [i_0]);
    }
}
