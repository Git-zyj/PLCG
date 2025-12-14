/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207751
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned long long int) ((short) ((short) (short)-32756)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) 2147483647)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((signed char) ((signed char) var_10))));
            var_17 -= ((/* implicit */short) ((unsigned char) ((long long int) ((short) (_Bool)1))));
        }
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((unsigned int) var_15))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_19 += ((/* implicit */unsigned short) ((int) ((unsigned int) ((unsigned short) (unsigned char)40))));
                arr_11 [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((short) ((unsigned short) ((short) arr_9 [i_0] [i_2] [i_3] [16U]))));
                arr_12 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((signed char) ((signed char) (short)-1)));
            }
            arr_13 [i_2 - 2] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) ((short) arr_9 [i_0] [i_0] [i_2 + 1] [i_2 - 2]))));
        }
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) ((long long int) ((unsigned char) ((short) var_14))));
            arr_16 [i_0] [i_0] [i_4 - 1] = ((_Bool) (unsigned char)255);
        }
    }
    var_21 = ((signed char) ((unsigned char) ((unsigned int) (short)-32758)));
}
