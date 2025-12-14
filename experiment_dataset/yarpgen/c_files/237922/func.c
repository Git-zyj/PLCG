/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237922
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) (signed char)58))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (arr_1 [i_0 - 3])));
        arr_3 [13LL] = ((/* implicit */unsigned char) (signed char)-58);
        var_14 = ((/* implicit */int) (!(((_Bool) (unsigned char)160))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
        arr_4 [i_0 - 4] &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) - ((+(arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) var_5);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_1 [i_1])));
        arr_10 [(unsigned char)5] = var_10;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */signed char) var_2);
        var_16 = ((/* implicit */short) (~(min(((~(((/* implicit */int) (short)30934)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3654)))))))));
    }
    var_17 = var_5;
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (short)-12709)))))) : (var_2)))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = -8901778572767087129LL;
                    var_20 = ((/* implicit */unsigned long long int) min(((+(1558794957))), (max((var_13), (((/* implicit */int) arr_0 [i_3] [i_3]))))));
                    arr_20 [i_4] = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26065))) : (var_5))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)119)), (arr_0 [i_3] [i_3])))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (unsigned short)9410)))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_3]))))))));
                    arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned char) min((arr_19 [i_3] [i_4] [i_5]), (arr_19 [i_3] [i_4] [i_4]))));
                }
            } 
        } 
    } 
}
