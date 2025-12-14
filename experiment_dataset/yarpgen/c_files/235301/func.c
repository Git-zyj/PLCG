/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235301
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
    var_16 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_0)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [(_Bool)1] [(short)13] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) (unsigned char)176)), (((var_12) << (((var_7) - (191568146))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */int) (unsigned short)10159)) : (((/* implicit */int) (unsigned char)246)))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) / ((~(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31289)))))))));
                        var_20 = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)188), ((unsigned char)0))))))) ? (((((/* implicit */_Bool) (short)22577)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) min(((signed char)118), ((signed char)-122)))))) : (((((/* implicit */_Bool) (~(-1508372302009245357LL)))) ? (-2147483636) : ((-(((/* implicit */int) (unsigned char)231))))))));
        var_22 = ((/* implicit */unsigned int) (~(min((min((var_6), (((/* implicit */long long int) arr_7 [i_0] [(_Bool)1] [i_0] [14U])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22577)) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_0])))))))));
    }
}
