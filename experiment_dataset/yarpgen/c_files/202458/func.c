/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202458
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)58536)) ? (((/* implicit */int) ((_Bool) (~(-10999480181868323LL))))) : (((/* implicit */int) (unsigned short)58536))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1 - 2] [i_1] [i_2] [i_3] = ((/* implicit */short) (+(max(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (7147508159208277311ULL))), (((/* implicit */unsigned long long int) arr_3 [i_3 - 2]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_2] = ((/* implicit */int) ((signed char) 11299235914501274305ULL));
                            var_14 = ((/* implicit */unsigned char) -537167708);
                            var_15 = ((/* implicit */_Bool) arr_12 [i_1] [i_1 - 3] [i_3 - 3] [i_3 + 2] [i_3 + 2]);
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2])))) != ((+(11299235914501274297ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((11299235914501274293ULL) == (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_4])))))) ^ (max((11299235914501274314ULL), (((/* implicit */unsigned long long int) 1787839431U))))))));
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4] [i_1 - 3] [i_1] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_5);
}
