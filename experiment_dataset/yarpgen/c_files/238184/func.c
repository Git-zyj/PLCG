/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238184
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)10565)))) >> (((11504946938803761970ULL) - (11504946938803761944ULL)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [7LL] [i_0]), (((/* implicit */unsigned short) var_2))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((arr_6 [i_1] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) max(((short)-32752), ((short)15515))))));
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (var_12)));
                            }
                        } 
                    } 
                } 
                arr_14 [(signed char)11] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((arr_6 [i_1] [17LL]) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))) ? (max((max((var_3), (arr_0 [4U] [4U]))), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */short) var_10))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) var_6))))) ? (((var_12) * (((/* implicit */int) arr_6 [(signed char)21] [11])))) : (((/* implicit */int) arr_6 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_25 [15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (arr_3 [i_0])))) ? (((((/* implicit */_Bool) ((unsigned int) var_4))) ? ((+(arr_17 [(short)19] [(_Bool)1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11737724)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3249))) : (-1LL)))))))));
                                arr_26 [i_0] [i_1] [i_0] [i_6] [4] = arr_24 [i_0] [i_1] [i_5] [i_5] [i_7];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) (+(max((var_3), (((/* implicit */unsigned long long int) ((unsigned int) var_8)))))));
}
