/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225941
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (unsigned char)0))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1 - 1] [i_0] [i_2] [i_3 - 2] = ((/* implicit */_Bool) (+(6441526342256043859LL)));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_4 - 1]);
                                arr_21 [i_0] [i_0] [i_4] [2LL] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) (_Bool)0)))))) % ((+(((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned char)10] [i_5] [i_6])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38952)) ? (var_8) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)53))))) : (arr_29 [4U] [(unsigned char)8] [i_7 - 1] [i_7 - 1] [(_Bool)1] [(_Bool)1] [(unsigned char)10])));
                                arr_30 [i_0] [i_1] = ((/* implicit */unsigned int) -6441526342256043860LL);
                                var_18 -= ((_Bool) (-(var_8)));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [(unsigned char)0] [i_4]))));
                }
            }
        } 
    } 
    var_19 = ((unsigned char) ((((-6441526342256043860LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) & ((+(-6441526342256043859LL)))));
}
