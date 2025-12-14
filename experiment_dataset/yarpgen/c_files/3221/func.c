/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3221
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 &= ((/* implicit */unsigned int) -1965683163);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19909)) ? (((/* implicit */int) (short)15284)) : (1965683163)));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((var_6), (arr_0 [i_0])))))) ? (-9223372036854775801LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10670)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)83), ((unsigned char)186))))) : (-1405476494911872964LL)))));
        arr_3 [i_0] [(short)8] = ((/* implicit */int) (unsigned short)37639);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            {
                arr_8 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1405476494911872964LL)) ? (((/* implicit */unsigned long long int) -9223372036854775795LL)) : (3265616353765524806ULL)))) ? ((-(9223372036854775800LL))) : ((((_Bool)1) ? (-1405476494911872964LL) : (((/* implicit */long long int) var_8)))))), (((((/* implicit */_Bool) 1405476494911872975LL)) ? (max((arr_5 [i_1] [i_2 - 1]), (((/* implicit */long long int) 4294967283U)))) : ((~(-9223372036854775783LL)))))));
                var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -3856822175958875424LL)) ? (((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 2177425011U)) : (arr_5 [(unsigned short)11] [i_1])))))));
                arr_9 [i_2] = ((/* implicit */short) 0U);
            }
        } 
    } 
}
