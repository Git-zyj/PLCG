/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26637
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) || (((/* implicit */_Bool) 14509039767988074439ULL)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)82)) ? (max((arr_2 [i_0 + 1]), (((/* implicit */unsigned long long int) (signed char)-33)))) : (min(((~(14387922227915663562ULL))), (arr_2 [i_0 - 1])))));
                var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_0 - 1])), (4058821845793888040ULL))) : (4058821845793888055ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 |= ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                var_20 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2]))))) ? (((((/* implicit */_Bool) 14509039767988074417ULL)) ? (6755399441055744LL) : (((/* implicit */long long int) var_6)))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) -1069933785)) : (var_4)))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1069933785)), (arr_9 [i_3])))) ? (193463499534664574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2])))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_20 [i_5] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) (signed char)72))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_18 [i_3] [i_3 + 2] [i_3] [i_3])), ((unsigned char)45)))))))));
                            arr_21 [i_2] [i_3] [i_4 + 1] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) arr_13 [i_3] [i_3 + 1] [i_3]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_17 [i_3] [i_3 + 1] [i_3] [4U]);
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (3937704305721477185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_2])))))) ? ((+(((/* implicit */int) arr_19 [i_2] [i_3])))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)-7390)))))))) ? (((((/* implicit */_Bool) 9605855071938540322ULL)) ? (((/* implicit */int) arr_19 [i_2] [i_2])) : ((-(((/* implicit */int) (short)1)))))) : (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned short)16376)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_2] [i_3] [i_2] [i_2])), ((unsigned short)65429))))))));
            }
        } 
    } 
}
