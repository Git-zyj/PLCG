/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240738
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
    var_13 = ((/* implicit */unsigned char) var_2);
    var_14 = ((/* implicit */long long int) var_12);
    var_15 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((15006073228338109054ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (max((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) var_4)))))));
                        arr_11 [i_1] [i_2] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_12)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] = ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)39643))))), (min((var_2), (((/* implicit */unsigned long long int) arr_3 [i_1] [(signed char)10] [i_2]))))));
                        arr_13 [i_0] [(unsigned short)10] [(unsigned short)10] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) (short)19285)) ? (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3]) : (arr_10 [i_0] [i_1 + 1] [i_1] [i_0] [i_3])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_10)))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_6] = ((/* implicit */unsigned long long int) var_10);
                            arr_28 [i_0] [i_4] [i_5] [i_4] [i_5] [i_0] = ((/* implicit */signed char) arr_21 [i_0] [7ULL]);
                        }
                        arr_29 [i_0] [i_4] [i_5] [i_5 - 3] [i_4] [i_6] = ((/* implicit */int) (-(var_0)));
                    }
                } 
            } 
        } 
        arr_30 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) & (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
        arr_31 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) min((-7022309608760508236LL), (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_9 [i_0] [7ULL] [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        arr_32 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [(unsigned short)2] [i_0] [(unsigned short)2]))));
    }
}
