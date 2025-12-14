/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49066
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) (unsigned short)6)))))) * (((/* implicit */int) max(((unsigned short)6), (((/* implicit */unsigned short) (unsigned char)250)))))));
                    var_15 = ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) (unsigned short)6)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (-1)));
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) >= ((-((-(var_12)))))));
    }
    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        arr_12 [9ULL] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)65529))))) ? (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */long long int) 1485386306)) : (-8190282163235392754LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)0)))))))));
        var_17 = ((/* implicit */unsigned char) (~(max((arr_10 [i_3 + 2]), (arr_10 [i_3 + 4])))));
    }
    var_18 = ((/* implicit */short) var_1);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) 8190282163235392753LL)) << (((/* implicit */int) (unsigned char)0))))) ? (max((((/* implicit */unsigned long long int) var_13)), (3653097884843164001ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65491)))));
}
