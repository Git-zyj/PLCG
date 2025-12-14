/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27975
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_16 = min((((/* implicit */unsigned long long int) max((arr_1 [i_0 - 1]), (((/* implicit */short) (_Bool)1))))), (min((arr_0 [i_0 - 1] [i_0 + 2]), (((/* implicit */unsigned long long int) var_13)))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
            var_19 = ((/* implicit */short) (signed char)106);
        }
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) min((24615893544029701ULL), (((/* implicit */unsigned long long int) (signed char)94))))) ? (((-2112328239) + (((/* implicit */int) (unsigned short)37681)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37668))))))) + (2147483647))) << (((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (unsigned char)227)) & (((/* implicit */int) var_4)))) : (((/* implicit */int) min((arr_8 [i_2]), (arr_3 [i_3] [(short)15])))))) - (64)))));
            arr_11 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)37672)) ? (((/* implicit */int) (signed char)122)) : (-1836825916)))));
        }
        var_20 &= ((/* implicit */_Bool) var_3);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_2] [i_4] = ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_3 [i_4] [i_4])) + (((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) < (-4273071219075132168LL))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -639414975)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_6 [i_4]))))), (((((/* implicit */_Bool) 3026882454U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (var_1))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -639414975)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_4])))));
            arr_15 [i_2] [i_4] [i_4] = ((/* implicit */int) var_0);
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                var_22 = ((/* implicit */_Bool) (unsigned char)67);
                arr_19 [i_2] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)113))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_2] [i_5])) : (((/* implicit */int) arr_17 [i_2] [i_4] [i_5]))))) - (arr_13 [i_5 + 1] [i_5] [i_5])))));
                var_23 = ((unsigned long long int) ((min((arr_0 [i_5] [i_4]), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_4]))) / (4243863953248364116LL))))));
                var_24 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_9 [i_5 + 2] [i_5 + 2] [i_5])))) >> (((((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5])) ? (arr_13 [i_5 - 1] [i_5 + 2] [i_5 + 2]) : (arr_13 [i_5 + 2] [i_5 - 1] [i_5]))) - (12486835486634058736ULL)))));
            }
            arr_20 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2] [i_4])), (arr_8 [i_2])))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 639414975)))))));
        }
        for (short i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            arr_25 [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_4 [i_2]))) > (((/* implicit */int) ((unsigned char) -639414975)))));
            var_25 = ((/* implicit */signed char) -98967624);
            var_26 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)62277)) << (((/* implicit */int) ((((/* implicit */_Bool) min((9981612640983494274ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) arr_3 [i_2] [i_6])))))));
        }
        arr_26 [i_2] &= ((/* implicit */unsigned char) arr_2 [i_2] [i_2]);
    }
    var_27 = ((/* implicit */unsigned char) var_4);
}
