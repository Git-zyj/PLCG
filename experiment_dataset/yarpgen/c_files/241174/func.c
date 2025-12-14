/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241174
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))))) & (((/* implicit */int) var_0))));
                                var_10 = ((((/* implicit */_Bool) ((((long long int) var_1)) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)61)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 3057337247U))) || (((/* implicit */_Bool) max(((unsigned char)204), ((unsigned char)34))))))));
                                var_11 -= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) var_1)), (min((arr_5 [i_0] [i_3] [i_4 + 2]), (((/* implicit */unsigned int) arr_1 [i_0])))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-19300)))));
                                arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                                arr_16 [i_0] [i_2] = ((/* implicit */short) min((((((_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) (unsigned char)52)) ? (arr_0 [i_2 + 2] [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)480)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */short) arr_7 [i_0] [i_1] [i_1])), ((short)2091))), (arr_9 [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (min((var_8), (((/* implicit */unsigned long long int) ((var_9) ? (4481034187879716908LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) ((unsigned short) (unsigned short)500))) : (var_1))) : (((/* implicit */int) var_0))));
    var_14 = ((/* implicit */short) (+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((signed char) var_3)))))));
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)22229)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)63663))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)4096))))) : (max((((/* implicit */unsigned long long int) var_9)), (var_8)))))));
}
