/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237347
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41313)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))))) && (((((/* implicit */_Bool) (unsigned short)65533)) && (((/* implicit */_Bool) var_3))))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) (signed char)-44)))) <= (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)4))))) : (arr_7 [i_1 + 1] [i_1] [i_4])))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0]))))));
                                arr_12 [17] [i_1] [(signed char)10] [i_1] [i_1] [(short)12] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [(unsigned short)1] [(signed char)11] [i_1] [i_3] [i_4]))))) ? ((+(((/* implicit */int) (unsigned short)36762)))) : (max((((/* implicit */int) arr_1 [i_1])), (arr_9 [16] [i_1] [i_1] [(unsigned short)12])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */_Bool) ((unsigned char) max(((~(805306368U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_1]))))))));
                var_15 ^= ((/* implicit */int) min(((signed char)4), ((signed char)3)));
                arr_14 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-72)), (5375276955448343957ULL)));
            }
        } 
    } 
}
