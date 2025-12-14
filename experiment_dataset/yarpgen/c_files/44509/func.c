/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44509
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
    var_13 = ((/* implicit */long long int) var_8);
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (var_3))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)22532)) : (((/* implicit */int) (short)25340))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) + (6018661567388594512ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)7701)) ? (-401948287308393760LL) : (-6705841691464842266LL)))));
                arr_8 [(short)4] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned short)23248)) * (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((5077256642342875229ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50232))))))), ((_Bool)1)));
                arr_14 [i_3] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) : (var_9)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) ((min((var_3), (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) min((1211653340), (((/* implicit */int) (signed char)116)))))))), (max((((/* implicit */long long int) max((-1211653341), (((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (short)21636))) - (9223372036854775807LL))))))))));
                var_17 &= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_13 [i_5 - 2])) ? (((/* implicit */int) arr_13 [i_5 - 2])) : (((/* implicit */int) arr_13 [i_5 - 2])))));
            }
        } 
    } 
}
