/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224047
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4177686970330381076LL)) ? (var_7) : (((/* implicit */unsigned int) var_14))))) || (((/* implicit */_Bool) (unsigned short)10012))))), (((int) ((((/* implicit */_Bool) -4177686970330381077LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)2]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) var_14);
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [(_Bool)1] = ((((/* implicit */int) ((signed char) arr_3 [i_0] [(signed char)18]))) ^ (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (arr_8 [12] [i_1] [i_2] [(short)18] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(signed char)14] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))))) <= (((((/* implicit */_Bool) (unsigned short)55523)) ? (-4177686970330381073LL) : (((/* implicit */long long int) 2819269533U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 2457509256U)))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_13))));
    var_20 |= ((/* implicit */unsigned char) var_4);
}
