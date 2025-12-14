/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48505
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_2)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) | (6356857704192928907LL)))))), (((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (short)1))))))));
                var_17 = ((/* implicit */long long int) ((signed char) ((short) ((((/* implicit */int) (short)12)) * (((/* implicit */int) var_13))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_2] [4ULL] [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (short)7))) & (((/* implicit */int) var_0))));
                                arr_13 [i_1] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0 + 1])))) != (max((((((/* implicit */int) (short)-1)) - (-655159104))), ((-(((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) var_10);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_8))) > ((+(((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [7LL]))))))) - (((/* implicit */int) ((_Bool) var_2)))));
                }
                var_20 = ((((/* implicit */_Bool) (short)8454)) ? (((arr_3 [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0 - 2]) >= (((/* implicit */long long int) 4291633722U)))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)173)), ((short)27))))));
                arr_14 [i_1] = max((min((((/* implicit */long long int) (short)-1169)), (var_3))), (min((arr_0 [i_0 - 1]), (((/* implicit */long long int) 655159104)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)24155);
        arr_19 [i_5] = ((/* implicit */unsigned short) ((unsigned char) max((min((var_2), (((/* implicit */unsigned int) arr_16 [i_5])))), (((/* implicit */unsigned int) arr_16 [i_5])))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_2))));
        var_22 = ((/* implicit */short) (~(min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) 994160385)) ? (((/* implicit */unsigned int) 1073479680)) : (4291633710U))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_21 [i_6 + 2] [i_6 + 1]), (var_4))))));
                var_24 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_6] [(unsigned short)6])))))))));
                var_25 = ((/* implicit */unsigned int) (~(274877906943LL)));
                var_26 = ((/* implicit */_Bool) ((short) ((signed char) ((arr_22 [i_7] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5481552937704387255LL)))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (+(var_9)));
    var_28 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (144115187002114048LL)))), (var_9))));
}
