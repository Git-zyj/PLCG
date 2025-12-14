/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30868
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_16)) < (((/* implicit */int) (short)31654))))))) * (var_11)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        arr_10 [8LL] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned short)65535))))));
                        arr_11 [i_3 + 3] [i_3] [i_3] [i_2] = ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_2 - 1]) | (arr_3 [i_0 - 1] [i_2 - 1])))) ? (max((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2 - 1]))))))) : (((/* implicit */unsigned long long int) ((((arr_6 [i_1] [i_1] [i_1] [i_1]) | (-1822292547))) & (((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_0])) ? (((/* implicit */int) var_3)) : (2147483647)))))));
                        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)0)))), (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_14))))))) ? ((-((+(4398046511103ULL))))) : (((/* implicit */unsigned long long int) ((int) (-(var_15)))))));
                    }
                    for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min((arr_6 [i_0] [i_0] [i_0] [i_2 - 2]), (min((arr_9 [i_2] [i_2] [i_2 + 1] [i_2 - 1]), (arr_6 [i_0 - 1] [2LL] [i_2] [i_2 - 2])))));
                    }
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 5469316512923103927ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_2 - 1]))) - (var_10)))) : (((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    var_20 = ((unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_16)))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [8U])))))))))))));
        arr_19 [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((short) min((arr_16 [i_5 - 2] [i_5]), (((/* implicit */signed char) arr_18 [i_5])))))), (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)51), (((/* implicit */unsigned char) (signed char)127)))))) % (-238891255692404290LL)))));
        var_23 = ((/* implicit */unsigned char) ((signed char) ((((long long int) arr_16 [i_5] [i_5])) + (((/* implicit */long long int) ((/* implicit */int) var_12))))));
    }
    for (short i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) var_3);
        var_24 = ((/* implicit */long long int) var_9);
    }
}
