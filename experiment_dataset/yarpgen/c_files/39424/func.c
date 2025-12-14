/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39424
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
    var_20 |= ((/* implicit */unsigned short) var_17);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 += ((/* implicit */int) max((((((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) (signed char)-114)))) ? (((unsigned int) (short)16716)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2025508480)))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned short) (signed char)99))))));
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1429)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)89)) || (((/* implicit */_Bool) arr_1 [i_1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 642811969)))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)237)) : (var_11)))) || (((/* implicit */_Bool) (short)16716))))), ((+(((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */long long int) 385850422)) : (-2298197446666914017LL))))))))));
    }
    for (int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-18)), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) var_19))))))) || (((/* implicit */_Bool) arr_0 [i_2 + 1]))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (14058305919701167121ULL)))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_2 + 2])), (arr_0 [i_2 + 2]))))));
        arr_10 [i_2] [i_2] = (unsigned short)2707;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)14171)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_3 - 1] [i_2 - 1]))) : (1894747009U))));
                    var_26 = ((/* implicit */unsigned int) (unsigned short)50008);
                    arr_18 [i_4] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3 - 2])) || (((/* implicit */_Bool) 9027855279144151438ULL))))), (max(((short)-3801), (((/* implicit */short) arr_2 [i_3]))))))) || (((/* implicit */_Bool) ((int) 3006915130U)))));
                }
            } 
        } 
        arr_19 [i_2 - 2] = ((/* implicit */unsigned short) arr_12 [i_2] [i_2]);
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_27 = ((int) max((arr_20 [i_5]), (arr_20 [i_5])));
        arr_22 [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5])) || (((/* implicit */_Bool) arr_20 [i_5]))))), (4032ULL)));
        var_28 = ((/* implicit */signed char) arr_21 [i_5]);
        var_29 = ((/* implicit */short) max(((_Bool)1), (((((/* implicit */_Bool) (-(arr_21 [i_5])))) || (((/* implicit */_Bool) (unsigned short)65523))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)3801)) || (((/* implicit */_Bool) (unsigned short)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24175)) ? (((/* implicit */int) (unsigned short)37118)) : (((/* implicit */int) (unsigned short)28418)))))));
    }
}
