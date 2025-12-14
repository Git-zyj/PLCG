/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37486
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
    var_19 = ((/* implicit */short) ((((((((/* implicit */int) (short)4502)) - (-383828545))) ^ (((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-28)))))) >= (((int) var_15))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) arr_4 [i_0]);
                    var_20 = ((/* implicit */int) arr_4 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                arr_16 [i_4] [i_3 + 1] = ((/* implicit */_Bool) ((short) (signed char)31));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_21 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4502)) | (((/* implicit */int) (unsigned char)57))));
                            arr_22 [i_3] [i_3 + 1] [i_3 + 1] [5] [i_3] [i_3 + 2] = ((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_3] [i_4]))))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 - 1]))) * (3191192411U)))))) & (((/* implicit */int) ((unsigned char) ((unsigned char) (signed char)29)))));
                        }
                    } 
                } 
                arr_23 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)34))));
                arr_24 [(_Bool)1] [i_4] [i_4] = ((/* implicit */long long int) (signed char)121);
            }
        } 
    } 
}
