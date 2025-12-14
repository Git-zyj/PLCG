/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29796
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */signed char) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) min((var_21), ((unsigned char)40)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)106);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) (unsigned char)118);
                        var_22 -= ((/* implicit */unsigned char) (signed char)-47);
                        var_23 = (unsigned char)138;
                        var_24 ^= ((/* implicit */int) (unsigned char)150);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_25 = ((/* implicit */_Bool) (unsigned char)3);
                arr_15 [i_0] = (unsigned char)118;
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned char)118);
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (unsigned char)58))));
            }
        }
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_27 ^= ((/* implicit */unsigned long long int) (unsigned char)233);
        var_28 = ((/* implicit */unsigned int) (unsigned short)27127);
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_29 = ((/* implicit */_Bool) 3672447581U);
        var_30 = ((/* implicit */unsigned short) (unsigned char)28);
        var_31 ^= (unsigned char)0;
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 4026990009U))));
    }
    var_33 = ((/* implicit */unsigned short) var_13);
    var_34 = var_1;
    var_35 = ((/* implicit */int) var_2);
}
