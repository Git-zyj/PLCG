/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249217
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)64)), (2967370585U)));
                    arr_7 [i_0] [(unsigned short)3] [i_2] [i_1 - 1] = ((/* implicit */unsigned char) var_13);
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_13))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        var_17 = ((signed char) var_6);
        var_18 = ((/* implicit */long long int) ((short) (unsigned char)255));
    }
    for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 4) 
    {
        var_19 = ((/* implicit */signed char) var_11);
        var_20 = ((/* implicit */short) var_15);
        arr_13 [i_4 - 4] [11ULL] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)65535));
    }
    for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        arr_18 [i_5 - 1] = ((/* implicit */long long int) (short)-2491);
        var_21 = (-(var_0));
    }
    for (unsigned short i_6 = 2; i_6 < 23; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_2)))) ? ((-(((/* implicit */int) arr_20 [(short)21])))) : ((+(((/* implicit */int) arr_19 [i_6 - 1]))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) arr_19 [i_6 + 2]);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            arr_34 [i_10] [i_9] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) (-(3178242191895711745LL)));
                            arr_35 [i_6] [i_8] [(short)0] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                            arr_36 [i_6 + 2] [i_7] [i_8] [i_6] = (signed char)-28;
                        }
                    }
                } 
            } 
        } 
    }
}
