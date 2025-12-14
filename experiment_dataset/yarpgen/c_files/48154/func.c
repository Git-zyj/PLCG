/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48154
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                var_20 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)26800))))) - (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned int) ((int) var_11))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) (short)-8273)))))))))));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_4] [i_5])), (2343279888092576014ULL))))))) >> (((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))) ? (((var_12) ? (var_13) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_3])) >= (((/* implicit */int) var_2))))))) + (203589046)))));
                            var_25 = ((/* implicit */unsigned char) (~(max((16103464185616975603ULL), (((/* implicit */unsigned long long int) ((int) var_6)))))));
                            var_26 = ((/* implicit */unsigned char) var_15);
                            var_27 = ((/* implicit */_Bool) ((unsigned int) ((int) 17336916409645642417ULL)));
                            arr_16 [i_5] [i_3] [i_4 + 1] = ((/* implicit */unsigned char) var_18);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_28 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 + 3] [i_6] [i_6 - 2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_19 [i_6] [i_6 + 3] [i_6] [i_6] [i_6])))) : (((-4778659252539098885LL) & (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                            var_29 -= ((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_7] [i_7] [i_7 + 1] [i_7 - 1]));
                        }
                    } 
                } 
                var_30 = (!(((/* implicit */_Bool) (short)-27609)));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) 16103464185616975602ULL);
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((1109827664063909219ULL) >> (((((int) var_0)) - (566496552)))))));
                            var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-21574)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_18 [i_8] [i_3]))), (((/* implicit */long long int) var_16))));
                            arr_27 [i_2] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -910366448)) ? (17336916409645642405ULL) : (17321917093050290090ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
