/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241033
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((long long int) var_11)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((5653859408664828578LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4096)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61431)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)4088)))))));
        var_19 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15579127183747217530ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088))) : (arr_0 [i_0])))), (((((/* implicit */_Bool) -343744947)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) min((var_11), (arr_2 [i_0]))))));
        var_20 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
    }
    for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_21 |= ((/* implicit */int) var_10);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] [14LL] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_13)))));
                                var_22 |= var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = arr_7 [(unsigned short)22];
    }
    var_24 = ((unsigned int) min((max((((/* implicit */unsigned long long int) (signed char)-78)), (88138631882357784ULL))), (((/* implicit */unsigned long long int) var_14))));
    var_25 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -3050939442318592921LL)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (short)-12723))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)106)) ^ (((/* implicit */int) (signed char)122))))) ? (((2251799809490944LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    var_26 = ((/* implicit */signed char) ((var_1) >= (((/* implicit */int) ((((var_1) + (((/* implicit */int) var_8)))) == (((/* implicit */int) ((short) (unsigned short)6))))))));
}
