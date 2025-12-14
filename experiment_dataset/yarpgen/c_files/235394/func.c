/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235394
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) var_4);
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32765)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0 + 4] [i_0 + 4]) : (arr_2 [i_0 - 2] [i_0 + 3]))))));
            var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1]))))));
        }
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned char) arr_5 [i_0] [i_2 - 1] [i_0]);
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((+((((_Bool)1) ? (859980977800431873LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) ((0ULL) >> (((9814741057607032702ULL) - (9814741057607032659ULL)))))))))))));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [(_Bool)1])) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_3] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 3] [i_3 + 4]))) : (((503332805606822932LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_3] [i_4 + 2]), (min((arr_9 [i_0] [i_0]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0])))))))))))));
                    arr_14 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)30))))));
                }
            } 
        } 
    }
    var_17 += ((/* implicit */short) (_Bool)1);
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 15; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)134), (((/* implicit */unsigned char) (_Bool)1))))) && (((((/* implicit */_Bool) (short)32765)) && (((/* implicit */_Bool) (signed char)-73))))));
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(10114278023019945144ULL)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_5] [i_5])), (arr_17 [i_5])))) : (((((/* implicit */int) (short)0)) + (((/* implicit */int) (signed char)116))))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_4))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_5])))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_5])))))));
    }
}
