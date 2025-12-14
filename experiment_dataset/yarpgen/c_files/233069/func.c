/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233069
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
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((((/* implicit */int) var_9)) >> (((arr_0 [i_0]) - (719192459U))))) >> ((((~(((/* implicit */int) var_18)))) + (1177))))) : ((+(((/* implicit */int) (unsigned short)0))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) arr_8 [i_0]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) ^ (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_4] [i_5]), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_12)))))))) ? (((/* implicit */int) (unsigned short)3)) : (((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (unsigned short)65498))))))));
                    var_22 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) var_9)))) - (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        var_23 *= ((/* implicit */_Bool) (+(max((((((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 1] [i_6 - 1])) << (((/* implicit */int) (unsigned short)23)))), (((((/* implicit */_Bool) arr_7 [i_6] [(signed char)5] [i_6 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
        var_24 = ((/* implicit */short) ((_Bool) (((+((-2147483647 - 1)))) / ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)18)))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21943))))) ? (((((/* implicit */_Bool) min((131099992U), (((/* implicit */unsigned int) 0))))) ? (((/* implicit */int) min((arr_15 [7LL] [i_6]), (arr_10 [i_6 + 1] [(short)8] [(_Bool)1] [i_6] [(signed char)0])))) : (((((/* implicit */_Bool) 4193280U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65533)))))) : (((/* implicit */int) (short)-13120))));
    }
    var_26 = (signed char)-65;
    var_27 = var_1;
}
