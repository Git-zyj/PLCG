/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246243
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_1] [(unsigned char)11] = ((/* implicit */unsigned short) (signed char)72);
                            var_13 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_1 [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_14 = ((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (short)13772)) : ((~(((/* implicit */int) (unsigned char)0)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)19742)) : (((/* implicit */int) arr_14 [i_6] [7ULL] [i_0]))))) ? (((int) 883119515)) : (((/* implicit */int) (_Bool)1)))) - (883119514))));
                                var_15 = ((/* implicit */short) min((((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_1] [i_4] [i_6])), (var_8)));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0])) - (65))))) >> ((((+(var_5))) - (1408876217U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) 9687952861354524162ULL);
}
