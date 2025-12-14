/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27606
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min(((~(((/* implicit */int) (short)255)))), (max((((/* implicit */int) arr_9 [i_0])), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0 + 4] [i_4])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) var_4))))))));
                                var_13 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))));
                                arr_12 [i_0] [14ULL] [14ULL] [i_0] = ((/* implicit */int) ((((((/* implicit */int) ((unsigned char) arr_5 [i_0]))) + ((-(((/* implicit */int) var_9)))))) <= (((((/* implicit */_Bool) 4035225266123964416LL)) ? (((/* implicit */int) (signed char)-66)) : (var_6)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))), ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned int) arr_0 [i_0]))))));
                var_15 = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) var_0)) ? (4294966272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) var_6)) : (var_11)))))));
                var_16 = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)19783)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-123))))), ((unsigned char)152)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-9620)) : (min((((/* implicit */int) min((((/* implicit */short) var_3)), (var_7)))), (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-56))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) (-(905594007)))) : (var_11)));
    var_20 = ((/* implicit */unsigned long long int) ((var_1) >= (max(((~(17592186044415ULL))), (((/* implicit */unsigned long long int) (_Bool)0))))));
}
