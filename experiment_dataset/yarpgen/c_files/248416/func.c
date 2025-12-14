/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248416
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
    var_10 &= ((/* implicit */short) var_9);
    var_11 = ((((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)220)), (var_8)))) <= (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_1))))) : (min((((var_4) + (((/* implicit */long long int) var_7)))), (var_4))));
    var_12 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) var_2)), (761360783474244404ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-18834))) ^ (72057594037796864LL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (~(var_4)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_14 -= ((/* implicit */short) arr_0 [i_0 - 1] [i_0]);
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)240)) * (((((/* implicit */int) var_0)) >> (((var_6) + (4258723857293529289LL)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) min(((short)7680), (max((max((var_1), (((/* implicit */short) var_0)))), (((/* implicit */short) ((((/* implicit */_Bool) 244754244980938749LL)) || (((/* implicit */_Bool) (short)22116)))))))));
                        var_17 = ((/* implicit */_Bool) ((unsigned long long int) min((var_3), (((/* implicit */unsigned short) arr_2 [i_0 + 1])))));
                        var_18 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_7))), (((/* implicit */int) ((arr_10 [i_0] [9LL] [i_4]) && (((/* implicit */_Bool) (unsigned char)224)))))))));
                        var_19 = ((/* implicit */short) max((((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0])), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_10 [(short)14] [i_0 + 2] [i_0 + 2]))))));
                        var_20 = ((((((((/* implicit */int) (unsigned char)238)) << (((-244754244980938735LL) + (244754244980938752LL))))) > (((/* implicit */int) ((_Bool) var_1))))) ? (((((((/* implicit */_Bool) 244754244980938758LL)) || (((/* implicit */_Bool) var_1)))) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_1]))))))));
                    }
                    var_21 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 1124800395214848ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_1] [i_0] [9ULL]))))))) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1])))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)241)))) | (((arr_8 [(unsigned char)16] [(unsigned char)6] [i_1] [12LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
}
