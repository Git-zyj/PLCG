/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191014
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
    var_17 = ((max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) min(((unsigned short)53707), (var_3)))))) % (((unsigned long long int) max((var_3), (((/* implicit */unsigned short) var_11))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 3] = ((/* implicit */unsigned long long int) ((max(((+(895034056808916559ULL))), (((/* implicit */unsigned long long int) ((var_8) == (var_15)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((short) ((unsigned short) min((arr_8 [i_0] [i_1 + 2] [12ULL] [i_2] [i_3] [i_3]), ((unsigned short)18104))))))));
                            var_19 = max((min((((/* implicit */unsigned long long int) (short)12373)), (5498976395021770670ULL))), (max(((+(arr_9 [i_0] [i_0] [i_0] [i_0]))), (min((var_15), (((/* implicit */unsigned long long int) (short)20837)))))));
                            arr_10 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */short) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18104))) * (5498976395021770665ULL))), (15481685347367617309ULL))), (max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_2])))))));
                            arr_11 [i_0] [i_1] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned long long int) ((7185457487371009726ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)1989))))), ((short)-23761)))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) min(((unsigned short)137), ((unsigned short)65398)))))));
                arr_13 [i_1] [i_0] = min((min((max((18333220698567941980ULL), (arr_9 [i_1 + 2] [i_0] [i_0] [i_0]))), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15529)) || (((/* implicit */_Bool) (unsigned short)152))))));
                arr_14 [i_1] = ((/* implicit */unsigned long long int) min((((short) max((((/* implicit */unsigned long long int) (unsigned short)47022)), (12135348008239648813ULL)))), (((/* implicit */short) ((min((15536969826526419425ULL), (arr_2 [i_0] [i_1] [i_0]))) <= (var_5))))));
            }
        } 
    } 
    var_20 = max(((~(max((3718679231624328417ULL), (var_7))))), ((-(((5868235594151303225ULL) - (8667290344315415622ULL))))));
}
