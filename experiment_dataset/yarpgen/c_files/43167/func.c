/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43167
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
    var_10 = ((((/* implicit */_Bool) var_8)) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 4196073448U)) : (var_9))))) : (((/* implicit */unsigned long long int) ((98893848U) >> (((4196073456U) - (4196073447U)))))));
    var_11 &= ((/* implicit */_Bool) (+(var_8)));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_4), (var_3))))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15895585735771300639ULL))) : (((var_9) - ((-(var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (5346568873469977545ULL))) / (((/* implicit */unsigned long long int) ((unsigned int) 98893847U)))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((long long int) var_9)), (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (arr_10 [14LL] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))));
                                arr_13 [i_0 - 1] [i_0] [i_1] [i_2 + 1] [i_0] [9U] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((unsigned short) (unsigned short)22389)))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)28672))))) / (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_4]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
