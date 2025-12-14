/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43290
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
    var_19 = ((/* implicit */_Bool) ((short) (signed char)3));
    var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59646)) ? (((/* implicit */int) var_17)) : (-1197021720)))) ? (var_0) : (((((/* implicit */_Bool) -1197021720)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 17592186044415LL);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)64511)) : (((/* implicit */int) var_12))));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) ((unsigned char) 2147425140))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1298080947U)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [(unsigned short)10] [(unsigned char)14]))))))) : ((~(((/* implicit */int) (unsigned short)65534))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((min(((~(1197021720))), (((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)154)))))))));
                    }
                    for (int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -740415334347100693LL)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_9)) : (arr_13 [i_0] [i_6 + 1])))));
                        var_26 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) == (((((/* implicit */_Bool) var_14)) ? (var_14) : (arr_10 [i_3] [i_3]))))));
                        arr_20 [i_6] [i_3] [(unsigned short)3] [0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2538369473404329193ULL)) ? ((~(((((/* implicit */_Bool) arr_0 [7U])) ? (35183835217920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) : (18193952574744908158ULL)));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (var_15)));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_3] [i_7] [i_8] = ((/* implicit */unsigned int) arr_10 [i_3] [i_3]);
                                arr_26 [i_0 - 3] [i_3] [i_7] [i_8] [i_8] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((int) 650500736U))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_3] [10U] |= ((/* implicit */unsigned int) (unsigned char)255);
                }
            } 
        } 
        arr_28 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1197021721) : (((/* implicit */int) (unsigned char)10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9666893175217377636ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (var_2)))) ? (((/* implicit */unsigned long long int) (~(-4142618358408052162LL)))) : (var_18))));
    }
}
