/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49194
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0U) >> (((1048575ULL) - (1048566ULL)))))) ? (13989272703654395494ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                var_17 = (((+(min((arr_3 [i_1] [i_1]), (arr_2 [i_0] [i_0] [i_1]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) 278754018U)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) 762427198))));
                            arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((4294967292U), (((/* implicit */unsigned int) arr_5 [i_2] [i_1])))))) / (((/* implicit */int) (short)-434))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_2))));
    var_20 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (signed char)-109)) ? (4294967290U) : (4294967295U))), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)12515), (((/* implicit */unsigned short) var_11)))))))))));
}
