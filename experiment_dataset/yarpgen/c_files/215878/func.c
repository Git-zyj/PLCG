/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215878
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
    var_18 = ((/* implicit */unsigned short) (+((+((+(var_3)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (0)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (+(var_16)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_5 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 1]);
                }
            } 
        } 
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0])));
        arr_11 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
        var_23 = ((/* implicit */short) (~(var_8)));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */short) arr_7 [5ULL] [i_3]);
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) || (((/* implicit */_Bool) var_9))));
    }
    for (short i_4 = 3; i_4 < 16; i_4 += 3) 
    {
        arr_21 [i_4] = ((/* implicit */long long int) arr_15 [i_4] [i_4]);
        var_24 = ((/* implicit */signed char) (unsigned short)4);
        arr_22 [i_4] = ((/* implicit */int) arr_3 [i_4]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) var_16);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)3)), (0ULL))))));
        arr_25 [0ULL] &= ((/* implicit */short) (signed char)-62);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 7; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) % (-5588067660197457134LL)));
                var_28 = ((/* implicit */long long int) ((((var_16) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                var_29 = ((/* implicit */signed char) var_2);
            }
            arr_31 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_1 [i_6]))))));
        }
    }
    var_30 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned long long int) (short)-1))));
}
